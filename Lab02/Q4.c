#include <stdio.h>

int main()
{
	float f,c;
	printf("Enter temperature in degree farenheit ");
	scanf("%f",&f);
	c=(f-32)*(5.0/9.0);
	printf("temperature in degree celsius %.2f\n",c);}

