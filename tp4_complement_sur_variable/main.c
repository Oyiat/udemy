#include <stdio.h>
#include <math.h>

int main(){
    printf("TP4 : Complement sur les variables\n");

    int rayon;
    printf("Quelle est le rayon du cercle? ");
    scanf("%d", &rayon);

    printf("Ce cercle a pour diametre %d\n", rayon*2);
    printf("Ce cercle a pour circonference %f\n", 2*M_PI*rayon);
    printf("Ce cercle a pour aire %f\n", M_PI*rayon*rayon);

    int hauteur;
    printf("Quelle est la hauteur du volume? ");
    scanf("%d", &hauteur);

    printf("Ce cylindre a pour volume %f\n",M_PI*rayon*rayon*hauteur);
    printf("Ce cone a pour volume %f", M_PI*((float)rayon*(float)hauteur)/3.0);

    return 0;
}

