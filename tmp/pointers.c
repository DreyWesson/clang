#include <stdio.h>

int main() {
	int x = 5;
	int* p = &x;
	printf("p stores address of x %p\n", p);


	int** q = &p;
	printf("q stores address of p %p\n", q);

	int*** r = &q;
	printf("r stores address of q %p\n", r);
	printf("\n");

	// where x is still storing value 5
	printf("ask q for address of p %p\n", *q);
	printf("get value of x from the address of q -> p -> x %d\n", *(*q));
	printf("ask r for address of q %p\n", *r);
	printf("ask r for address of q -> p %p\n", *(*r));
	printf("get value of x from the address of r -> q -> p -> x %d\n", *(*(*r)));
	*(*(*r)) = *p + 33;
	printf("%d ", x);
	return 0;
}