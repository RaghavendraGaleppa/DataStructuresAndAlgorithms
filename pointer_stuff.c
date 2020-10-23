#include<stdio.h>

int main() {
	int x = 20;
	int *p;

	p = &x;

	printf("Original Value of x: %d\n",x);
	printf("Value of p: %p\n",p);
	printf("Value of *p: %d\n\n",*p);

	*p = 10;
	printf("After *p = 10\n");
	printf("New value of x: %d\n",x);
	printf("New value of p: %p\n",p);
	printf("New value of *p: %d\n\n",*p);

	++*p;
	printf("After ++*p\n");
	printf("New value of x: %d\n",x);
	printf("New value of p: %p\n",p);
	printf("New value of *p: %d\n\n",*p);
	
	++(*p);
	printf("After ++(*p)\n");
	printf("New value of x: %d\n",x);
	printf("New value of p: %p\n",p);
	printf("New value of *p: %d\n\n",*p);
	return 0;
}
