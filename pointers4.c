#include <stdio.h>

int main(){
	int x= 5;
	int *p;
	p= &x;
	*p=6;
	printf("Value of p is", p);
	
	int **q; // Can store the value of p
	q= &p;
	printf("Value of q is", q);
	
	int ***r;
	r= &q;
	printf("Value of r is", r);
}
