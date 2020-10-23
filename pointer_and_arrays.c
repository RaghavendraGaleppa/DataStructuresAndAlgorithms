#include <stdio.h>
int f_strlen(char *);

int main() {
	
	int len;
	char s[] = "Hello, World\n";
	len = f_strlen(s);
	printf("The lenght of the string is: %d", len);
}

int f_strlen(char *s) {
	int i;	
	for(i = 0; *s != '\0' && *s != '\n'; s++, i++)
		printf("%c: %d\n",*s,i);
	return i-1;
}
