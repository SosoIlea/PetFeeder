
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

Nous avons décidé de former ce superbe groupe car nous partageons les mêmes idées et souhaitions faire le même projet -projet dont nous avons trouvé l'idée bien avant de le commencer, l'année dernière, lorsque les étudiants du niveau supérieur et les professeurs abordaient ce sujet-.

## Description du projet :
Nous avons choisi de réaliser un distributeur de croquettes automatique pour chien et chat : le PetFeeder.
Nous réalisons ce projet car nous aimons les animaux domestiques en particulier les chats et les chiens que nous possédons. 
Distribuer de la nourriture à nos animaux est une tâche quotidienne, créer ce distributeur permet donc un gain de temps et d'argent (dans le commerce ces appreils coûtent entre 70 et 180€). De plus, il permet une certaine autonomie : vous pourrez partir plusieurs jours sans avoir à vous préoccuper de vos animaux.

## Fonctionnalités du projet :
Notre projet se base sur l'utilisation d'une carte Arduino et d'un module Bluetooth relié au téléphone. Il permet de nourrir deux animaux (ici un chat et un chien), qui n'ont pas forcément la même fréquence de repas et des quantités de nourriture différentes.
A l'aide du téléphone, on peut gérer la quantité de croquettes distribuées. Le projet permettra aussi d'indiquer si le réservoir est vide ou plein à l'aide de diodes de couleur, et de jouer une "mélodie" pour que l'animal sache que les croquettes ont été distribuées (car les animaux n'ont pas la notion du temps et des horaires). Le dispositif se déclenche a des horaires précis, ce qui permet au maître de ne pas être forcément présent. Nous utiliserons une application déja existante sur Android afin de connecter notre téléphone (notre niveau de programmation étant trop faible pour en créer une dans les temps). 
Cette application nommée Bluetooth Electronics permet de :     
  * dans le cas où l'animal aurait mangé avant pour des raisons particulières, de ne pas distribuer les croquettes
  * confirmer en appuyant sur un bouton que les croquettes doivent bien être distribuées, si on est présent
  
Cette application est modulable : on utilise les boutons de notre choix, que l'on place à notre guise.

##  Inspirations du projet :
Notre projet ressemblera à ceci pour le [fonctionnement](http://www.instructables.com/id/Automatic-Arduino-Powered-Pet-Feeder/). Esthétiquement il se rapproche de ce projet : ![PetFeeder](https://www.firediy.fr/images/articles/catfeeder/final.jpg)

## Matériel utilisé : 
- une boite qui contiendra l'ensemble pour un côté esthétique
- 1 bouteille qui contiendra les croquettes 
- 1 gamelle
- 1 moteur pas à pas Nema 17 qui fera tourner l'hélice
- un systeme Bluetooth 
- 3 LEDS (1 rouge, 1 jaune, 1 verte) qui indiqueront la quantité de croquettes restantes (Rouge = vide, vert= plein, jaune = prevention).
- un capteur de distance qui sera relié aux LEDs pour indiquer la quantité de croquettes restantes
- une carte Arduino Xplained d'Atmel
- une horloge RTC 1302
- des resistances pour les LEDs
- une plaque de connexion et des fils
- un systeme helice-tuyau en T relié au bout de la bouteille pour faire tomber les croquettes
- une pièce de piscine pour relier bouteille et tuyau, avec de la colle
- un buzzer qui préviendra l'animal qu'il peut manger

## Avancé du projet :
- [X] Programmer les capteurs de distance avec les LEDs, programmer les horaires de distribution
- [ ] Programmer les moteurs et trouver quelle vitesse leur donner, ainsi que le nombre de tours à effectuer pour chaque animal
- [X] Imprimer les hélices et autres composants (les fichiers sont dans le lien donné plus haut)
- [X] Tester le programme gérant la quantité de croquettes restantes et les horaires programmés
- [X] Tester les moteurs reliés aux hélices, avec le tuyau en T, et des croquettes
- [X] Relier le téléphone et le PetFeeder en Bluetooth
- [X] Faire le programme Bluetooth qui demande à l'utilisateur si on fait la distribution ou non
- [ ] Créer la boîte et finaliser l'esthétique
- [X] Créer une mélodie avec le buzzer

## Problèmes rencontrés et solutions proposées :
Notre projet de départ devait permettre de distribuer les croquettes à l'aide de molettes gérant la quantité de croquettes. Mais après avoir fixé le moteur à celles-ci et en essayant avce de véritables croquettes, nous nous sommes rendu compte que ce n'était pas la bonne solution. En effet aucune croquette ne tombait car elles faisaient pression sur les bords de la bouteilles et empechaient la molette de tourner (même avce la force humaine rien ne bougeait). Nous avons donc dû chercher un autre moyen de les faire tomber (sans croquettes, pas de projet ...). On nous a alors conseillé le site mis plus haut, qui utilsait une hélice et un tuyau, ainsi qu'un moteur plus puissant.

Ce problème nous ayant fait perdre un certain temps, nous n'avons pas pu réaliser notre objectif de départ qui était d'utiliser le module Lora (qui fonctionne dans un rayon de 10km) en créant notre propre application (qui nécessite de très bonnes bases en programmation, et 30h de travail). Nous nous rabattons donc sur le module Bluetooth (qui fonctionne dans un rayon de 10m) pour lequel des applications existent déja et permettent de choisir différents outils utiles à notre projet.

## Bonus :
Bien que nous parlions de chiens et chats, ce projet peut être adapté à différents animaux (poules, lapins) voire même redimensionné pour de plus gros animaux (chevaux, vaches, ...).

Ce projet est également présenté dans le cadre du concours Trophée Objets Connectés & Services 2018 : ![Trophée Objets Connectés & Services 2018](https://github.com/SosoIlea/PetFeeder/blob/master/repertoire/doc/IMG_2224.jpg)
