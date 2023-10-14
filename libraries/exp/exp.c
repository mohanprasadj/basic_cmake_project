#include <stdio.h>
#include "exp.h"

typedef enum
{
	EXP_NULL,
	EXP_PO2,
	EXP_PO3,
	EXP_PON,
	EXP_NUM
}exp_option;

static int power(int a, int b)
{
	int prod = 1;
	for(int i=0;i<b;i++)
		prod *= a;
	return prod;
}

void exp_function()
{
	void (*func)(int, int);
	exp_option option=EXP_NULL;
	int n1=0,n2=0;
	scanf("%d",(int*)&option);
	if ((option > EXP_NULL) && (option < EXP_PON))
	{
		printf("Enter the number:");
		scanf("%d",&n1);
	}
	else if (option == EXP_PON)
	{
		printf("Enter the power:");
		scanf("%d",&n2);
		printf("Enter the number:");
		scanf("%d",&n1);
	}
	switch(option)
	{
		case EXP_PO2:
			n2 = 2;
			break;
		case EXP_PO3:
			n2 = 3;
			break;
		case EXP_PON:
			break;
		default:
			printf("Invalid input\n");
			break;
	}
	printf("%d ^ %d = %d\n", n1, n2, power(n1, n2));
}
