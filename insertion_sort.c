/*
   	================= INSERTION SORT =================
   	- Sorts a given array of numbers in increasing order
	- This program takes input numbers from the range of 0 - 9 only
*/

#include<stdio.h>
#define MAXLEN 10
int f_getline(int num[]); // Get an array of numbers
void f_printline(char text[], int num[]); // Print an array of numbers
void insertion_sort(int num[]); // Sort the num array 

int main() {
	
	int num[MAXLEN];
	int len=0;

	len = f_getline(num);
	f_printline("Original Array: ", num);
	insertion_sort(num);
	f_printline("Sorted Array: ", num);
}

void insertion_sort(int num[]) {
	int key, i = 1, j = 0;
	while(num[i] != '\0') {
		key = num[i];
		// Inset the number key into the sorted sequence
		j = i - 1;	
		while(j >= 0 && key > num[j]) {
			num[j+1] = num[j]; // Shift right
			j--;
		}
		num[j+1] = key;
		i = i+1;
	}
}


int f_getline(int num[]) {
	int c, i=0;
	while((c=getchar()) != '\n' && i<MAXLEN) 
		if (c != ' ')
			num[i++] = (int) c - '0';
	return i;
}

void f_printline(char *text, int num[]) {
	int i = 0;
	printf("%s",text);
	while(num[i] != '\0') {
		printf("%d ",num[i]);
		i++;
	}
	printf("\n");
}
