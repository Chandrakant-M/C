#include<stdio.h>

int main(){
	int a,b;
	printf("Enter the numbers:\n");
	scanf("%d %d",&a,&b);
	printf("%d + %d = %d \n",a,b,sum(a,b));
	printf("%d - %d = %d \n",a,b,sub(a,b));
	return 0;
}

int sum(int a ,int b){
	return a+b;
}

int sub(int a , int b){
	return a-b;
}
