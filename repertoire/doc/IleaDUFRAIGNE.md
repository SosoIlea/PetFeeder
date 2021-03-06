# Rapport projet DUFRAIGNE Iléa

## Le 22/12/17:
Nous avons confirmé notre idée de projet : un distributeur de croquettes pour chien et chat.
Nous avons commencé à réfléchir aux différentes fonctionnalités du projet, au matériel nécessaire. Nous en avons discuté avec les professeurs. 
Nous avons créé notre compte GitHub, commencé à rédiger le ReadMe et nos rapports de fin de séance.
Nous avons esquissé des dessins et des schémas pour visualiser notre projet et voir les éventuels problèmes.
Enfin, nous avons réfléchi à un planning pour s'organiser au mieux et ne pas prendre de retard, même si nous rencontrions des problèmes.

## Le 12/01/2018 : 
J'ai commencé à manipuler les moteurs pas à pas et leurs drivers. J'ai fait les branchements et programmes. J'ai ensuite apprivoisé le programme afin de savoir combien de tours étaient nécessaires selon chaque animal.
Nous avons ensuite fait des essais sur la molette du distributeur. Il faudra trouver un moyen de bien fixer à la séance suivante.

Nous avons ensuite discuté avec M. Ferrero de la connexion : nous pensions utiliser le bluetooth, nous partirons sur du système Lora (avec une carte Heltec wifi Lora 32) car il présente moins de limites que le bluetooth. En effet, ce système permet d'être en connexion dans un rayon de 10km contre 10m pour le bluetooth. Cette carte possède aussi un système Wifi et un écran LCD.
C'est là que nous rencontrons un problème : pour pouvoir gérer notre communication, il nous faut une application Android sur notre téléphone comme celle que l'on avait pour le Bluetooth, or cette application n'existant pas, il faudra la créer. Pour cela, un niveau suffisant en programmation est nécessaire qui n'est pas particulièrement notre cas, et il faut environ 30h pour créer l'application (temps que nous n'avons pas vraiment ...).
Programme pour les horaires en testant avec une heure et un moteur.
 

## Le 18/01/2018:
Pour que notre projet se déclenche à des horaires précis, il faudra que l'on sache l'heure.
Nous avons donc programmé et fait les branchements de l'horloge RTC1302. Il faudra, une fois le projet finalisé, faire attention, l'horloge tourne en étant alimentée, si nous la débranchons l'heure sera décalée. C'est pour cela qu'il faudra relier la pile rapidement pour n'avoir qu'un trés léger décalage.
Nous avons aussi fini les téléchargements nécessaires pour créer notre application. 
Nous avons dû faire face à un problème : le moteur n'est pas assez puissant pour que la molette tourne bien, ou la molette est trop coincée dans la bouteille. Nous avons dnoc découpé la molette pour qu'elle tourne mieux. Nous n'avons toujours pas fixé les moteurs, il nous faut une sorte de moule reliant molette et bout du moteur pour que tout tourne.

## Le 23/01/2018:

Nous avons fait notre première présentation orale avec un diaporama et avons regardé celles des autres.
Nous avons relié l'horloge à un moteur pour vérifier que les horaires marchent, ce qui est le cas.

## Le 07/02/18:
Nous avons pris rendez-vous avce le FabLab afin de créer les moules pour fixer molettes et moteurs. Nous avons pour cela créé des plans sur LibreCAD en 2D.
Nous avons reçu la carte Lora, qu'il a fallu souder.

## Le 08/02/18:
Nous sommes allées au FabLab avec nos fichiers 2D, nous avons fait de la découpe laser puis nous avons collé nos moules. Nous avons donc des molettes qui tournent avec les moteurs. La prochaine étape est de tester ceci avec de vraies croquettes pour voir si tout se passe bien.

## Le 16/03/18: 
Nous avons testé le dispositif avec des vraies croquettes et c'est là que nous avons rencontré un problème auquel on ne s'attendait pas (car ce système avait déja été utilisé par d'autres étudiants l'année passée pour des céréales, sans problèmes). Les croquettes se bloquent contre la paroi de la bouteille ce qui empêche la molette de tourner. 
Nous avons discuté avec les professeurs et la seule solution que nous avons trouve est d essayer avec un autre systeme: nous devons donc tout recommencer ce qui est une perte de temps incroyable. Notre nouveau systeme sera inspiré de celui ci : http://www.instructables.com/id/Automatic-Arduino-Powered-Pet-Feeder/ 
Nous devons donc faire un tuyau et une hélice en 3D au FabLab puis les fixer au bout des bouteilles. Nous devrons changer de moteur et prendre des Nema 17, qui sont adaptés aux impressions 3D que nous allons faire.
Notre projet s'annonce donc plus compliqué que prevu, nous avons pris la décision de ne pas utiliser le systeme Lora mais de ne passer que par le bluetooth, car plusieurs applications existent et permettent d'utiliser des boutons, graphiques, ... que l'on place où l'on souhaite pour la fonction de notre choix.
Nous avons commencé a fabriquer la boîte mais nous ne pouvons pas la finir car il nous manque trop d'éléments pour savoir sa dimension exacte.

## Intermédiaire :
Nous avons réalisé qu'un changement allait se faire : le système étant différent, la distance pour les LEDs sera différente : il n'y a plus la molette donc la distance est plus grande, la limite "presque vide" et "vide" devra être modifiée.

## Le 27/03/18 :
La semaine dernière nous avons imprimé nos différents composants au FabLab. Nous n'avons pour l'instant fait qu'un exemplaire pour vérifier que tout fonctionne.  
Nous avons modifié les distances pour le capteur de distance indiquant si le réservoir est plein ou vide.
J'ai cherché les programmes pour nos nouveaux moteurs, et adpaté ceux ci à nos anciens programmes couplés aux horaires de distribution.

## Intermédiaire : 
Je suis allée acheter le tuyau en T dans lequel sera l'hélice. Nous avons donc toutes les données pour commencer la boîte.

## Le 05/04/18:
J'ai reussi a faire tourner le nouveau moteur. J'ai asssemble l helice avec le moteur et le tuyau. Il reste a assembler le tout avec la bouteille pour pouvoir savoir quelle dose distribuer. 
Pour le moteur, il faut trouver comment l arreter car si il tourne trop longtemps on aura un probleme car le moteur fait chauffer le driver. 
Nous avons fait la presentation orale du projet intermédiaire. 
Nous allons, sur conseil de M. Masson, mettre un buzzer afin de prévenir l'animal pour savoir quand il mangera (car les animaux n'ont pas notion du temps). J'ai donc cree une melodie avec le buzzer, elle sera declenchee 30 secondes avant la distribution.

## Le 09/04/18:
J'ai reussi a arreter de faire tourner le moteur et surtout arreter que le driver chauffe. 
Il faut recoller le radiateur car la colle ne fonctionnait pas trop. 
Le driver a trop chauffé lors des tests. Il a crame nous devons le changer. Nous en avons recommandé un il faut qu'on attende de le recevoir pour savoir le nombre de tours exacts et finir le programme sur les horaires qui est presque fini. 

## Le 02/05/18:
Nous avons recu le nouveau driver nous allons donc refaire des tests avec la bouteille remplie. La boite est en train d'être réalisée. Nous avons recuperé l'alimentation 5V et 12V mais avec des piles pour eviter d avoir une alimentation sur secteur. 
Nous allons faire le programme final que nous compilerons sur l'arduino. 

## Le 09/05/18
Le moteur tourne. La boite est finie. Il faut juste faire les tests avec la bouteille remplie et recevoir la carte arduino Mega car on a trop de branchement pour la carte arduino Nano classique. 

## Le 24/05/18
J'ai fait les tests avec des croquettes pour savoir exactement le nombre de tour à faire pour le moteur, j'ai donc fini le programme final du PetFeeder, il nous reste plus qu'à faire tous les montages et tout tester en même temps. 

## Le 25/05/18
Avec Sophie, nous avons fait les branchements finaux du PetFeeder, et nous avons teste. Nous nous sommes rendus compte qu'il ne fallait pas mettre de scotch sur le capteur de distance car cela faussait les données et n'allumait pas la bonne LED. 
Nous avons donc teste et cela marche ! Notre PetFeeder marche ! 
Nous avons donc filme des videos pour pouvoir les montrer pendant la démonstration du vendredi 1er juin car notre distributeur ne distribue qu'à des horaires précis: nous avons filme une vidéo pour distribuer les croquettes, une video pour ne pas distribuer les croquettes, une video ou l'on voit le moteur qui tourne , une video ou l'on voit les leds changer de couleurs en fonction de la quantité de croquette et une video ou l'on voit le chien qui mange les croquettes. 

