#include <stdio.h>
#include <stdlib.h>



int main()
{
   int n, t1, t2, i = 1, s1, s2, gca, gcb;

   scanf("%d", &n);

    while(i <= n){
        s1 = s2 = 0;
        scanf("%d x %d", &t1, &t2);
        s1 += t1;
        s2 += t2;
        gcb = t2;
        scanf("%d x %d", &t2, &t1);
        s1 += t1;
        s2 += t2;
        gca = t1;
        if(s1 > s2){
            printf("Time 1\n");
        }
        else if(s2 > s1){
            printf("Time 2\n");
        }
        else if(s1 - s2 > s2 - s1){
            printf("Time 1\n");
        }
        else if(s2 - s1 > s1 - s2){
            printf("Time 2\n");
        }
        else if(gca > gcb){
            printf("Time 1\n");
        }
        else if(gcb > gca){
            printf("Time 2\n");
        }
        else{
            printf("Penaltis\n");
        }
        i++;

    }
    return 0;
}
