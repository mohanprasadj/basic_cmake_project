#include <stdio.h>
#include "arith.h"

typedef enum
{
	ARITH_NULL,
	ARITH_ADD,
	ARITH_SUB,
	ARITH_MUL,
	ARITH_DIV,
	ARITH_NUM
}arith_choice;

static int add(int a, int b)
{
	return a+b;
}

static int sub(int a, int b)
{
	return a-b;
}

static int mul(int a, int b)
{
	return a*b;
}

static int div(int a, int b)
{
	return a/b;
}

void arith_function()
{
	int (*func)(int, int);
	arith_choice choice=ARITH_NULL;
	int n1=0,n2=1;
	scanf("%d",(int*)&choice);
	if ((choice > ARITH_NULL) && (choice < ARITH_NUM))
	{
		printf("Enter 2 numbers:");
		scanf("%d%d",&n1, &n2);
	}
	switch(choice)
	{
		case ARITH_ADD:
			printf("%d + %d = ",n1,n2);
			func = add;
			break;
		case ARITH_SUB:
			printf("%d - %d = ",n1,n2);
			func = sub;
			break;
		case ARITH_MUL:
			printf("%d - %d = ",n1,n2);
			func = mul;
			break;
		case ARITH_DIV:
			printf("%d - %d = ",n1,n2);
			func = div;
			break;
		default:
			printf("Invalid input\n");
			return;
			break;
	}
	printf("%d\n",func(n1,n2));
}
