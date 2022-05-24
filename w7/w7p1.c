/*
*****************************************************************************
                          Workshop - #7 (P1)
Full Name  : Smit Anjaykumar Patel
Student ID#: 104424213
Email      : sapatel59@myseneca.ca
Section    : IPC144NMM.10348.2221
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MIN_LIVES 1
#define MAX_LIVES 10
#define MIN_PATHLENGTH 10
#define MAX_PATHLENGTH 70
#define MULTIPLE 5

struct playerinfo
{
	char Chacter;
	int lifes;
	int odds[MAX_PATHLENGTH];


};

struct gameinfo
{
	int path_length;
	int BOMBS[MAX_PATHLENGTH];
	int treaSURE[MAX_PATHLENGTH];
	int Moves;
};

int main(void)
{
	int stp = 1, limitcheck = 5, k = 0;

	struct playerinfo player_configuration = { 0,0,{0} };

	struct gameinfo game_configuration = { 0,{0},{0},0 };

	int maxium_moves;


	printf("================================\n");

	printf("         Treasure Hunt!\n");

	printf("================================\n");

	printf("\nPLAYER Configuration\n");

	printf("--------------------\n");

	printf("Enter a single character to represent the player: ");

	scanf(" %c", &player_configuration.Chacter);

	while (stp)
	{
		printf("Set the number of lives: ");

		scanf(" %d", &player_configuration.lifes);

		if (player_configuration.lifes  < MIN_LIVES || player_configuration.lifes > MAX_LIVES)
		{
			printf("     Must be between 1 and 10!\n");

		}
		else
		{
			printf("Player configuration set-up is complete\n");
			stp = 0;
		}
	}

	printf("\nGAME Configuration\n");
	printf("------------------\n");
	stp = 1;

	do
	{
		printf("Set the path length (a multiple of %d between %d-%d): ", MULTIPLE, MIN_PATHLENGTH, MAX_PATHLENGTH);

		scanf(" %d", &game_configuration.path_length);

		if (game_configuration.path_length > MIN_PATHLENGTH || game_configuration.path_length < MAX_PATHLENGTH)
		{
			if (game_configuration.path_length % MULTIPLE == 0){
				stp = 0;
			}
			else{
				printf("     Must be a multiple of %d and between %d-%d!!!\n", MULTIPLE, MIN_PATHLENGTH, MAX_PATHLENGTH);
			}
		}
		else{
			printf("     Must be a multiple of %d and between %d-%d!!!\n", MULTIPLE, MIN_PATHLENGTH, MAX_PATHLENGTH);
		}
	} 
	while (stp);

	stp = 1;

	maxium_moves = (game_configuration.path_length * 75) / 100;

	    	while (stp)
	{
		printf("Set the limit for number of moves allowed: ");

		scanf(" %d", &game_configuration.Moves);

		if (game_configuration.Moves <= maxium_moves)
		{
			if (game_configuration.Moves < player_configuration.lifes)
			{

				printf("    Value must be between %d and %d\n", player_configuration.lifes, maxium_moves);
			}
			else
			{
				stp = 0;
			}
		}
		else
		{
			printf("    Value must be between %d and %d\n", player_configuration.lifes, maxium_moves);
		}
	} 


	printf("\nBOMB Placement\n"

	"--------------\n"

	"Enter the bomb positions in sets of 5 where a value\n"

	"of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n"

	"(Example: 1 0 0 1 1) NOTE: there are 35 to set!\n");

	int S;
	for (k = 0; k < game_configuration.path_length; k += 5)
	{
		printf("   Positions [%2d-%2d]: ", k + 1, k + 5);

		for (S = k; S < limitcheck; S++)
		{
			scanf("%d", &game_configuration.BOMBS[S]);
		}
		limitcheck += 5;
	}

	printf("BOMB placement set\n"


	"\nTREASURE Placement\n"

	"------------------\n"

	"Enter the treasure placements in sets of 5 where a value\n"

	"of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n"

	"(Example: 1 0 0 1 1) NOTE: there are 35 to set!\n");

	limitcheck = 5;

	for (k = 0; k < game_configuration.path_length; k += 5)

	{
		printf("   Positions [%2d-%2d]: ", k + 1, k + 5);

		for (S = k; S < limitcheck; S++)
		{
			scanf("%d", &game_configuration.treaSURE[S]);
		}
		limitcheck += 5;
	}

	printf("TREASURE placement set\n");


	printf("\nGAME configuration set-up is complete...\n");

	printf("\n------------------------------------\n");

	printf("TREASURE HUNT Configuration Settings\n");

	printf("------------------------------------\n");

	printf("Player:\n");

	printf("   Symbol     : %c\n", player_configuration.Chacter);

	printf("   Lives      : %d\n", player_configuration.lifes);

	printf("   Treasure   : [ready for gameplay]\n");

	printf("   History    : [ready for gameplay]\n");

	printf("\nGame:\n");

	printf("   Path Length: %d\n", game_configuration.path_length);

	printf("   Bombs      : ");

	for (k = 0; k < game_configuration.path_length; k++){
		printf("%d", game_configuration.BOMBS[k]);

	}
	printf("\n");
	printf("   Treasure   : ");
	for (k = 0; k < game_configuration.path_length; k++){

		printf("%d", game_configuration.treaSURE[k]);
	}

	printf("\n\n====================================\n");

	printf("~ Get ready to play TREASURE HUNT! ~\n");

	printf("====================================\n");

	return 0;
}