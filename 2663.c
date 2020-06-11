#include <stdio.h>
#include <stdlib.h>

void bublle(int *v, int t){
    int aux, i, j;
    for(j = t-1; j >= 1; j--){
        for(i = 0; i < j; i++){
            if(v[i] > v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}

int pegarMaior(int tam, int v[]){
    return v[tam - 1];
}

int contarMaior(int tam, int maior, int v[]){
    int i, cont = 0;
    for(i = 0; i < tam; i++){
        if(maior == v[i])
            cont++;
    }
    return cont;
}

int main()
{
   int N, K;

   scanf("%d", &N);
   scanf("%d", &K);

   int v[N];

   int i;
    for(i = 0; i < N; i++){
        scanf("%i", &v[i]);
    }

    bublle(v, N);
    int maior = pegarMaior(N, v);
    int qtdMaior = contarMaior(N, maior, v);
    int K2 = 0;
    int qtdAux = qtdMaior;
    while(K2 <= K){
        if(qtdAux >= K){
            K = qtdAux;
            break;
        }
        else{
            K2 += qtdMaior;
            maior = pegarMaior(N - qtdAux, v);
            qtdMaior = contarMaior(N, maior, v);
            qtdAux += qtdMaior;
        }
    }

    printf("%i\n", K);


    return 0;
}
