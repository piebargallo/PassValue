// C program to illustrate
// call by value
#include <stdio.h>

// Def function func
void func(int a, int b) {
	a += b;
	printf("In func, a = %d b = %d\n", a, b);
}

// Driver code
int main(void) {
	int x = 5, y = 7;

	// Passing parameters
	func(x, y);
	printf("In main, x = %d y = %d", x, y);
	return 0;
} // End driver
