#include <stdio.h>
#include <stdlib.h>

int main()
{
   float O, B, I;
   scanf("%f %f %f", &O, &B, &I);
   if(O < B && O < I){
        printf("Otavio\n");
   }
   else if(B < O && B < I){
        printf("Bruno\n");
   }
   else if(I < O && I < B){
        printf("Ian\n");
   }
   else{
        printf("Empate\n");
   }

    return 0;
}
