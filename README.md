
# PetFeeder
![Polytech](http://www.polytechnice.fr/jahia/jsp/jahia/templates/inc/img/polytech_nice-sophia.png)

Ce projet est réalisé dans le cadre de la formation de prépa intégrée de 
Polytech'Nice
Sophia

Nous avons comme projet un distributeur de croquettes pour chien et chat : le PetFeeder.
Nous avons choisi ce projet car nous aimons les animaux domestiques en particulier les chats et les chiens que nous possedons. 

Le but de ce projet : à l'aide du téléphone, pouvoir gerer la quantité de croquettes distribuées, choisir à quel animal elles sont destinées. Le projet permettra d'indiquer si le réservoir est vide ou plein. Le dispositif se déclenche a des horaires précis, ce qui 
permet au maître de ne pas être forcément présent. Si l'utilisateur est présent, une notification est envoyée au maître pour demander confirmation (au cas où l'animal aurait mangé plus tôt pour des raisons particulières).

Notre projet ressemblera à : 
(https://www.google.fr/search?client=ubuntu&channel=fs&dcr=0&biw=1375&bih=800&tbm=isch&sa=1&ei=n8g8WovvCtCwsAfBn4mIAQ&q=pet+feeder+arduino&oq=pet+feeder+ar&gs_l=psy-ab.3.0.0i19k1.12909.16918.0.17567.19.15.3.1.1.0.150.1182.14j1.15.0....0...1c.1.64.psy-ab..0.19.1223...0j0i67k1j0i30k1j0i13k1j0i13i30k1j0i5i30k1j0i24k1.0.nzgMk8fEw_0#imgrc=LQdHoUZ9O2IWuM:)

Matériel utilisé : 
- une boite qui contiendra l'ensemble pour un côté esthétique.
- 2 bouteilles qui contiendront croquettes pour chat et croquettes pour chien séparemment. 
- des "toboggans" reliés aux bouteilles pour faire tomber les croquettes dans la gamelle.
- 2 gamelles.
- 2 moteurs pas à pas qui feront tourner les molettes des bouteilles. 
- un systeme Heltec WiFi LoRa 32 par téléphone relié aux moteurs. 
- 6 LEDS (2 rouges, 2 oranges, 2 vertes) qui indiqueront la quantité de croquettes restantes (Rouge = vide, vert= plein, orange=prévention).
- un capteur de distance qui sera relié aux LEDs pour indiquer la quantité de croquettes restantes.
- une carte arduino Xplained d'Atmel.
- des resistances 
- une plaque de connexion et des fils.

Nous nous inspirons de :
https://www.firediy.fr/article/realisation-d-un-cat-feeder-controle-par-arduino
https://create.arduino.cc/projecthub/circuito-io-team/iot-pet-feeder-10a4f3?ref=search&ref_id=pet%20feeder&offset=1
