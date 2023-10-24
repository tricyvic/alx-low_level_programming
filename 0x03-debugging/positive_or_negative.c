#include "main.h"

/**
 *main- Entry point
 *Return: Always 0 (success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
	  printf("%d is positive\n", i);
	  else if (i == 0)
	    printf("0 is zero\n");
	    else
	      printf("%d is negative\n", i);
	return;
}
