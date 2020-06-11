#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nf, ht;
    float vh;

    scanf("%i%i", &nf, &ht);
    scanf("%f", &vh);
    printf("NUMBER = %i\nSALARY = U$ %.2f\n", nf, ht*vh);
    return 0;
}
