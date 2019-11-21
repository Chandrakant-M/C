#include<stdio.h> // not required but warning thrown

// There must be exactly one main function;no more-no less.
/* This function is supposed to return int but no error thrown.return 0 is automatically added.
int main()
{
  printf("Hello world.");
}
*/

/*
main()	// return type defaults to int.No error thrown
{
  printf("Hello world.");
}
*/

/* error
void main()
{
	printf("Hello world.");
	return 0;	// cannot return int
}
*/

char main()	// main doesn't necessarily return void or int
{
	printf("Hello world.returning char\n");
	printf("%d",functionOne());	//functionOne is returning 15.Why??
	return 'a';
}

functionOne()  // return type defaults to int. For all functions.Only a warning is thrown
{
	printf ("Inside function");
	//return 0;
}

/*	This will throw error.Says printf already declared
void printf()
{
	printf ("Inside printf function");
}
*/