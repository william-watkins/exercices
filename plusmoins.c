#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int difficulty();
void game_logic(int max);
bool core(int number, int counter);

int main()
{
    int max;
    char mainloop;

    mainloop = 'y';

    while (mainloop == 'y')
    {
		max = difficulty();

		if (max == 666)
		{
			printf("> incorrect input\n");
		    return EXIT_FAILURE;
		}
		game_logic(max);
	
		printf("> Play again ? [y/n]");
		scanf("%c", &mainloop);
		scanf("%c", &mainloop);
    }
    return EXIT_SUCCESS;
}


/* set the difficulty menu for the game */
int difficulty()
{
	int choice;

	printf("========<  NOMBRE MYSTERE  >========\n");
 	printf("= 1: EASY                   [1;100]=\n");
 	printf("= 2: MEDIUM                [1;1000]=\n");
 	printf("= 3: HARD                 [1;10000]=\n");
 	printf("====================================\n");
  	printf("> ");
  	scanf("%d", &choice);
  	if (choice == 1)
	{
	    return 100;
  	}
  	else if (choice == 2)
	{
	    return 1000;
  	}
	else if (choice == 3)
	{
	    return 10000;
  	}
 	else 
	{
	    return 666;
	}
}



void game_logic(int max)
{
	int number;
	int min;
	int counter;
	bool condition;

	min = 1;
	counter = 1;
	condition = false;

	srand(time(NULL));
	number = (rand() % (max - min + 1)) + min;

	printf("-- the game begin --");

	while (condition == false)
	{
		condition = core(number, counter);
	    counter++;
	}
}



bool core(int number, int counter)
{
	int input;

	printf("\n> proposition: ");
	scanf("%d", &input);
	    
	if (input < number)
	{
		printf("mystery number is more.");
	}
	else if (input > number)
	{
		printf("mystery number is less.");
	}
	else if (input == number)
	{
		printf("correct, mystery number is %d, found in %d try.\n", number, counter);
		return true;
	}
}
