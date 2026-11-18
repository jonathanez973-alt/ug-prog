#include <stdio.h>

int main(void) {
    int age = 15;
    int joueurs = 3;
    int adulte = 0;
    int reservation = 1;

    if (reservation == 0) {
        printf("Réservation obligatoire\n");
    } else if (joueurs < 2) {
        printf("Groupe trop petit\n");
    } else if (joueurs > 6) {
        printf("Groupe trop grand\n");
    } else if (age < 10) {
        printf("Accès refusé\n");
    } else if (age <= 13) {
        if (adulte == 1 && joueurs >= 3) {
            printf("Accès autorisé\n");
        } else {
            printf("Accès refusé\n");
        }
    } else if (age <= 17) {
        if (joueurs >= 4) {
            printf("Accès autorisé\n");
        } else if (adulte == 1) {
            printf("Accès autorisé\n");
        } else {
            printf("Accès refusé\n");
        }
    } else {
        printf("Accès autorisé\n");
    }
    return 0;
}