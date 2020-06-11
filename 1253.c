#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    char text[50];
    int quantidade, i, move;

    //printf("quantiade de casos de Teste: ");
        scanf("%d",&quantidade);

	while(quantidade != 0){

        //printf("Digite a palavra: ");
            scanf("%s", text);
        //printf("Numero de deslocamento: ");
            scanf("%d", &move);

        for(i = 0; i < 50; i++){

            if(text[i] == '\0') break;

            else if ((text[i] - move) < 65) printf("%c", (text[i] - move) + 26);

            else printf("%c", text[i] - move);

        }

        printf("\n");
        quantidade --;
	}

	return 0;
}
