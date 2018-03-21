
![Polytech](http://www.polytechnice.fr/jahia/jsp/jahia/templates/inc/img/polytech_nice-sophia.png)

Ce projet est réalisé dans le cadre de la formation de prépa intégrée de 
Polytech'Nice
Sophia.
Ce projet est rendu réalisable grâce à nos enseignants : Monsieur Ferrero et Monsieur Masson.

# PetFeeder
![Chats et chiens](http://www.psy-qu-aux-pattes.fr/Files/Image/Template/logo-chien-et-chat_petit.gif)

## Naissance du projet :
Notre groupe est composé de : 
* Sophie ALLIER
* Iléa DUFRAIGNE

Nous avons décidé de former ce superbe groupe car nous partageons les mêmes idées et souhaitions faire le même projet -projet dont nous 

## Naissance du projet :
Notre groupe est composé de : 
* Sophie ALLIER
* Iléa DUFRAIGNE

Nous avons décidé de former ce superbe groupe car nous partageons les mêmes idées et souhaitions faire le même projet -projet dont nous avons trouvé l'idée bien avant de le commencer, l'année dernière, lorsque les étudiants du niveau supérieur et les professeurs abordaient ce sujet-.

## Description du projet :
Nous avons choisi de réaliser un distributeur de croquettes automatique pour chien et chat : le PetFeeder.
Nous réalisons ce projet car nous aimons les animaux domestiques en particulier les chats et les chiens que nous possédons. 
Distribuer de la nourriture à nos animaux est une tâche quotidienne, créer ce distributeur permet donc un gain de temps et d'argent (dans le commerce ces appreils coûtent entre 70 et 180€). De plus, il permet une certaine autonomie : vous pourrez partir plusieurs jours sans avoir à vous préoccuper de vos animaux.

## Fonctionnalités du projet :
Notre projet se base sur l'utilisation d'une carte Arduino et d'un module Bluetooth relié au téléphone. Il permet de nourrir deux animaux (ici un chat et un chien), qui n'ont pas forcément la même fréquence de repas et des quantités de nourriture différentes.
A l'aide du téléphone, on peut gerer la quantité de croquettes distribuées et choisir à quel animal elles sont destinées. Le projet permettra aussi d'indiquer si le réservoir est vide ou plein à l'aide de diodes de couleur. Le dispositif se déclenche a des horaires précis, ce qui permet au maître de ne pas être forcément présent. Nous utiliserons une application déja existante sur Android afin de connecter notre téléphone (notre niveau de programmation étant trop faible pour en créer une dans les temps). 
Cette application nommée Bluetooth Serial Controler permet de :     
  * recevoir une alerte sur le niveau de croquettes restantes.
  * confirmer en appuyant sur un bouton que les croquettes doivent bien être distribuées, et dans le cas où l'animal aurait mangé avant pour des raisons particulières, de ne pas distribuer les croquettes.
  
Cette application est modulable : on utilise les boutons de notre choix, que l'on place à notre guise.

##  Inspirations du projet :
Notre projet ressemblera à ceci pour le [fonctionnement](http://www.instructables.com/id/Automatic-Arduino-Powered-Pet-Feeder/). Esthétiqument il se rapproche de ce projet : ![PetFeeder](https://www.firediy.fr/images/articles/catfeeder/final.jpg)

## Matériel utilisé : 
- une boite qui contiendra l'ensemble pour un côté esthétique
- 2 bouteilles qui contiendront croquettes pour chat et croquettes pour chien séparemment
- 2 gamelles
- 2 moteurs pas à pas Nema 17 qui feront tourner les hélices
- un systeme Bluetooth 
- 6 LEDS (2 rouges, 2 jaunes, 2 vertes) qui indiqueront la quantité de croquettes restantes (Rouge = vide, vert= plein, jaune = prevention).
- un capteur de distance qui sera relié aux LEDs pour indiquer la quantité de croquettes restantes
- deux cartes Arduino Xplained d'Atmel
- une horloge RTC 1302
- des resistances pour les LEDs
- une plaque de connexion et des fils
- un systeme helice-tuyau en T relié au bout de la bouteille pour faire tomber les croquettes

## Avancé du projet :
- [X] Programmer les capteurs de distance avec les LEDs, programmer les horaires de distribution
- [ ] Programmer les moteurs et trouver quelle vitesse leur donner, ainsi que le nombre de tours à effectuer pour chaque animal
- [X] Imprimer les hélices et autres composants (les fichiers sont dans le lien donné plus haut)
- [X] Tester le programme gérant la quantité de croquettes restantes et les horaires programmés pour chaque animal
- [ ] Tester les moteurs reliés aux hélices, avec le tuyau en T, et des croquettes
- [ ] Relier le téléphone et le PetFeeder en Bluetooth
- [ ] Créer la boîte et finaliser l'esthétique

## Problèmes rencontrés et solutions proposées :


## Bonus :
Bien que nous parlions de chiens et chats, ce projet peut être adapté à différents animaux (poules, lapins) voire même redimensionné pour de plus gros animaux (chevaux, vaches, ...).

Ensuite, nous souhaitons chacune récupérer ce magnifique projet, nous allons donc créer la boîte et utiliser du matériel différent pour chaque animal afin de pouvoir "couper" le projet.
