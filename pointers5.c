//Pointer as function arguments- call by ref
#include <stdio.h>

void increment(int a)
{
	a= a+1; // Another a variable
	printf("Address of variable a in increment is %d \n", &a);
}

int main(){
	
	int a; // Local variabl- access within the same function
	a= 10;
	increment(a);
	//printf("a= %d", a);
	printf("Address of variable a in main is %d \n", &a);
	return 0;
}
