#include<stdio.h>

int main()
{
	printf("qsrychyc,shuru:");
	
    int foot;
	int inch;
	
	scanf("%d %d",&foot ,&inch);
	
	printf("sg:%fm.\n",(foot+inch/12.0)*0.3048);
	
	return 0;
}