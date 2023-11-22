#include <stdio.h>


/*
 * Semplice programma per scrivere una cornice di asterischi in C
 * ! I caratteri devono essere monospaced per funzionare
 *
 * Author: Sergio Bianchi
 * Date:
 *
 * */



void stampaOrizzontale(int width);

void stampaVerticale(int width, int height);

void stampaCornice(int width, int height);


int main() {

    // Dichiarazione variabili
    int larghezza = 0;
    int altezza = 0;


    // Input dati
    printf("Inserisci la larghezza: ");
    scanf("%d", &larghezza);
    printf("Inserisci l'altezza: ");
    scanf("%d", &altezza);

    // Chiama la funzione per stampare la cornice
    stampaCornice(larghezza, altezza);

    return 0;
}


void stampaOrizzontale(int width) {

    // Scrivi asterischi x la larghezza

    for (int i = 0; i < width; i++) printf("=");
    // Vai a capo

    printf("\n");


}

void stampaVerticale(int width, int height) {
    // ...per quanta altezza -2 (lato sopra e lato sotto)
    for (int i = 0; i < (height - 2); i++) {

        // Scrivi asterisco
        printf("|");

        // Inserisci spazi per la larghezza -2 (i due lati)
        for (int j = 0; j < (width - 2); j++) printf(" ");

        // Asterisco e vai a capo per scrivere la prossima linea
        printf("|\n");

    }
}

void stampaCornice(int width, int height) {
    stampaOrizzontale(width);
    stampaVerticale(width, height);
    stampaOrizzontale(width);

}