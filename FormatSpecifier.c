#include <stdio.h>

int main()
{
	
	//format specifier (%) = defines and formats a type of data to be displayed
	
	// %c = character
	// %s = string (array of characters)
	// %f = float
	// %lf = double
	// %d = integer
	
	// %.1 = decimal precision
	// %1 = min field width
	// %-  = left align

	float item1=5.50;
	float item2=10.43;
	float item3=12.12;
	
	printf("Item 1: $%.2f\n", item1);
	printf("Item 2: $%.2f\n", item2);
	printf("Item 3: $%.2f\n", item3);
	
	return 0;

}
