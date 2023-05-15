#include<stdio.h>
main()
{
	int i,d=1;
	printf("Enter an intger: ");
	scanf("%d",&d);
	if(d==0)
		printf("Factorial = 1");
	else if(d<0)
	printf("Error!!! Factorial of negative number doesn't exist.");
	else 
	{
		for(i=d-1;i>=2;i--)
		d=i*d;
		
	printf("Factorial = %d",d);
	}
}
