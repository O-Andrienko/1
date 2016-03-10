#include <stdio.h>
#include <stdlib.h>
#include "InputFunctions.h"
#include "checkFunctions.h"

void main()
{
	
	float a, b, c;
	inputParams(&a, &b, &c);
	while (checkparams(a, b, c) != true) inputParams(&a, &b, &c);

	getchar();
}

