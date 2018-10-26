/*
* Titre: main.c
* Projet: https://github.com/MokkaCicc/Modularisation-et-qualite-de-code.git
*
* Rôle: boucle principale
* Auteur: Brian & Denis
*/

//include des bibliothèques
#include <stdio.h>
#include <stdlib.h>
#include "gcd.h"

//boucle principale
int main(int argc, char *argv[]) {
    //demande de deux nombres à lutilisateur
    int saisie1, saisie2;
    printf("Calcul du PGCD de deux nombre\n");
    printf("Nombre 1:");
    scanf("%d", &saisie1);
    printf("Nombre 2:");
    scanf("%d", &saisie2);

    //affichage du résultat
    printf("\nLe resultat est: %d", gcd(saisie1, saisie2));

    //juste pour éviter la fermeture de la console
    scanf("%d", &saisie1);
    return 0;
}
