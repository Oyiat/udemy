#include <stdio.h>

int main()
{
    printf("Exercice: Pair ou impair\n");

    int entier;
    printf("Donnez un nombre entier: ");
    scanf("%d", &entier);

    if(entier%2 != 0){
        printf("%d est un nombre impair", entier);
    } else {
        printf("%d est un nombre pair", entier);
    }

    return 0;
}