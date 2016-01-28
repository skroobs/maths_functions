#include <stdio.h>

int add (int x, int y)
{
    return x+y;
}

int sub (int x, int y)
{
    return x-y;
}

int mult (int x, int y)
{
    return x*y;
}

int div (int x, int y)
{
    return x/y;
}


int main()
{
	int a = 5;
	int b = 7;
	int i = 0;


	printf("add(%i, %i) = %3i\n",a, b, add(a, b));
	printf("sub(%i, %i) = %3i\n",a, b, sub(a, b));
	printf("mult(%i, %i) = %3i\n",a, b, mult(a, b));
	printf("div(%i, %i) = %3i\n",a, b, div(a, b));

	

	return 0;
}


