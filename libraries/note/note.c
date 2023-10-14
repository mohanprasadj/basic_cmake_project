#include <stdio.h>
#include "note.h"

void category_choose()
{
	printf("Please choose the category of function you want to perform:\n");
	printf("1. Arithmetic\n");
	printf("2. Exponential\n");
	printf("3. Logical\n");
}

void arith_display()
{
	printf("Choose the arithmetic function you want to perform:\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
}

void exp_display()
{
	printf("Choose the exponential function you want to perform:\n");
	printf("1. Power of 2\n");
	printf("2. Power of 3\n");
	printf("3. Power of n\n");
}

void logical_display()
{
	printf("Choose the logical function to perform:\n");
	printf("1. Greater than\n");
	printf("2. Lesser than\n");
	printf("3. Equal to\n");
}

void default_display()
{
	printf("Invalid Input\n");
}
