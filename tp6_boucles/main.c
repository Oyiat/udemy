#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    printf("TP6 : Boucles\n");

    int nombre_mystere = 0, nombre_utilisateur = 0, tentatives = 1, choix_utilisateur;
    const int VALEUR_MIN = 1, VALEUR_MAX = 100, TENTATIVE_MAX = 10;
    srand(time(NULL));
    nombre_mystere = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN;
    printf("Devinez quel est mon nombre mystere. Indice: c'est un nombre entre %d et %d \n", VALEUR_MIN, VALEUR_MAX);

    while(choix_utilisateur){
        do {
            printf("tentative: %d/%d\n", tentatives, TENTATIVE_MAX);
            scanf("%d", &nombre_utilisateur);
            tentatives++;

            if(nombre_utilisateur<nombre_mystere){
            printf("C'est plus!\n");
            } else if (nombre_utilisateur>nombre_mystere) {
            printf("C'est moins!\n");
            }
        } while (nombre_utilisateur != nombre_mystere && tentatives <= TENTATIVE_MAX);

        printf("Bravo! Le nombre mystere est bien %d\n\n", nombre_mystere);

        printf("Voulez-vous faire une nouvelle partie (1-oui, 2-non)\n");
        scanf("%d", &choix_utilisateur);
        if (choix_utilisateur==1){
            printf("Devinez quel est mon nombre mystere. Indice: c'est un nombre entre %d et %d \n", VALEUR_MIN, VALEUR_MAX);
            tentatives=0;
            continue;
        } else if (choix_utilisateur==2){
            printf("A bientot!");
            break;
        }
    }

    return 0;
}
