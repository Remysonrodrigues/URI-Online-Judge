#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i, j;
    int soma = 0;
    scanf("%d %d", &x, &y);


    if(x >= y){
        j = x;
        i = y;
    }
    else{
        j = y;
        i = x;
    }

    for(i = i + 1; i < j; i++){
        if(i%2 != 0){
            soma += i;
        }
    }


    printf("%d\n", soma);
    return 0;
}
