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
	int numbers[4];
	int biggest, smallest, n = 0;


	printf("add(%i, %i) = %3i\n",a, b, add(a, b));
	printf("sub(%i, %i) = %3i\n",a, b, sub(a, b));
	printf("mult(%i, %i) = %3i\n",a, b, mult(a, b));
	printf("div(%i, %i) = %3i\n",a, b, div(a, b));
	printf("rem(%i, %i) = %3i\n", c, a, rem(c, a));

	printf("Enter 5 numbers: \n");
	for (n=0; n<5; n++){
		scanf("%i", &numbers[n]);
	}


	biggest = numbers[0];
	for (n=0; n<5; n++){
		if (numbers[n+1] > biggest){
			biggest = numbers[n+1];
		}
	}

	printf("Biggest number of the 5 you typed in: %i\n", biggest);

	smallest = numbers[0];

	for (n=0; n<4; n++){
		if (numbers[n+1] < smallest){
			smallest = numbers[n+1];
		}
	}
	printf("Smallest number of the 5 you typed in: %i\n", smallest);

	return 0;
}


