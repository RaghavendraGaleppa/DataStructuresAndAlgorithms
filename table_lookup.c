/*
	A Simple table lookup function
	- This is some random comment I added
   */

#include <stdio.h>
#define HASHVAL 101

unsigned create_hash(char *s) {
	/* Create a simple hash for that string */

	unsigned hash;
	for (hash=0; *s != '\0'; s++) {
		hash = *s + 31 * hash;
	}
	return hash % HASHVAL;
}

int main() {
	unsigned hash_val;	
	char *s = "Raghave";
	hash_val = create_hash(s);
	printf("%s: , Hash Val: %u\n",s,hash_val);
	return 0;
}
