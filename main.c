#include <stdio.h>
#include "przygotowawcze.h"

int main(void)
{
	int m;
	scanf("%i", &m);
	int a[m*4+1];
	
	for(int i=1 ; i<=4*m ; i++)
	{
		if (i%2 == 1) a[i] = 'c';
		else a[i] = 'b';
	}
	
	flagaAustrii(a, m);

	for (int i=1 ; i<= 4*m ; i++)
	{
		printf("%c ", a[i]);
	}
	putchar('\n');
	return 0;
}
