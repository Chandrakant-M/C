#include<stdio.h>
// Celsius to Fahrenheit
int main()
{
	float c=0.0f,f=32.0f;
	scanf("%f",&c);
	f=(9*c/5)+32;
	printf("\nThe corresponding value in Fahrenheit: %f\n",f);

	return 0;
}
