#include <stdio.h>
#include "logical.h"

typedef enum
{
	LOGICAL_NULL,
	LOGICAL_GT,
	LOGICAL_LT,
	LOGICAL_ET,
	LOGICAL_NUM
}logical_choice;

static int logical_gt(int a, int b)
{
	return (a>b);
}

static int logical_lt(int a, int b)
{
	return (a<b);
}

static int logical_et(int a, int b)
{
	return (a==b);
}

void logical_function()
{
	logical_choice choice = LOGICAL_NULL;
	int n1=0,n2=0;
	scanf("%d",(int*)&choice);
	if ((choice > LOGICAL_NULL) && (choice < LOGICAL_NUM))
	{
		printf("Enter 2 numbers:");
		scanf("%d%d", &n1, &n2);
	}
	switch(choice)
	{
		case LOGICAL_GT:
			printf("%d > %d : %d\n", n1, n2, (n1 > n2));
			break;
		case LOGICAL_LT:
			printf("%d < %d : %d\n", n1, n2, (n1 < n2));
			break;
		case LOGICAL_ET:
			printf("%d == %d : %d\n", n1, n2, (n1 == n2));
			break;
		default:
			printf("Invalid input\n");
			break;
	}
}
