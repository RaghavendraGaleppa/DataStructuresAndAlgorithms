#include<stdio.h>

struct rect {
	int x;
	int y;
};

int main() {
	struct rect p, *pp = &p;
	p.x = 20;
	p.y = 20;
	printf("p: (%d, %d)\n",p.x,p.y);

	pp->x++;
	printf("pp->x++\n");
	printf("p: (%d, %d)\n",p.x,p.y);
	printf("pp: (%d, %d)\n",pp->x,pp->y);

	++pp->y;
	printf("++pp->y\n");
	printf("p: (%d, %d)\n",p.x,p.y);
	printf("pp: (%d, %d)\n",pp->x,pp->y);
}
