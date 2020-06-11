#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char estado[50];

    scanf("%s", estado);

    if(strcmp(estado, "acre") == 0) printf("Regiao Norte\n");
    else if(strcmp(estado, "amapa") == 0) printf("Regiao Norte\n");
    else if(strcmp(estado, "amazonas") == 0) printf("Regiao Norte\n");
    else if(strcmp(estado, "para") == 0) printf("Regiao Norte\n");
    else if(strcmp(estado, "roraima") == 0) printf("Regiao Norte\n");
    else if(strcmp(estado, "rondonia") == 0) printf("Regiao Norte\n");
    else if(strcmp(estado, "tocantins") == 0) printf("Regiao Norte\n");
    else printf("Outra regiao\n");


    return 0;
}
