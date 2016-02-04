//This is the line causing issue in the master branch
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

int rem (int x, int y)
{
    return x%y;
}


int main()
{
	int a = 5;
	int b = 7;
	int c = 42;


	printf("add(%i, %i) = %3i\n",a, b, add(a, b));
	printf("sub(%i, %i) = %3i\n",a, b, sub(a, b));
	printf("mult(%i, %i) = %3i\n",a, b, mult(a, b));
	printf("div(%i, %i) = %3i\n",a, b, div(a, b));
	printf("rem(%i, %i) = %3i\n", c, a, rem(c, a));

	

	return 0;
}


