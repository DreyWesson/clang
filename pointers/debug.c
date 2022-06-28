#include <stdio.h>
// use pointers to infiltrate another scope using its address
void increment(int* p) {
	*p = (*p + 1);
}

int main() {
	int x = 10;
	increment(&x);
	printf("%d \n", x);
	return 0;
}