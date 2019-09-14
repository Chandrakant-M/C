#include<stdio.h>

void method2() //This method is called after it is defined.Therefore no warning is thrown
{
  printf("inside Partial compilation 1 's method 2 \n");
}

int main()
{
	printf("inside main of PC1\n");
	method1();
	method2();
	method3();
	return 0;
}
void method1() //This method is called before it is defined.Therefore warning is thrown
{
  printf("inside Partial compilation 1 's method 1 \n");
}