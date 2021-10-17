#include <stdio.h>
#include "przygotowawcze.h"

int main(void)
{
	int n;
	scanf("%i", &n);
	int arr[3*n+1];
	for(int i=1 ; i<= 3*n ; i++)
	{
		if (i%3==0) arr[i] = 'b';
		else arr[i] = 'c';
	}

	for(int i=1 ; i<=3*n ; i++)
	{
		printf("%c ", arr[i]);
	}

	sortujTrojkiCB(arr, 3*n);
	putchar('\n');

	for(int i=1 ; i<=3*n ; i++)
	{
		printf("%c ", arr[i]);
	}
	putchar('\n');
	return 0;
}
