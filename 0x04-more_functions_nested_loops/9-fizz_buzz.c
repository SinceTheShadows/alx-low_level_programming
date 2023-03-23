#include "main.h"

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 */
int main(void)
{
  int i;
  char fiz[] = "Fizz";
  char buz[] = "Buzz";
  char fizbuz[] = "FizzBuzz";

  for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", buz);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fizbuz);
		else if (i % 3 == 0)
			printf("%s ", fiz);
		else if (i % 5 == 0)
			printf("%s ", buz);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
