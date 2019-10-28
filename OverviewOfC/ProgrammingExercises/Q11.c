#include<stdio.h>
#include<Math.h>
int main(){
	int a,b,c;
	float s,area,temp;
	printf("Enter the sides of the triangle");
	scanf("%d %d %d",&a,&b,&c);
	s=(a+b+c)/2.0;
	temp=s*(s-a)*(s-b)*(s-c);
	area=sqrt(temp);
	printf("\n The area is %f",area);
	return 0;
}
