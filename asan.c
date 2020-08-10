#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p = malloc(100);
	*((char *)p + 101) = 'a';

	return 0;
}
