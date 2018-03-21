# Rapport projet DUFRAIGNE Iléa

## Le 22/12/17:
Nous avons confirmé notre idée de projet : un distributeur de croquettes pour chien et chat.
Nous avons commencé à réfléchir aux différentes fonctionnalités du projet, au matériel nécessaire. Nous en avons discuté avce les professeurs. 
Nous avons créé notre compte GitHub, commencé à rédiger le ReadMe et nos rapports de fin de séance.
Nous avons esquissé des dessins et des schémas pour visualiser notre projet et voir les éventuels problèmes.
Enfin, nous avons réfléchi à un planning pour s'organiser au mieux et ne pas prendre de retard, même si nous rencontrions des problèmes.

## Le 12/01/2018 : 
Début de la manipulation du moteur pas à pas et son driver : branchement & programme. 
Approximation du nombre de tours à faire selon chaque animal.
Essais en fixant le moteur sur la molette du distributeur. 

Discussion avec M Ferrero pour la connexion : au départ, nous partions sur un système bluetooth, mais M Ferrero nous a explique ses limites et nous a conseillé d'utiliser le systeme LoRa avec le materiel suivant : Heltec WiFi LoRa 32 qui contient un systeme LoRa, Bluetooth, Wifi, une mini carte Arduino intégrée et un écran. Ce systeme nous permettra, contrairement au bluetooth, d'être en connexion dans un rayon de 10km. 
Probleme rencontré: Pour pouvoir gerer notre communication, il nous faut une application Android sur notre telephone comme celle que l'on avait pour le Bluetooth, or cette application n'existant pas, il faudra la créer. 

## Le 18/01/2018:
Pour que notre projet se déclenche à des horaires précis, il faudra que l'on sache l'heure.
Nous avons donc programmé et fait les branchements du RTC1302. 
Nous avons aussi fini les téléchargements nécessaires pour notre application. 
Probleme rencontré : le moteur n'est pas assez puissant pour faire tourner la molette. 

## Le 23/01/2018:
Première présentation orale de notre projet.
Programme pour les horaires en testant avec une heure et un moteur.

## Le 07/02/18:
RDV avec le Fablab, creation de plan 2D avec LibreCAD pour faire tourner la molette avec le moteur. 
Reception de LORA, on l'a soudé.

## Le 08/02/18:
Nous sommes allées au FabLab avec nos fichiers 2D, nous avons fait de la découpe laser puis nous avons collé. Nous avons donc des molettes qui tournent avec les moteurs. 

## Le 16/03/18: 
Test avec des vraies croquettes : rencontre d'un probleme majeur pour notre projet, les croquettes se bloquent contre la paroi de la bouteille ce qui empeche la molette de tourner. Le systeme ne fonctionne donc pas alors qu'il fonctionnait auparavant avec d autre produit. Nous avons donc un probleme que nous n'étions pas cense rencontrer... Nous avons discuté avec les professeurs et la seule solution que nous avons trouve est d essayer avec un autre systeme: nous devons donc tout recommencer ce qui est une perte de temps incroyable. Notre nouveau systeme sera inspiré de celui ci : http://www.instructables.com/id/Automatic-Arduino-Powered-Pet-Feeder/ 
Nous devons donc faire un tuyau et une helice au fablab puis les fixer au bout des bouteilles. Nous ne savons pas encore si nous devons changer de moteur. 
Notre projet s'annonce donc plus complique que prevu, nous avons pris la decision de ne pas utiliser le systeme Lora mais de ne passer que par le bluetooth. 
Nous avons commence a fabriquer la boite mais nous ne pouvons pas la finir car il nous manque trop d elements pour savoir sa dimension exacte.
