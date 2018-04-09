# Rapport projet ALLIER Sophie

## Le 22/12/17:
Nous avons confirmé notre idée de projet : un distributeur de croquettes pour chien et chat. Nous avons commencé à réfléchir aux différentes fonctionnalités du projet, au matériel nécessaire. Nous en avons discuté avce les professeurs. Nous avons créé notre compte GitHub, commencé à rédiger le ReadMe et nos rapports de fin de séance.Nous avons esquissé des dessins et des schémas pour visualiser notre projet et voir les éventuels problèmes.Enfin, nous avons réfléchi à un planning pour s'organiser au mieux et ne pas prendre de retard, même si nous rencontrions des problèmes.

## Le 12/01/2018:
Début de la manipulation du capteur de distance qui indiquera le niveau de croquettes et j'ai programmé. J'ai relié les LEDs au capteur de distance et testé avec le recipient quelle distance choisir pour l'allumage des LEDS. La LED verte pourra rester allumée longtemps car elle a une autonomie de 10 000H soit 416j. 

## Le 18/01/2018:
Pour que notre projet se déclenche à des horaires précis, il faudra que l'on sache l'heure.
Nous avons donc programmé et fait les branchements de l'horloge RTC1302. Il faudra, une fois le projet finalisé, faire attention, l'horloge tourne en étant alimentée, si nous la débranchons l'heure sera décalée. C'est pour cela qu'il faudra relier la pile rapidement pour n'avoir qu'un trés léger décalage.
Nous avons aussi fini les téléchargements nécessaires pour créer notre application. 
Nous avons dû faire face à un problème : le moteur n'est pas assez puissant pour que la molette tourne bien, ou la molette est trop coincée dans la bouteille. Nous avons donc découpé la molette pour qu'elle tourne mieux. Nous n'avons toujours pas fixé les moteurs, il nous faut une sorte de moule reliant molette et bout du moteur pour que tout tourne.

## Le 23/01/2018: 
Nous avons fait notre première présentation orale avec un diaporama et avons regardé celles des autres.
Nous avons relié l'horloge à un moteur pour vérifier que les horaires marchent, ce qui est le cas.

## Le 07/02/18:
Nous avons pris rendez-vous avec le FabLab afin de créer les moules pour fixer molettes et moteurs. Nous avons pour cela créé des plans sur LibreCAD en 2D. Nous avons reçu la carte Lora, qu'il a fallu souder.

## Le 08/02/18:
Nous sommes allées au FabLab avec nos fichiers 2D, nous avons fait de la découpe laser puis nous avons collé nos moules. Nous avons donc des molettes qui tournent avec les moteurs. La prochaine étape est de tester ceci avec de vraies croquettes pour voir si tout se passe bien.

## Le 16/03/18: 
Nous avons testé le dispositif avce des vraies croquettes et c'est là que nous avons rencontré un problème auquel on ne s'attendait pas (car ce système avait déja été utilisé par d'autres étudiants l'année passée pour des céréales, sans problèmes). Les croquettes se bloquent contre la paroi de la bouteille ce qui empêche la molette de tourner. 
Nous avons discuté avec les professeurs et la seule solution que nous avons trouvée est d'essayer avec un autre système: nous devons donc tout recommencer ce qui est une perte de temps incroyable. Notre nouveau systeme sera inspiré de celui ci : http://www.instructables.com/id/Automatic-Arduino-Powered-Pet-Feeder/ 
Nous devons donc faire un tuyau et une hélice en 3D au FabLab puis les fixer au bout des bouteilles. Nous devrons changer de moteur et prendre des Nema 17, qui sont adaptés aux impressions 3D que nous allons faire.
Notre projet s'annonce donc plus compliqué que prevu, nous avons pris la décision de ne pas utiliser le systeme Lora mais de ne passer que par le bluetooth, car plusieurs applications existent et permettent d'utiliser des boutons, graphiques, ... que l'on place où l'on souhaite pour la fonction de notre choix.
Nous avons commencé a fabriquer la boîte mais nous ne pouvons pas la finir car il nous manque trop d'éléments pour savoir sa dimension exacte.
J'ai aussi fixé les capteurs de distance au bouchon des bouteilles.

## Intermédiaire : 
Amélioration du GitHub (qui était un peu brouillon-moche).
Nous avons réalisé qu'un changement allait se faire : le système étant différent, la distance pour les LEDs sera différente : il n'y a plus la molette donc la distance est plus grande, la limite "presque vide" et "vide" devra être modifiée.

## Le 27/03/18 : 
La semaine dernière nous avons imprimé nos différents composants au FabLab. Nous n'avons pour l'instant fait qu'un exemplaire pour vérifier que tout fonctionne.  
Nous avons changé les mesures pour le capteur de distance pour savoir si le réservoir est vide ou plein.
Je me suis occupée du début de la connexion en bluetooth : le programme fonctionne mais le téléphone ne détecte pas le module, malgré plusieurs tentatives, et ce avec différents programmes.

## Intermédiaire :
Iléa est allée acheter le tuyau en T, nous pouvons donc tester nos montages avce l'hélice et nous avons toutes les données pour commencer la boîte qui contiendra le projet.

## Le 29/03/18 :
Je me suis occupée de connecter le téléphone au Bluetooth : cela a pris plus de temps que prévu, pour des raisons inconnues le programme ne répondait pas. Ensuite il fonctionnait à moitié : lorsque je changeais le nom il n'apparaissait pas comme je l'avais nommé sur le téléphone, je pensais donc qu'il n'était pas détecté, puis j'ai cliqué au hasard sur l'un des noms proposés qui était le bon. Le téléphone est donc connecté, je dois changer le nom de test pour "PetFeeder" et faire le programme afin que, lorsque l'utilisateur clique sur l'un des 2 boutons (l'application est configurée simplement mais efficacement), les horaires de distribution s'activent ou non (dans ce cas là rien ne se produit, seule la LED indiquant le niveau de croquettes est allumée).

## Le 05/04/18 :
Nous avons fait une présentation intermédiaire de notre projet et avons discuté avec les professeurs. Nous avons cherché à arrêter le moteur une fois qu'il a tourné, pour qu'il n'y ait pas de surchauffage. Sur conseils de M. Masson, nous avons décidé de rajouter un buzzer afin d'émettre un son lors de la distribution de croquettes, pour que l'animal, qui n'a pas de notion du temps, sache qu'il peut aller manger. Nous avons donc fait les programmes et branchements.

## Le 09/04/18 :
J´ai continué de m´occuper du bluetooth. Comme le programme pour le moteur n´est pas fini, j´ai testé le bluetooth avec une LED qui s'allumait ou s'étaignait selon le bouton que l'on touchait (avec l'application du projet PetFeeder. J'ai aussi commencé à regrouper nos programmes : les horaires, le buzzer et le bluetooth. Il restera à mettre celui des distances et du moteur (en dernier quand il fonctionnera).
