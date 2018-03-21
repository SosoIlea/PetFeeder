# Rapport projet ALLIER Sophie

## Le 22/12/17:
Nous avons confirmé notre idée de projet : un distributeur de croquettes pour chien et chat.Nous avons commencé à réfléchir aux différentes fonctionnalités du projet, au matériel nécessaire. Nous en avons discuté avce les professeurs. Nous avons créé notre compte GitHub, commencé à rédiger le ReadMe et nos rapports de fin de séance.Nous avons esquissé des dessins et des schémas pour visualiser notre projet et voir les éventuels problèmes.Enfin, nous avons réfléchi à un planning pour s'organiser au mieux et ne pas prendre de retard, même si nous rencontrions des problèmes.

## Le 12/01/2018:
Début de la manipulation du capteur de distance qui indiquera le niveau de croquettes et j'ai programmé. J'ai relié les LED au capteur de distance et testé avec le recipient quelle distance choisir pour l'allumage des LEDS. La LED verte pourra rester allumée longtemps car elle a une autonomie de 10 000H soit 416j. 

## Le 18/01/2018:
Pour que notre projet se déclenche à des horaires précis, il faudra que l'on sache l'heure.
Nous avons donc programmé et fait les branchements de l'horloge RTC1302. Il faudra, une fois le projet finalisé, faire attention, l'horloge tourne en étant alimentée, si nous la débranchons l'heure ser décalée. C'est pour cela qu'il faudra relier la pile rapidement pour n'avoir qu'un trés léger décalage.
Nous avons aussi fini les téléchargements nécessaires pour créer notre application. 
Nous avons dû faire face à un problème : le moteur n'est pas assez puissant pour que la molette tourne bien, ou la molette est trop coincée dans la bouteille. Nous avons dnoc découpé la molette pour qu'elle tourne mieux. Nous n'avons toujours pas fixé les moteurs, il nous faut une sorte de moule reliant molette et bout du moteur pour que tout tourne.

## Le 23/01/2018: 
Nous avons fait notre première présentation orale avec un diaporama et avons regardé celles des autres.
Nous avons relié l'horloge à un moteur pour vérifier que les horaires marchent, ce qui est le cas.

## Le 07/02/18:
Nous avons pris rendez-vous avce le FabLab afin de créer les moules pour fixer molettes et moteurs. Nous avons pour cela créé des plans sur LibreCAD en 2D.31Nous avons reçu la carte Lora, qu'il a fallu souder.

## Le 08/02/18:
Nous sommes allées au FabLab avec nos fichiers 2D, nous avons fait de la découpe laser puis nous avons collé nos moules. Nous avons donc des molettes qui tournent avec les moteurs. La prochaine étape est de tester ceci avce de vraies croquettes pour voir si tout se passe bien.

## Le 16/03/18: 
Nous avons testé le dispositif avce des vraies croquettes et c'est là que nous avons rencontré un problème auquel on ne s'attendait pas (car ce système avait déja été utilisé par d'autres étudiants l'année passée pour des céréales, sans problèmes). Les croquettes se bloquent contre la paroi de la bouteille ce qui empêche la molette de tourner. 
Nous avons discuté avec les professeurs et la seule solution que nous avons trouvée est d'essayer avec un autre système: nous devons donc tout recommencer ce qui est une perte de temps incroyable. Notre nouveau systeme sera inspiré de celui ci : http://www.instructables.com/id/Automatic-Arduino-Powered-Pet-Feeder/ 
Nous devons donc faire un tuyau et une hélice en 3D au FabLab puis les fixer au bout des bouteilles. Nous devrons changer de moteur et prendre des Nema 17, qui sont adaptés aux impressions 3D que nous allons faire.
Notre projet s'annonce donc plus compliqué que prevu, nous avons pris la décision de ne pas utiliser le systeme Lora mais de ne passer que par le bluetooth, car plusieurs applications existent et permettent d'utiliser des boutons, graphiques, ... que l'on place où l'on souhaite pour la fonction de notre choix.
Nous avons commencé a fabriquer la boîte mais nous ne pouvons pas la finir car il nous manque trop d'éléments pour savoir sa dimension exacte.
J'ai aussi fixé les accélérometres au bouchon des bouteilles.

## Intermédiaire : 
Amélioration du GitHub (qui était un peu brouillon-moche).
Nous avons réalisé qu'un changement allait se faire : le système étant différent, la distance pour les LEDs sera différente : il n'y a plus la molette donc la distance est plus grande, la limite "presque vide" et "vide" devra être modifiée.

## Le 29/03/18 : 
La semaine dernière nous avons imprimé nos différents composants au FabLab. Nous n'avons pour l'instant fait qu'un exemplaire pour vérifier que tout fonctionne.  






