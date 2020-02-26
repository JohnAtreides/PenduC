#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "protoHeader.h"




int main()
{

    char lettre = 0; // Stocke la lettre proposée par l'utilisateur (retour du scanf)
    char motSecret[] = "MARRON"; // C'est le mot à trouver
    int lettreTrouvee[6] = {0}; // Tableau de booléens. Chaque case correspond à une lettre du mot secret. 0 = lettre non trouvée, 1 = lettre trouvée
    int coupsRestants = 10; // Compteur de coups restants (0 = mort)
    int i = 0; // Une petite variable pour parcourir les tableaux

    int nbCoups = 0;


    /*
    */
    return 0;
}



/*
for ( i=0 ; i<sizeof(word2Guess) ; i++)
{
    printf("i=%d",i);
    if (word2Guess[i] != 0)
    {
        motCaché
    }
}
// récupère caractère
    char lettre;
    lettre=lireCaractere();


// ------- FICHIER ---------
    FILE* essai = NULL;
    essai = fopen("essai.txt", "a+");

    if (essai != NULL)
    {
        fprintf(essai, "%c", lettre);
        fclose(essai);
    }

    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier essai.txt");
    }

//#####################

    essai = fopen("essai.txt", "r");

    int caractereActuel=0;
    if (essai != NULL)
    {
        caractereActuel = fgetc(essai);
        printf("%c", caractereActuel);
        fclose(essai);
    }

    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier essai.txt");
    }

*/
