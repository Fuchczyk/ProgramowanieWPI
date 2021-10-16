#include <stdio.h>
#include "przygotowawcze.h"

int main(void)
{
	int m;
	int a[15] = {2,1,10,4,3,6,6,2,4,1,2,0,3,2,5};
	scanf("%i", &m);
	
	printf("Segment długości %i ma minimalną sumę %i\n", m, mini_m_segment(a, 15, m));
	return 0;
}
