#include <stdint.h>
#include <stdio.h>

int main()
{
	printf("This program is used to generate galois with polynomial=x16+x5+x4+x3+1\n");
	int lfsr[16]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int lfsr_next[16]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	int sum=16;
	int step=0;
	int i=0;
	do{
		lfsr_next[0]=lfsr[15];
		lfsr_next[1]=lfsr[0];
		lfsr_next[2]=lfsr[1];
		lfsr_next[3]=lfsr[15]^lfsr[2];
		lfsr_next[4]=lfsr[15]^lfsr[3];
		lfsr_next[5]=lfsr[15]^lfsr[4];
		lfsr_next[6]=lfsr[5];
		lfsr_next[7]=lfsr[6];
		lfsr_next[8]=lfsr[7];
		lfsr_next[9]=lfsr[8];
		lfsr_next[10]=lfsr[9];
		lfsr_next[11]=lfsr[10];
		lfsr_next[12]=lfsr[11];
		lfsr_next[13]=lfsr[12];
		lfsr_next[14]=lfsr[13];
		lfsr_next[15]=lfsr[14];	
		sum=0;
		step++;
		printf("%d:",step);
		for (i=15;i>=0;i--){
			lfsr[i]=lfsr_next[i];
			sum+=lfsr[i];
			printf("%d",lfsr[i]); 
		}
		printf("\n");
	}while(sum!=16);
	
	return 0;
}
