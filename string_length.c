/*
	- This program calculates the length of a string.
   */

#include<stdio.h>
#define MAXLEN 100
void f_getline(char input_str[]);
int f_strlen(char input_str[]);

int main() {
	
	char input_str[MAXLEN];
	int len = 0;
	printf("Input: ");
	f_getline(input_str);
	len = f_strlen(input_str);
	printf("Length: %d\n",len);	
}

void f_getline(char input_str[]) {
	int i = 0;
	int c;
	while((c = getchar()) != '\n') {
		input_str[i++] = (int) c - '0';
	}
}

int f_strlen(char input_str[]) {
	int i = 0;
	while(input_str[i] != '\0')
		++i;
	return i;
}
