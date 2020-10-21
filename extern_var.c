/*
   ============================================ USE OF EXTERN KEYWORD ============================
   - While using extern keyword, make sure that the variable is already defined in the global scope.
   - extern keyword will throw undefined reference error if the variable has not been defined yet.
   */
#include<stdio.h>
int ja;
void sake();

int main() {
	extern int ja;
	ja = 20;
	sake();
	printf("In Main: %d\n", ja);
}

void sake() {
	extern int ja;
	printf("In Sake: %d\n", ja);
	ja = 40;
	printf("In Sake: %d\n", ja);
}
