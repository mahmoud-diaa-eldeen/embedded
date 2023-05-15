#include<stdio.h>
main()
{
	char a;
	float x,y;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin); fflush(stdout);
	
	scanf("%c",&a);
	
	printf ("Enter two operands : ");
	fflush(stdin); fflush(stdout);
	
	scanf("%f %f",&x,&y);
	
	switch(a)
	{
		case '+':
		{
			printf("%f + %f% = %f",x,y,x+y);
		}
		break;
		case '-':
		{
				printf("%f - %f% = %f",x,y,x-y);
		}
		break;
			case '*':
		{
			printf("%f * %f% = %f",x,y,x*y);
		}
		break;	
		case '/':
		{
			printf("%f / %f% = %f",x,y,x/y);
		}
		break;
	}
}
