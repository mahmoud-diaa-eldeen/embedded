#include<stdio.h>
main ()
{
	float n;
	scanf("%f",&n);
	fflush(stdin); fflush(stdout);
	if(n==0)
	printf("You entered zero");
	else if(n>0)
	printf("%f is positive",n);
	else
	printf("%f is negitive",n);
}
