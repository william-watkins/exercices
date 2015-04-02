#include <stdio.h>
#include <stdlib.h>

int 	main()
{
	float 	fahrenheit;
	float 	celsius;

	printf("> ");
	scanf("%f", &fahrenheit);
	celsius = (5.0/9.0) * (fahrenheit - 32);
	printf("%.2fF -> %.2fC\n", fahrenheit, celsius);
	return EXIT_SUCCESS;
}
