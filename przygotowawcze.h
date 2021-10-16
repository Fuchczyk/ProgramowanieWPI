#ifndef _PRZYGOTOWAWCZE_H
#define _PRZYGOTOWAWCZE_H

void bezpieczneZamien(int arr[], int i, int j);

/* Funkcja sortuje tablicę zawierającą n elementów
 * ponumerowanych od 1 ... n. Elementy w tablicy to -1 , 0 , 1
 * np. 0 1 -1 1 0 1  --> -1 0 0 1 1 1
 * Można używać tylko funkcji zamień i sprawdzenia wartości (która jest droga)
 */
void sortujLiczby(int arr[], int n);

/* Mając urny zawierające tylko czerwone i białe żetony,
 * należy posortować je tak, aby kolory następowały w kolejności
 * biały, czerwony.
 * np. b c c b b c b c -> b b b b c c c c
 * Można używać tylko funkcji zamień i sprawdzenia koloru (droga operacja)
 */
void flagaPolski(int arr[], int n);

/* Napisz fragment programu, który dla tablicy A[n]
 * oraz stałej m takiej, że 0 <= m < n znajdzie segment
 * długości m o minimalnej sumie i wartość tej sumy
 * wypisze na standardowe wyjście. Podaj dokładną liczbę
 * operacji arytmetycznych, które Twój algorytm wykona
 */
int mini_m_segment(int arr[], int m, int n);

/* Napisz fragment programu, który sprawdza warunek:
 * każda urna ma dokładnie jednego sąsiada innego koloru.
 * 1 - spełniony warunek, 0 - niespełniony warunek.
 * Użyte kolory to czerwony(0) i biały(1)
 */
int jedenSasiad(int arr[], int n);

/* Napisz fragment programu, który sprawdza warunek:
 * wszystkie żetony białe znajdują się w indeksach
 * mniejszych niż żetony czerwone. Urny numerowane są od 1 do n
 * n>=0, dla n=0 nie ma żadnej urny. Postaraj się wywołać sprawdzenie
 * zawartości jak najmniej razy.
 */
int czyBialoCzerwona(int arr[], int n);

/* Zadanie o fladze Austrii: w urnach ponumerowanych od 1 do 4n znajdują się
 * żetony (na pozycjach nieparzystych są żetony czerwone a na parzystych białe).
 * Mając procedurę Zamien(), poukładaj flagę Austrii. n czerwonych, 2n białych, n czerwonych.
 */
void flagaAustrii(int arr[], int n);
#endif
