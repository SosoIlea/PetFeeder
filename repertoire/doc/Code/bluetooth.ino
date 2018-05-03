//**********************************************
//Code de reference pour le module bluetooth HC-06  
// envoi de commandes AT et affichage de la rÃ©ponse du module
//
//***********************************************/*  

//ATTENTION !!! Brancher Tx et Rx sans R APRES téléversement et inverser Tx et Rx
#include <SoftwareSerial.h>  //Software Serial Port  
#define RxD 10    //Pin 10 pour RX, PB2 sur votre board, a brancher sur le TX du HC-06
#define TxD 11    //Pin 11 pour TX, PB3 sur votre board, a brancher sur le RX du HC-06
SoftwareSerial BTSerie(RxD,TxD);  

void setup()  
{  
  Serial.begin(9600);
    // Configuration du bluetooth  
  pinMode(RxD, INPUT);  
  pinMode(TxD, OUTPUT);  
  BTSerie.begin(9600); 
    Serial.println("En attente de la commandes AT"); 
    delay(100);
  // Test des commandes AT  
  BTSerie.print("AT+VERSION");  //Demande le NÂ° de version 
  delay(1000);  
  }  
void loop()  
{  
  char recvChar;  
  //On lit caractere par caractere sur le BTSerie et on affiche sur le Terminal Serie  
  if (BTSerie.available()) {  
    recvChar = BTSerie.read(); //lecture  
    Serial.print(recvChar);  //ecriture
  }  
  //On lit caractere par caractere sur le terminal et on affiche sur le BT Serie 
  if (Serial.available()) {  
    recvChar = Serial.read(); //lecture
    BTSerie.write(recvChar);  //ecriture
  }  
  if(recvChar=='1'){
      digitalWrite(12,LOW);
    }
  if(recvChar=='0'){
      digitalWrite(12,HIGH);
    }
}  
