#include <stdio.h>

int main(){
	int a=10;
	int *p;
	p= &a;
	//Address of a in p is:
	printf("%d\n", p);
	//Before dereferencing
	printf("%d", a);
	//After dereferencing
	*p=12;
	printf("%d\n", a);
//	printf("%d\n", *p);
	int b= 20;
	*p= b; //Will address of b change to p??
	p= &b;
	printf("%d\n", p);
	return 0;
	
	
}



