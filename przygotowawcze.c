#include "przygotowawcze.h"

void bezpieczneZamien(int arr[], int i, int j)
{
	if (i!=j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

void sortujLiczby(int arr[], int n)
{
	int a = 1;
	int b = 1;
	int c = n;
	while (b<=c)
	{
		int wart = arr[b];
		if (wart == 0) b++;
		else if (wart == -1) bezpieczneZamien(arr, b++, a++);
		else bezpieczneZamien(arr, b, c--);
	}
}
