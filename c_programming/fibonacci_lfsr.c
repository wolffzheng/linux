#include <stdint.h>
#include <stdio.h>

int main()
{
	printf("This program is used to generate fibonacci with polynomial=x3+x2+1");
	uint16_t start=7;
	uint16_t lfsr=start;
	unsigned bit;
	unsigned period=0;

	do{
		bit=((lfsr>>2)^(lfsr>>1)) & 1;
		lfsr=lfsr<<1;
		lfsr=lfsr & 6;
		lfsr=lfsr & bit;
		period =period +1;
		printf("%d:  %d\n",period,lfsr);
	}while(lfsr!=start);
	
	return 0;
}
