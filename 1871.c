#include <stdio.h>
#include <stdlib.h>


int contaD(int n){
    int cont = 0;
    while(n > 0){
        cont++;
        n = n/10;
    }
    return cont;
}

int inf(int k){
    int i = 1;
    while(k-1 > 0){
        i = i*10;
        k--;
    }
    return i;
}

int soma(int n, int qD){
    int d = inf(qD);
    int da;
    int nn = 0;
    while(qD > 0){
        da = n/d;
        if(da != 0){
            nn = (nn*10)+da;
        }
        n = n%d;
        d = d/10;
        if(d == 0) d = 1;
        qD--;
    }
    return nn;
}

int main()
{
    int M, N, s = 0;
    scanf("%d %d", &M, &N);
    while(M != 0 && N != 0){
        s = M + N;
        printf("%i\n", soma(s, contaD(s)));
        scanf("%d %d", &M, &N);
    }

    return 0;
}
