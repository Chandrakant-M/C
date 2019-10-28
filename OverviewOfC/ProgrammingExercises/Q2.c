#include<stdio.h>

int main()
{
	//text is right justified instead of left justified
	printf("%25s:%7s%s\n","First line"," ","Name");
	printf("%25s:%7s%s\n","Second line"," ","Door no. Street");
	printf("%25s:%7s%s","Third line"," ","City,Pin code");
	return 0;
}