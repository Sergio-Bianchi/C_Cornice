#include <stdio.h>

int main() {

    // Dichiarazione variabili
    int larghezza = 0;
    int altezza = 0;
    int i;
    int j;


    // Input dati
    printf("Inserisci la larghezza: ");
    scanf("%d",&larghezza);
    printf("Inserisci l'altezza: ");
    scanf("%d",&altezza);


    // Scrivi asterischi x la larghezza
    for (i = 0; i < larghezza; i++) printf("*");

    // Vai a capo
    printf("\n");

    // ...per quanta altezza -2 (lato sopra e lato sotto)
    for (i = 0; i < (altezza - 2); i++) {

        // Scrivi asterisco
        printf("*");

        // Inserisci spazi per la larghezza -2 (i due lati)
        for (j = 0; j < (larghezza - 2); j++) printf(" ");

        // Asterisco e vai a capo per scrivere la prossima linea
        printf("*\n");

    }

    // Scrivi asterischi x la larghezza
    for (i = 0; i < larghezza; i++) printf("*");

    // Vai a capo
    printf("\n");


    return 0;
}
