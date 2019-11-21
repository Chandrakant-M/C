#include<stdio.h>
#include<Math.h>

float dist(int x1,int y1,int x2,int y2){
	return sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
}

int main(){
	int x1,y1,x2=4,y2=5;
	float dist1;
	printf("Enter point 1 co-ordinates:");
	scanf("%d %d",&x1,&y1);
	dist1=dist(x1,y1,x2,y2);
	printf("The area of the circle is :%f",dist1*dist1*3.14159);
	return 0;

}
