#include <stdio.h>
#include <stdlib.h>

int selection_sort (int vetor[],int max, int cont) {
  int i, j, min, aux;

      for (i = 0; i < (max - 1); i++) {
            /* O minimo é o primeiro número não ordenado ainda */
            min = i;
            for (j = i+1; j < max; j++) {
              /* Caso tenha algum numero menor ele faz a troca do minimo*/
                if (vetor[j] < vetor[min]) {
                min = j;
                }
            }
            /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
            if (i != min) {
              aux = vetor[i];
              vetor[i] = vetor[min];
              vetor[min] = aux;
              cont++;
            }
      }

      return cont;
}

void preenche(int *v, int t){
    int i;
    for(i = 0; i < t; i++){
         scanf("%i", &v[i]);
    }
}

int main()
{
   int T, N, cont = 0;

   scanf("%d", &T);
   while(T > 0){
       scanf("%d", &N);
       int v[N];
       preenche(v,N);
    printf("%i\n", selection_sort(v,N,cont));
    T--;
    cont = 0;
   }

    return 0;
}
