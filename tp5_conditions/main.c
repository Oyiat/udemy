#include <stdio.h>

int main(){
    printf("TP5 : Conditions\n");

    int nombre1, nombre2;
    char operateur;

    printf("Indiquez l'operation mathematique que je doit resoudre (sans espace)\n\t-sous la forme [nombre1 opérateur nombre2] par exemple (2+3)\n\t-operateurs possibles [+, -, *, /, %%]\n");
    scanf("%d%c%d", &nombre1, &operateur, &nombre2);

    switch (operateur){
        case '+':
            printf("Trop simple! Le resultat est: %d",nombre1+nombre2);
            break;
        case '-':
            printf("Trop simple! Le resultat est: %d",nombre1-nombre2);
            break;
        case '*':
            printf("Trop simple! Le resultat est: %d",nombre1*nombre2);
            break;
        case '/':
            if(nombre2 != 0) {
                printf("Trop simple! Le resultat est: %f", (float) nombre1 / (float) nombre2);
            } else {
                printf("Attention la division par 0 est impossible!");
            }
            break;
        case '%':
            printf("Trop simple! Le resultat est: %d",nombre1%nombre2);
            break;
        default:
            printf("Opérateur invalide, vous devez utilise l'un des opérateurs (+, -, *, /, %%)");
    }


    return 0;
}
