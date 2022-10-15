// C program to illustrate
// call by reference
#include <stdio.h>

void swapnum(int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

// Driver code
int main(void) {
	int a = 10, b = 20;

	// passing parameters
	swapnum(&a, &b);

	printf("a is %d and b is %d", a, b);
	return 0;
}
