#include <stdio.h>

int main(void){

	char ant,c;

	while(scanf("%c",&ant) != EOF){
		c = ant;
		int count = 1;
		int counta = 0;
		while(c != '\n'){
			scanf("%c",&c);
			if(ant == c && count < 9){
				count++;
				continue;
			}
			if(count == 1){
                if(counta != 1){
                    printf("1");
                }
				if(ant == '1'){
					printf("11");
				}else{
					printf("%c",ant);
				}

			}else{
			    if(counta == 1){
                    printf("1");
			    }
                printf("%d%c", count, ant);
			}
            ant = c;
            counta = count;
            count = 1;
		}
		if(counta == 1){
            printf("1");
        }
		printf("\n");
	}
}
