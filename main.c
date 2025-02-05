#include <stdio.h>
#include <string.h>

int main() {

    char vetnomi[3][50] = {"Mario", "Luigi", "Anna"};
    int veteta[3] = {25, 30, 22};
    float vetStipendi[3] = {1000.5, 1200.75, 950.0};


    int i;
    for( i = 0; i < 3; i++) {
        printf("%s, con eta' di %d anni, ha uno stipendio di %.2f euro\n", vetnomi[i], veteta[i], vetStipendi[i]);
    }

    char tempNome[50];
    strcpy(tempNome, vetnomi[0]);
    strcpy(vetnomi[0], vetnomi[1]);
    strcpy(vetnomi[1], tempNome);

    int tempeta = veteta[0];
    veteta[0] = veteta[1];
    veteta[1] = tempeta;

    float tempStipendio = vetStipendi[0];
    vetStipendi[0] = vetStipendi[1];
    vetStipendi[1] = tempStipendio;

    printf("\nDopo lo scambio:\n");
    for( i = 0; i < 3; i++) {
        printf("%s, con eta' di %d anni, ha uno stipendio di %.2f euro\n", vetnomi[i], veteta[i], vetStipendi[i]);
    }

    return 0;
}

