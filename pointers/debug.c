#include <stdio.h>
// change the value of x from a different scope
void increment(int* p) {
	*p = (*p + 1);
}

int main() {
	int x = 10;
	int* p = &x;
	increment(p);
	printf("%d \n", x);

	return 0;
}