#include <stdlib.h>

struct T {
	struct T* next;
};


int main()
{
	struct T* x;
	
	x = (struct T*) malloc(sizeof(struct T));

	free(x);

	return 1;
}
