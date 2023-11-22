#include <stdio.h>


/*
 * Semplice programma per scrivere una cornice di asterischi in C
 * ! I caratteri devono essere monospaced per funzionare
 *
 * Author: Sergio Bianchi
 * Date:
 *
 * */

char titolo[] = "Esercitazione: C_Menu";
char author[] = "Sergio Bianchi";
int spaceMultiplier = 4;


void stampaOrizzontale(int width);

void stampaVerticale(int width, int height);

void stampaCornice(int width, int height);


int main() {

    // Dichiarazione variabili
    int larghezza = 0;
    int altezza = 0;


    // Input dati
    /*printf("Inserisci la larghezza: ");
    scanf("%d", &larghezza);
    printf("Inserisci l'altezza: ");
    scanf("%d", &altezza);*/




    int larghezzaWIP = sizeof(titolo) / sizeof(titolo[0]) + 2 + 1 * spaceMultiplier;

    //printf("%d \n", larghezzaWIP);

    // Chiama la funzione per stampare la cornice
    stampaCornice(larghezzaWIP, 6);

    return 0;
}


void stampaOrizzontale(int width) {

    // Scrivi asterischi x la larghezza

    for (int i = 0; i < width - 1; i++) printf("═");
    // Vai a capo

    printf("\n");


}

void stampaVerticale(int width, int height) {

    // ...per quanta altezza -2 (lato sopra e lato sotto)
    for (int i = 0; i < (height - 2); i++) {

        // Scrivi asterisco
        printf("║");

        // Inserisci spazi per la larghezza -2 (i due lati)
        if (i == 1) {
            for (int j = 0; j < (spaceMultiplier / 2); j++) printf(" ");
            printf("%s", titolo);
            for (int j = 0; j < (spaceMultiplier / 2); j++) printf(" ");

            // Mettici dei commenti

        } else if (i==2) {
            int authorSpace = width-2-sizeof(author)/sizeof(author[0]);
            for (int j = 0; j < authorSpace/2; j++) printf(" ");
            printf("%s", author);
            for (int j = 0; j < authorSpace/2; j++) printf(" ");
            if (authorSpace%2) printf(" ");
        }

        else {
            for (int j = 0; j < (width - 3); j++) printf(" ");
        }


        // Asterisco e vai a capo per scrivere la prossima linea
        printf("║\n");

    }
}

void stampaCornice(int width, int height) {
    printf("Width: %d ; Height: %d\n", width, height);


    stampaOrizzontale(width);
    stampaVerticale(width, height);
    stampaOrizzontale(width);

}