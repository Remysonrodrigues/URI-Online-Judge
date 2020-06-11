#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    int N[1000];
    int i, j, aux = 0;

    scanf("%d",&T);

    if( T >= 2 && T <= 50){
        for(i = 0; i < 1000; i++){
            for(j = 0; j < T && aux < 1000; j++){
                N[aux] = j;
                aux++;
            }
        }

         for(i = 0; i < 1000; i++){
                printf("N[%i] = %i\n", i, N[i]);
        }
    }

    return 0;
}
