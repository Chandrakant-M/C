#include<stdio.h>

int main()
{
	int a,b,c;
	float result;
	printf("Enter the value of a,b and c\n"); //This is printing after entering the values
	scanf("%d %d %d",&a,&b,&c);
	if(b==c)
		printf("b and c cannot be same.Result is INF");
	else
		printf("The result a/(b-c) is: %f",a/(float)(b-c));
	return 0;
}
