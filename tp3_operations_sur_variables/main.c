#include <stdio.h>

int main(){
    printf("TP3 : Operations sur les variables\n");

/*    int taille;
    printf("Quelle est la taille d'un cote du carre?\n");
    scanf("%d", &taille);

    printf("Ce carre a pour perimetre %d\n",taille*4);
    printf("Ce carre a pour surface %d",taille*taille);
*/

    int hauteur, largeur;
    printf("Quelle est la hauteur et la largeur du rectangle ?\n");
    scanf("%d%d", &hauteur, &largeur);

    printf("Ce rectangle a pour perimetre %d\n", 2*hauteur+2*largeur);
    printf("Ce rectangle a pour surface %d\n", hauteur*largeur);

    return 0;
}