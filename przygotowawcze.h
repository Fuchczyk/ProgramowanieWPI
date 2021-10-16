#ifndef _PRZYGOTOWAWCZE_H
#define _PRZYGOTOWAWCZE_H

void bezpieczneZamien(int arr[], int i, int j);

/* Funkcja sortuje tablicę zawierającą n elementów
 * ponumerowanych od 1 ... n. Elementy w tablicy to -1 , 0 , 1
 * np. 0 1 -1 1 0 1  --> -1 0 0 1 1 1
 * Można używać tylko funkcji zamień i sprawdzenia wartośći (która jest droga)
 */
void sortujLiczby(int arr[], int n);
#endif
