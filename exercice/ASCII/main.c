#include <stdio.h>

int main()
{
    printf("Exercice: ASCII\n");

    char lettre;
    printf("Entrez une lettre: ");
    scanf("%c", &lettre);

    printf("Vous avez entre la lettre ASCII %c, soit:\n\t- %d en decimal\n\t- %x en hexadecimal", lettre, lettre, lettre);

    return 0;
}


