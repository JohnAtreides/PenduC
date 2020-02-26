#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "protoHeader.h"


void dicoTablo()
{
//Met le mot de dico.txt dans le tableau word2Guess[]
//Initialise le compteur des 10 coups
    char word2Guess[26]= {0};

    FILE* dico = NULL;
    dico = fopen("dico.txt", "r");

    if (dico != NULL)
    {
        int i=0;
        do
        {
            word2Guess[i] = fgetc(dico);
            printf("\n\n-");
            printf("i=%d", i);
            printf(" -- ");
            printf("word2Guess=%s", word2Guess);
            i++;
        }
        while (word2Guess != EOF);

        fclose(dico);
    }
}


char lireCaractere()
{
    char caractere = 0;

    caractere = getchar();
    caractere = toupper(caractere);

    while (getchar() != '\n') ;

    return caractere;
}
