#include<stdio.h>

int main(){
	float radius,area;
	const float PI=3.14159;
	printf("Enter the radius: \n");
	scanf("%f",&radius);
	printf("The area of the circle with given radius is:%f",PI*radius*radius);
	return 0;
}
