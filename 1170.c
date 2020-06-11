#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ci;
    int cont, n;

    scanf("%i", &n);
    while( n > 0){
        cont = 0;
        scanf("%f", &ci);
        while(ci > 1.0){
            ci = ci - (0.5*ci);
             cont++;
        }

        printf("%d dias\n", cont);
        n--;
    }
    return 0;
}
