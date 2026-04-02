 # Sujet : Gestion d’un compte bancaire
   Contexte
      On souhaite développer une application en C++ permettant de gérer un compte bancaire.L’objectif est de manipuler une classe avec des attributs privés et des méthodes pour :
-initialiser un compte
-effectuer des dépôts et des retraits
-consulter et afficher le solde
  # Classe compte
   Cette classe représente un compte bancaire.
  ## Attribut (privé) :
   compte (double) : montant du compte
  ## Méthodes
    1. Méthode init
Elle permet d’initialiser le compte à partir d’un montant donné :
si le montant est négatif → le compte est mis à 0
si le montant est positif → le compte prend cette valeur

     2. Méthode depot
Elle permet d’ajouter de l’argent au compte si le montant est positif ou nul → il est ajouté au solde

     3. Méthode retrait
Elle permet de retirer de l’argent si le montant est supérieur ou égal au solde → le compte est mis à 0
sinon → le montant est soustrait du solde
 
     4. Méthode getCompte
Elle permet de récupérer la valeur du compte
5. Méthode afficher

Permet d’afficher le solde du compte
