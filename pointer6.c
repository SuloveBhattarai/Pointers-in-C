#include <stdio.h>

int main(){
	int A[5];
	int *p;
	p= A;
	
	printf("%d\n", p);
	printf("%d\n", *p);
	printf("%d\n", A);
	printf("%d\n", *A);
	printf("%d\n", A+1);
	printf("%d\n", *A+1);
	printf("%d\n", p+1);
	printf("%d\n", *(p+1));
//	printf("%d\n", p+1);
	
	
//	int A[]= {2, 4, 5, 8, 1};
//
//	for (i=0; i<5; i++){
//		
//		printf("%d\n", &A[i]);
//		printf("%d\n", A+i);
//		printf("%d\n", A[i]);
//		printf("%d\n", *(A+i));
//	}
	return 0;
}
