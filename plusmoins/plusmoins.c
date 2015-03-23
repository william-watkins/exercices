#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int ft_difficulty();
void ft_game_logic(int max);
bool ft_core(int number, int counter);

int main()
{
	int max;
	char main_loop;

	main_loop = 'y';

	while (main_loop == 'y')
	{
		max = ft_difficulty();

		if (max == 666)
		{
			printf("> incorrect input\n");
			return EXIT_FAILURE;
		}
		ft_game_logic(max);
	
		printf("> Play again ? [y/n]");
		scanf("%c", &main_loop);
		scanf("%c", &main_loop);
	}
	return EXIT_SUCCESS;
}


/* set the difficulty menu for the game */
int ft_difficulty()
{
	int choice;

	printf("=======<  MYSTERY NUMBER  >=======\n");
	printf("= 1: EASY                 [1;100]=\n");
	printf("= 2: MEDIUM              [1;1000]=\n");
	printf("= 3: HARD               [1;10000]=\n");
	printf("==================================\n");
	printf("> ");
	scanf("%d", &choice);
  	if (choice == 1)
		return 100;
  	else if (choice == 2)
		return 1000;
	else if (choice == 3)
		return 10000;
 	else 
		return 666;
}


void ft_game_logic(int max)
{
	int number;
	int counter;
	bool condition;

	counter = 1;
	condition = false;

	srand(time(NULL));
	number = (rand() % max) + 1;

	printf("-- the game begin --");

	while (condition == false)
	{
		condition = ft_core(number, counter);
		counter++;
	}
}


bool ft_core(int number, int counter)
{
	int input;

	printf("\n> proposition: ");
	scanf("%d", &input);
	    
	if (input < number)
		printf("mystery number is more.");
	else if (input > number)
		printf("mystery number is less.");
	else if (input == number)
	{
		printf("correct, mystery number is %d, found in %d try.\n", number, counter);
		return true;
	}
}

