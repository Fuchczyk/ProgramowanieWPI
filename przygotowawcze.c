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

void flagaPolski(int arr[], int n)
{
	int poczatek = 1;
	int koniec = n;

	while (poczatek < koniec)
	{
		int kolor = arr[poczatek];
		
		if (kolor == 'c')
		{
			bezpieczneZamien(arr, poczatek, koniec);
			koniec--;
		}
		else
		{
			poczatek++;
		}
	}
}

int mini_m_segment(int arr[], int n, int m)
{
	int suma = 0;
	if (m == 0) return 0;
	for(int i=0 ; i<m ; i++)
	{
		suma+=arr[i];
	}
	int minimum = suma;
	int wsk = m;
	while (wsk < n)
	{
		suma+=arr[wsk];
		suma-=arr[wsk-m];
		if (suma < minimum) minimum = suma;
		wsk++;
	}
	return minimum;
}

int jedenSasiad(int arr[], int n)
{
	if (n==1) return 0;

	if (n==2)
	{
		if (arr[1]!=arr[2]) return 1;
		return 0;
	}

	int pierwszy = arr[1];
	int drugi = arr[2];
	int trzeci = arr[3];
	int wsk = 4;

	if (pierwszy == drugi) return 0;

	while (wsk<=n)
	{
		if((drugi == pierwszy && trzeci == drugi) || (pierwszy!=drugi && pierwszy == trzeci))
		{
			return 0;
		}
		pierwszy = drugi;
		drugi = trzeci;
		trzeci = arr[wsk];
		wsk++;
	}

	if ((drugi == pierwszy && trzeci == drugi) || (pierwszy!=drugi && pierwszy == trzeci))
	{
		return 0;
	}
	return 1;
}

int czyBialoCzerwona(int arr[], int n)
{
	if (n<=1) return 1;
	int wsk = 1;
	int czySpotkanoCzerwony = 0;

	while (wsk<=n)
	{
		int kolor = arr[wsk];
		if (!czySpotkanoCzerwony)
		{
			if (kolor == 'c') czySpotkanoCzerwony = 1;
		}
		else
		{
			if(kolor == 'b') return 0;
		}
		wsk++;
	}

	return 1;
}

void flagaAustrii(int arr[], int n)
{
	int cw = 0;
	if (n%2 == 0) cw = n+2;
	else cw = n+1;
	int pocz = 1;
	int kon = 4*n-1;
	
	while(cw < kon)
	{
		if(pocz <= n)
		{
			bezpieczneZamien(arr, pocz, cw);
			pocz += 2;
			cw += 2;
		}
		else
		{
			bezpieczneZamien(arr, cw, kon);
			cw += 2;
			kon -= 2;
		}
	}
}

void sortujTrojkiCB(int arr[], int n)
{
	if (n==0) return;
	int pocz = 3;
	int kon = n-1;
	while (pocz < kon)
	{
		bezpieczneZamien(arr, pocz, kon);
		pocz+=3;
		kon-=1;
		if (kon%3==0) kon-=1;
	}
}

int bialeSegmenty(int arr[], int n)
{
	int ilosc = 0;
	int flaga = 0;

	for (int i=1 ; i<=n ; i++)
	{
		if (arr[i] == 'b')
		{
			flaga = 1;
		}
		else
		{
			if (flaga == 1)
			{
				flaga = 0;
				ilosc++;
			}
		}
	}

	if (flaga == 1) return ilosc+1;
	else return ilosc;
}
