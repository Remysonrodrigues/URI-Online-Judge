#include <stdio.h>
#include <map>

using namespace std;
long int coef [50];

map<int, int> ma;
int empate = 0;

int n, m;

void jogo(long int p[50], int i) {
    if (n == i) {
        long int pont = 0;
        int j;
        for (j = 0; j < n; j++) {
            pont += p[j] * coef[j];
        }
        if (ma.count(pont) != 0) {
            empate = 1;
        }
        ma[pont] = 1;
    }
    else {
        int j;
        for (j = 1; j <= m; j++) {
            p[i] = j;
            jogo(p, i + 1);
        }
    }
}

int main() {
    int i;
    while (scanf("%d %d", &n, &m) != EOF) {
        empate = 0;
        ma.clear();
        for (i = 0; i < n; i++) {
            scanf("%li", &coef[i]);
        }
        long int p[50];
        jogo(p, 0);
        if (empate == 1) {
            printf("Try again later, Denis...\n");
        }
        else {
            printf("Lucky Denis!\n");
        }
    }
}

