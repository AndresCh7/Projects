#include "FIBONACCI.h"
#include <stdio.h>
int fibonacci(int number){ 
	int chislo;
	if (number==1)
	{
		chislo = 1;
		printf("%d\n", chislo);
	}
	int i; int x = 0, y = 1; 
	for (i = 2; i <= number; i++){chislo = x + y; x = y; y = chislo;
	if (i == number){ printf("%d\n", chislo); } } return 0; }