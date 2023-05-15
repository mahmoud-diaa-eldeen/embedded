#include<stdio.h>
main ()
{
	int x;
	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("sum = %d",x*(x+1)/2);
}
