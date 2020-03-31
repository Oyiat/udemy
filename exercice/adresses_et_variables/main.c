#include <stdio.h>

int main()
{
    printf("Exercice: Addresses et variables\n");

    char mon_char = 'A';
    char* p_char = &mon_char;

    printf("Information sur ma variable:\n\t type: char\n\t taille: %d octet\n\t contenu: %c\n\t addresse: %p", sizeof(char),*p_char, &mon_char);

    return 0;
}


