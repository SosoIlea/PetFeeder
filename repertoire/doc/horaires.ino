
#include <DS1302.h>
//Horloge
// Init DS1302
// Les connections suivantes doivent être effectuées DS1302.
// DS1302 patte RST  -> Arduino Digital 2
// DS1302 patte DATA -> Arduino Digital 3
// DS1302 patte CLK  -> Arduino Digital 7
DS1302 rtc(2,3,7);

// Init structure Time-data
Time t;

//Moteur
int x; //Nombre de tour 

//Buzzer
const int buzzerPin = 2;
const int songLength = 18;
char notes[] = "cdefaa Cba edc gabC ";
int beats[] = {1,1,1,1,1,1,4,4,2,1,1,1,1,1,1,4,4,2};
int tempo = 113;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  //Horloge
  rtc.halt(false);
  rtc.writeProtect(false);
 // Initialisation de l'horloge
  // A mettre a jour avec les bones valeurs pour initialiser l horloge RTC DS1302
  //rtc.setDOW(THURSDAY);        // Jour a FRIDAY
  //rtc.setTime(11,34, 0);    // Heure a 19:10:00 (format sur 24 heure)
  //rtc.setDate(18,1, 2018);   // Date  au 3 juin 2016

 //Moteur
 pinMode(6,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(4,OUTPUT);
 digitalWrite(6,LOW);

 //Buzzer
 pinMode(buzzerPin, OUTPUT);

 
}

void loop() {
  // put your main code here, to run repeatedly:
  t = rtc.getTime();
  Serial.print(t.hour, DEC);
  Serial.print(" heures, ");
  Serial.print(t.min, DEC);
  Serial.print(" minutes ");
  Serial.print(t.sec, DEC);
  Serial.println(" secondes.");
 //On déclenche le buzzer 1' avant pour alerter le chien
  if ((t.hour==8)&&(t.min==29)&&(t.sec>30)&&(t.sec<40)){
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
    while(true){}
  int frequency(char note) 
{
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
   return(0);
}
//C'est l'heure , le moteur tourne
  if ((t.hour==8)&&(t.min==30)&&(t.sec>0)&&(t.sec<8)){ //A REGLER
    }
  if ((t.hour==18)&&(t.min==29)&&(t.sec>30)&&(t.sec<40)){
    }
  if ((t.hour==18)&&(t.min==30)&&(t.sec>0)&&(t.sec<8)){// A REGLER
    }
   
  else{
  }
  
}
