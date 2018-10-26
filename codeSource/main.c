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
    //demande de deux nombres à l'utilisateur
    int saisie1, saisie2;
    printf("Calcul du PGCD de deux nombre\n");
    printf("Nombre 1:");
    scanf("%d", &saisie1); //demande à l'utilisateur le 1er nombre
    printf("Nombre 2:");
    scanf("%d", &saisie2); //demande à l'utilisateur le second nombre

    //affichage du résultat
    printf("\nLe resultat est: %d", gcd(saisie1, saisie2));

    //juste pour éviter la fermeture de la console
    scanf("%d", &saisie1);
    return 0;
}
