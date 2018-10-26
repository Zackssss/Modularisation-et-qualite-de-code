/*
* Titre: gcd.c
* Projet: https://github.com/MokkaCicc/Modularisation-et-qualite-de-code.git
*
* Rôle: Fonction de calcul de PGCD pour deux nombres
* Auteur: Brian & Denis
*/

//include des bibliothèques
#include "gcd.h"

//fonction de calcul du PGCD
int gcd(int nombre1, int nombre2) {
    
    //déclaration d'une variable temporaire
    int temporaire;

    //tant que nombre1 != 0
    do {
        //on met le plus grand nombre à la 1ère place
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


