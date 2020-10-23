#include <stdio.h>
int function_2();
extern int function_2() {
	printf("function 2\n");
}
