/*
Titre: gcd.c
Projet: https://github.com/MokkaCicc/Modularisation-et-qualite-de-code.git

Rôle: Fonction de calcul de PGCD de deux nombres
Auteur: Brian & Denis
*/

//include des bibliothèques standard
#include <stdio.h>
#include <stdlib.h>

//fonction de calcul du PGCD
int gcd(int nombre1, int nombre2) {
    
    //déclaration d'une variable temporaire
    int temporaire;

    //tant que nombre1 != 0
    do {
        //on met le plus grand nombre à la 1er place
        if (nombre1 < nombre2) {

            temporaire = nombre1;
            nombre1 = nombre2;
            nombre2 = temporaire;
        }

        nombre1 -= nombre2;

    } while (nombre1);

    //renvoie le nombre 2
    return nombre2;
}


int main(int argc, char *argv[]) {
    //demande de deux nombres à lutilisateur
    int saisie1, saisie2;
    scanf("%d", &saisie1);
    scanf("%d", &saisie2);

    //affichage du résultat
    printf("%d", gcd(saisie1, saisie2));

    //juste pour éviter la fermeture de la console
    scanf("%d", &saisie1);
    return 0;
}