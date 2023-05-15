#include<stdio.h>
int main()
{
	int n;
	printf("Enter an integer you want to chek: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	
	if(n%2==0)
	printf("%d is even",n)	;
	
	else 
	printf("%d is odd",n);
}
