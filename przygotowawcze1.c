#include "przygotowawcze1.h"

void zadanie1 (int arr[], int n)
{
	for (int i=2 ; i<=n ; i++)
	{
		arr[i] += arr[i-1];
	}
}

void zadanie2 (int arr[], int n)
{
	for (int i=n ; i>=2 ; i--)
	{
		arr[i] -= arr[i-1];
	}
}

void zadanie3 (int arr[], int n)
{
	if (n<=2) return;
	int wartoscPrzed = arr[1];
	int wartoscDoObliczen = wartoscPrzed;
	for(int i=2 ; i<=n-1; i++)
	{
		wartoscDoObliczen = wartoscPrzed;
		wartoscPrzed = arr[i];
		arr[i] = (wartoscDoObliczen+arr[i+1])/2;
	}
}

