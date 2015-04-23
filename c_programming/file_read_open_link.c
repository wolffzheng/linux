#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#when compiling this file,should use following command:
#gcc file_read_open_link.c -o file_read_open_link --std=c99 -lm
#because we include math.h so when linking we should explicitly say -lm,which means link math 

int main()
{
	printf("This program is  used to generate sinusoidal value\n");
	printf("from 0 degree to 360 degree\n");

	FILE *out;
	out = fopen("sin_data.txt","w");

	for (int i =0;i<360;i++)
	{
		printf("%d degree ---   %.2f\n",i,sin(i*3.1415926/180));
		fprintf(out,"%d degree --- %.2f\n",i,sin(i*3.1415926/180));
	}

	fclose(out);
	return 0;
}
