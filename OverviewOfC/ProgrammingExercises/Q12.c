#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%25s %10d %25s %10d\n","a=",a,"b=",b);
	printf("%25s %10d %25s %10d\n","sum=",a+b,"difference=",a-b);
	printf("%25s %10d %25s ","product=",a*b,"division=");
	if(b==0)
		printf("%10s","INFINITY");
	else
		printf("%10f",(float)a/b);
	return 0;
}
