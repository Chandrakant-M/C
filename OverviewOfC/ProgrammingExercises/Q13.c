#include<stdio.h>
#include<Math.h>

int main(){
	int x1,y1,x2,y2;
	float dist;
	printf("Enter point 1 co-ordinates:");
	scanf("%d %d",&x1,&y1);
	printf("Enter point 2 co-ordinates:");
	scanf("%d %d",&x2,&y2);
	dist=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
	printf("The distance between the two points is :%f",dist);
	return 0;
}
