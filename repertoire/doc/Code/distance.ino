int echo = 8; 
int trig = 9;
int lecture_echo;
int led_rouge = 2;
int led_orange=3;
int led_verte= 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(led_rouge,OUTPUT);
  digitalWrite(led_rouge,LOW);
  pinMode(led_orange,OUTPUT);
  digitalWrite(led_orange,LOW);
  pinMode(led_verte,OUTPUT);
  digitalWrite(led_verte,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  lecture_echo=pulseIn(echo,HIGH);
  Serial.println(lecture_echo*0.017);
  if((lecture_echo*0.017)>21){digitalWrite(led_rouge,HIGH); digitalWrite(led_orange,LOW);digitalWrite(led_verte,LOW);}
  if(((lecture_echo*0.017)>18) && ((lecture_echo*0.017)<21)){digitalWrite(led_orange,HIGH);digitalWrite(led_verte,LOW); digitalWrite(led_rouge,LOW);}
  if(((lecture_echo*0.017)>0) && ((lecture_echo*0.017)<18)){digitalWrite(led_verte,HIGH); digitalWrite(led_rouge,LOW);digitalWrite(led_orange,LOW);}
  delay(500);
}
