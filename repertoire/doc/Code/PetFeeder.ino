//horloge
#include <DS1302.h>
// DS1302 patte RST  -> Arduino Digital 3
// DS1302 patte DATA -> Arduino Digital 7
// DS1302 patte CLK  -> Arduino Digital 8
DS1302 rtc(3,7,8);
Time t;

//Leds et capteur de distance
int echo = 9; 
int trig = 12;
int lecture_echo;
int led_rouge = 16;
int led_orange=14;
int led_verte= 15;

//bluetooth
#include <SoftwareSerial.h>  
#define RxD 10    
#define TxD 11    
SoftwareSerial BTSerie(RxD,TxD); 

//Moteur
const int STEPS_PER_REV = 100; //Nombre de tours 
const int dirPin = 4;  // Direction
const int stepPin = 5; // Step
const int enable=6;

//Buzzer
const int buzzerPin = 2;
const int songLength = 18;
char notes[] = "cdefaa Cba edc gabC ";
int beats[] = {1,1,1,1,1,1,4,4,2,1,1,1,1,1,1,4,4,2};
int tempo = 113;

int frequency(char note){ 
int i;
const int numNotes = 8;
char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
int frequencies[] = {262, 294, 330, 349, 392, 440, 494, 523};
for (i = 0; i < numNotes; i++){
if (names[i] == note){
   return(frequencies[i]);
   }
  }
 }


void setup(){  
    Serial.begin(9600);
  
  //bluetooth
  pinMode(RxD, INPUT);  
  pinMode(TxD, OUTPUT);  
  BTSerie.begin(9600); 
  Serial.println("En attente de la commandes AT"); 
  delay(100);
  BTSerie.print("AT+VERSION");  
  delay(1000);  

  //horloge
  rtc.halt(false);
  rtc.writeProtect(false);
  // A mettre a jour avec les bones valeurs pour initialiser l horloge RTC DS1302
  rtc.setTime(13,00,00);    // Heure a 19:10:00 (format sur 24 heure)

 //Moteur
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  

 //Buzzer
 pinMode(buzzerPin, OUTPUT);

 //Leds et capteur de distance
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(led_rouge,OUTPUT);
  digitalWrite(led_rouge,LOW);
  pinMode(led_orange,OUTPUT);
  digitalWrite(led_orange,LOW);
  pinMode(led_verte,OUTPUT);
  digitalWrite(led_verte,LOW);
}  


void loop(){ 
  //l'horloge fonctionne en continu, le capteur et les Leds aussi

  //Leds et capteur de distance
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  lecture_echo=pulseIn(echo,HIGH);
  Serial.println(lecture_echo*0.017);
  if((lecture_echo*0.017)>30){digitalWrite(led_rouge,HIGH); digitalWrite(led_orange,LOW);digitalWrite(led_verte,LOW);}
  if(((lecture_echo*0.017)>25) && ((lecture_echo*0.017)<30)){digitalWrite(led_orange,HIGH);digitalWrite(led_verte,LOW); digitalWrite(led_rouge,LOW);}
  if(((lecture_echo*0.017)>0) && ((lecture_echo*0.017)<25)){digitalWrite(led_verte,HIGH); digitalWrite(led_rouge,LOW);digitalWrite(led_orange,LOW);}
  
   //horloge
  char recvChar;    
  t = rtc.getTime();
  Serial.print(t.hour, DEC);
  Serial.print(" heures, ");
   Serial.print(t.min, DEC);
   Serial.print(" minutes ");
   Serial.print(t.sec, DEC);
   Serial.println(" secondes.");
  if(recvChar == "1"){
    if (((t.hour==8)&&(t.min==29)&&(t.sec>50)&&(t.sec<58))||((t.hour==18)&&(t.min==29)&&(t.sec>50)&&(t.sec<58))){
      int i, duration;
      for (i = 0; i < songLength; i++){
        duration = beats[i] * tempo;
        if (notes[i] == ' '){
          delay(duration);
        }
       else{
        tone(buzzerPin, frequency(notes[i]), duration);
        delay(duration);
       }
       delay(tempo/10);
    }
    }

  if ((t.hour==8)&&(t.min==30)&&(t.sec>0)&&(t.sec<25)){ //A REGLER
    digitalWrite(enable,LOW);
    digitalWrite(dirPin,LOW);
    for(int x = 0; x < (STEPS_PER_REV * 4); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(800); 
    digitalWrite(stepPin,LOW);
    delayMicroseconds(800);
    }
    digitalWrite(dirPin,HIGH);
  for(int x = 0; x < (STEPS_PER_REV * 2); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(800);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(800);
  }
  digitalWrite(enable,HIGH);
 digitalWrite(stepPin,LOW);
  delay(1000);
    }

  if ((t.hour==18)&&(t.min==30)&&(t.sec>0)&&(t.sec<25)){
    digitalWrite(enable,LOW);
    digitalWrite(dirPin,LOW);
    for(int x = 0; x < (STEPS_PER_REV * 4); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(800); 
    digitalWrite(stepPin,LOW);
    delayMicroseconds(800);
    }
    digitalWrite(dirPin,HIGH);
  for(int x = 0; x < (STEPS_PER_REV * 2); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(800);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(800);
  }
  digitalWrite(enable,HIGH);
 digitalWrite(stepPin,LOW);
  delay(1000);
    }
  }
  if(recvChar == "0"){
  }
  
  }
}  
