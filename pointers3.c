#include <stdio.h>

int main(){
	int a= 1025;
	int *p;
	p = &a;
	printf("Size of integer in bytes is %d\n", sizeof(int));
	printf("Address= %d, value= %d\n", p, *p);
	printf("Address= %d, value= %d\n", p+1, *(p+1));
	
	char *p0;
	p0= (char*)p; //typecasting
	printf("Size of char is %d bytes\n", sizeof(char));
	printf("Address= %d, value= %d\n", p0+1, *(p0+1));
	
}
