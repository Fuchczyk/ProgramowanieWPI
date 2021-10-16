#include <stdio.h>
#include "przygotowawcze.h"

int main(void)
{
	int m;
	scanf("%i", &m);
	int a[m+1];
	for(int i=1 ; i<=m ; i++)
	{
		char c;
		scanf("%c", &c);
		a[i] = (int)c;
	}
		
	printf("%i\n", czyBialoCzerwona(a, m));
	return 0;
}
