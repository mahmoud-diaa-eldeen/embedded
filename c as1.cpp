#include<stdio.h>
 main ()
{
	float x,y,z,max=0;
	scanf("%f %f %f",&x ,&y ,&z);
	fflush(stdin); fflush(stdout);
	if(z>x)
	{
		if(z>y)
			printf("%f",z);
		else 
			printf("%f",y);
	}
	else
	{
		if(x>y)
			printf("%f",x);
		else 
			printf("%f",y);
	}	
}
