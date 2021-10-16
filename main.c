#include <stdio.h>
#include "przygotowawcze.h"

int main(void)
{
	int arr[] = {0, -1, 0, 1, 1, -1, 1, 0, 0, 1};
	sortujLiczby(arr, 9);
	for(int i=1 ; i<=9 ; i++)
	{
		printf("%i ", arr[i]);
	}
	putchar('\n');
	return 0;
}
