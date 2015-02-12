#include <stdlib.h>

struct T {
	struct T* next;
	int data;
};


int main()
{
	struct T* x, *y;
	
	x = (struct T*) malloc(sizeof(struct T));
	x->next = (struct T*) malloc(sizeof(struct T));

	y = x->next;
	x->data = 0;
	y->data = 0;
	x->data = y->data;
	if (x == y) {
		return 0;
	}

	free(x);
	free(y);

	return 1;
}
