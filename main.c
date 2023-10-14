#include <stdio.h>
#include "arith.h"
#include "exp.h"
#include "logical.h"
#include "note.h"

int main()
{
	int category = 0, func = 0;
	category_choose();
	scanf("%d",&category);
	switch(category)
	{
		case 1:
			arith_display();
			arith_function();
			break;
		case 2:
			exp_display();
			exp_function();
			break;
		case 3:
			logical_display();
			logical_function();
			break;
		default:
			default_display();
			return 0;
			break;
	}
	return 0;	
}
