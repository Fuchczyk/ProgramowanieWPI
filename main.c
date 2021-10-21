#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "przygotowawcze.h"
#include "przygotowawcze1.h"

int main(void)
{
	int n;
	scanf("%i", &n);
	int tab[n+1];
	srand(time(NULL));
	for(int i=1 ; i<=n ; i++)
	{
		tab[i] = rand() % 10 + 1;
	}
	
	for(int i=1 ; i<=n ; i++)
	{
		printf("%i ", tab[i]);
	}
	putchar('\n');
		
	zadanie3(tab, n);
	
	for(int i=1 ; i<=n ; i++)
	{
		printf("%i ", tab[i]);
	}
	putchar('\n');
	return 0;
}
