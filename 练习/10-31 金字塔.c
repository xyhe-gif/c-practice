#include <stdio.h>
int main(){
	int i,j,k;
	for (i=1;i<=4;i++) 
	{
		for(k=4-i;k>0;--k) 
		{
			
			printf(" ");
		}
		for(j=1;j<2*i;j++) 
		{
			printf("*");
		
		}
		printf("\n");
		
		
	}
	return 0;
}
