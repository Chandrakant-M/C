#include<stdio.h>

int main()
{
	int num1=5,i=1;
	printf("Enter the number\n"); // This line is not getting printed first
	scanf("%d",&num1);
	for(i=1;i<=10;i++)
		printf("%d x %2d = %d\n",num1,i,num1*i);
	return 0;
}