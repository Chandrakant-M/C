#include<stdio.h>
#include<stdbool.h>	// required in c to use bool,true and false keywords.

int main(){
	int x=2;
	int y=2;
	bool b=true;
	// If statement style 1
	if(x<y){
		printf("x is less than y\n");
	}
	else if(x>y){
		printf("x is greater than y\n");
	}
	else if(x==y){
		printf("x is equal to y\n");
	}
	
	// If statement style 2:
	if( 1 ){
		printf("This statement is always printed\n");
	}
	if( 50 ){
		printf("This statement is also always printed\n");
	}
	if( -45 ){
		printf("This statement is always printed as well\n");
	}
	if( 0 ){
		printf("This statement is never printed\n");
	}
	if(1.0){
		printf("passed 1.0 in if condition\n");
	}
	if(0.0){
		printf("passed 0.0 in if condition\n");
	}
	if(true){
		printf("passed boolean in if condition");
	}
	
	return 0;
}