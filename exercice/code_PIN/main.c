#include <stdio.h>

int main()
{
    printf("Exercice: Code PIN\n");

   int saisie_utilisateur;
   const int PIN = 1793;
   int tentatives=3;

    do{
         printf("Entrez le code PIN à 4 chiffres: ");
         scanf("%d", &saisie_utilisateur);
         if(saisie_utilisateur != PIN) {
             tentatives--;
             printf("Erreur, il vous reste %d tentatives\n", tentatives);
         } else {
             printf("Telephone deverouille");
         }
     } while(saisie_utilisateur != PIN && tentatives != 0);

    return 0;
    }


