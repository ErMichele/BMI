#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
int start = 0;
int main() {
    float h, m, BMI;
    char scelte[1000];

    printf("\n|Individuazione di BMI|  \n\n");
    if (start==0) {
        printf ("Benvenuti all'indivituatore di BMI, in cui grazie all'altezza e la massa di un individuo riesce a calcolare l'indice di massa corporea!\n");
    }
    Sleep (2000);

    printf("Per cominciare, scrivere i valori:\nh (in metri) = ");
    scanf("%f", &h);
    printf("m (in kg) = ");
    scanf("%f", &m);

    // Calcolo del BMI
    BMI = m / (h * h);
    
    printf("Il suo indice di massa corporea e' di %.2f. Vuole vedere in che categoria si trova? ", BMI);
    scanf("%s", scelte);

    if (strcmp(scelte, "si") == 0 || strcmp(scelte, "Si") == 0) {
        Sleep (500);
        printf ("La sua classe e': ");
        Sleep (500);
        if (BMI < 16.00) {
            printf("Sottopeso\n");
        } else if (BMI < 24.99) {
            printf("Normopeso\n");
        } else if (BMI < 29.99) {
            printf("Sovrappeso\n");
        } else {
            printf("Obesità\n");
        }
    }

    printf ("Vuole riavviare il programma? ");
    scanf ("%s", scelte);
    if (strcmp(scelte, "si") == 0 || strcmp(scelte, "Si") == 0) {
        printf ("Allora preprariamo il riavvio!");
        Sleep (1500);
        start++;
        system("cls");
        main ();
    }
    return 0;
}
