#include <stdio.h>

int main()
{
    printf("TP2 : Memoire et variable\n");

    int mon_int = 8;
    long mon_long = 32;
    short mon_short = 16;

    float mon_float = 3.14;
    double mon_double = 88.8;

    char mon_char = 'J';

    printf("Mon int = %d et fait %lu octets\n", mon_int, sizeof(int));
    printf("Mon long = %ld et fait %lu octets\n", mon_long, sizeof(long));
    printf("Mon short = %d et fait %lu octets\n", mon_short, sizeof(short));

    printf("Mon float = %f et fait %lu octets\n",mon_float, sizeof(float));
    printf("Mon double = %f et fait %lu octets\n", mon_double, sizeof(double));

    printf("Mon char = %c et fait %lu octets\n",mon_char, sizeof(char));

    return 0;
}