#include<stdio.h>
#include<Math.h>

float dist(int x1,int y1,int x2,int y2){
	return sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
}
// DISCREPANCE IN THE CALCULATION.PLEASE CHECK
int main(){
	int x1=2,y1=2,x2=5,y2=6;
	float dist1;
	dist1=dist(x1,y1,x2,y2);
	dist1=dist1/2.0;
	printf("The area of the circle is :%f",dist1*dist1*3.14159);
	return 0;

}
