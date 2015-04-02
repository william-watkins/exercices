#include <stdlib.h>

#include <stdio.h>

int 	main()
{
	int 	height;
	int 	width;
	int 	i;
	int 	j;

	i = 0;
	j = 0;
	printf("Height: ");
	scanf("%d", &height);
	printf(" Width: ");
	scanf("%d", &width);

	while (i < height)
	{
		while (j < width)
		{
			if (i == 0 || i == height - 1)
			{
				if (j == 0 || j == width - 1)
					printf("+");
				else
					printf("-");
			}
			j++;
		}
		j = 0;
		if (i != 0 && i != height - 1)
		{
			printf("|");
			while (j < width - 2)
			{
				printf(" ");
				j++;
			}
			printf("|");
			printf("\n");
			j = 0;
		}
		else
			printf("\n");
		i++;
	}

	return EXIT_SUCCESS;
}
