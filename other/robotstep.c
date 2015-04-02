#include <stdlib.h>
#include <stdio.h>

#define FLOORS 3
#define STEPS 20

int 	main()
{
	int 	steps[FLOORS][STEPS];
	int 	i;
	int 	j;

	i = 0;
	j = 0;

	while (i < FLOORS + 1)
	{
		j = 0;
		while (j < STEPS + 1)
		{
			printf("-floor: %d\n- step: %d\n", i, j);
			j++;
		}
		i++;
	}

	return EXIT_SUCCESS;
}
