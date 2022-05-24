#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MIN_lIVES 1
#define MAX_LIVES 10
#define MIN_PATH_LENGTH 10
#define MAX_PATH_LENGTH 70
#define MULTIPLE 5




struct GameInfo {  //declaring structure GameInfo
	int moves;
	int path_length;
	char bombs[MAX_PATH_LENGTH];
	char treasures[MAX_PATH_LENGTH];
};



struct PlayerInfo {   //declaring structure PlayerInfo
	int lives;
	char char_symbol;
	int number_treasures;
	char history[MAX_PATH_LENGTH];
};


int main(void)


{
	printf("================================\n");

	printf("         Treasure Hunt!\n");

	printf("================================\n");

	printf("\n");

	struct PlayerInfo player;

	player.number_treasures = 0;

	struct GameInfo game;

	printf("PLAYER Configuration\n");

	printf("--------------------\n");

	printf("Enter a single character to represent the player: ");

	scanf(" %c", &player.char_symbol);

	int err_nol = 1;

	while (err_nol)

	{


		printf("Set the number of lives: ");

		scanf("%d", &player.lives);

		err_nol = player.lives<MIN_lIVES || player.lives>MAX_LIVES;

		if (err_nol)

		{
			printf("     Must be between 1 and 10!\n");
		}

	}

	printf("Player configuration set-up is complete\n");

	printf("\n");

	printf("GAME Configuration\n");

	printf("------------------\n");

	int err_pl = 1, err_m = 1;


	while (err_pl)

	{

		printf("Set the path length (a multiple of 5 between 10-70): ");

		scanf("%d", &game.path_length);

		err_pl = game.path_length % MULTIPLE != 0 || game.path_length<MIN_PATH_LENGTH || game.path_length>MAX_PATH_LENGTH;

		if (err_pl) //Using conditional Statement

		{

			printf("     Must be a multiple of 5 and between 10-70!!!\n");

		}

	}

	int MIN_MOVES = player.lives;

	int MAX_MOVES;

	MAX_MOVES = 0.75 * game.path_length;

	while (err_m)

	{

		printf("Set the limit for number of moves allowed: ");

		scanf("%d", &game.moves);





		err_m = game.moves<MIN_MOVES || game.moves>MAX_MOVES;

		if (err_m)//Using conditional Statement

		{

			printf("    Value must be between %d and %d\n", MIN_MOVES,

				MAX_MOVES);


		}

	}

	printf("\n");

	printf("BOMB Placement\n");

	printf("--------------\n");


	printf("Enter the bomb positions in sets of 5 where a value\n");

	printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");

	printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n",	game.path_length);

	int j, p;

	for (j = 0; j < game.path_length; j += MULTIPLE)//using for loop

	{


		printf("   Positions [%2d-%2d]: ", j + 1, j + MULTIPLE);

		for (p = 0; p < MULTIPLE; p++)//using for loop

		{


			scanf(" %c", &game.bombs[j + p]);

		}

	}

	printf("BOMB placement set\n");

	printf("\n");

	printf("TREASURE Placement\n");

	printf("------------------\n");

	printf("Enter the treasure placements in sets of 5 where a value\n");

	printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");

	printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n",	game.path_length);

	for (j = 0; j < game.path_length; j += MULTIPLE)//using for loop

	{

		printf("   Positions [%2d-%2d]: ", j + 1, j + MULTIPLE);

		for (p = 0; p < MULTIPLE; p++)//using for loop

		{
			scanf(" %c", &game.treasures[j + p]);

		}

	}


	printf("TREASURE placement set\n");

	printf("\n");

	printf("GAME configuration set-up is complete...\n");

	printf("\n");

	printf("------------------------------------\n");

	printf("TREASURE HUNT Configuration Settings\n");

	printf("------------------------------------\n");
	printf("Player:\n");

	printf("   Symbol     : %c\n", player.char_symbol);

	printf("   Lives      : %d\n", player.lives);

	printf("   Treasure   : [ready for gameplay]\n");

	printf("   History    : [ready for gameplay]\n");

	printf("\n");
	printf("Game:\n");

	printf("   Path Length: %d\n", game.path_length);

	printf("   Bombs      : ");

	for (j = 0; j < game.path_length; j++) //using for loop
	{

		printf("%c", game.bombs[j]);

	}

	printf("\n");

	printf("   Treasure   : ");

	for (j = 0; j < game.path_length; j++)//using for loop

	{

		printf("%c", game.treasures[j]);

	}

	printf("\n");

	printf("\n");

	for (p = 0; p< game.path_length; p++)//using for loop

	{

		player.history[p] = '-';

	}

	printf("====================================\n");

	printf("~ Get ready to play TREASURE HUNT! ~\n");

	printf("====================================\n");

	printf("\n");

        printf(" ");

	int x = 0, nextmove = 1, h;

	int i,m;
	do

	{
		h = 1;

		if (x == 0);//Using conditional Statement

		else if (x == 1) {//Using conditional Statement

			
                        

			printf(" %c", player.char_symbol);

			for (i = x; i < game.path_length; i++)//using for loop

			{

				printf(" ");
                break ;
			}

			printf("\n");

                        printf(" ");

		}

		else {//Using conditional Statement

			printf(" ");



			for (i = 1; i < x; i++)//using for loop

			{

				printf(" ");

			}

                        printf(" ");

			printf("%c", player.char_symbol);

			for (i = x; i < game.path_length; i++)//using for loop

			{

                                printf(" ");



			}

			printf("\n");

                        printf(" ");

		}

		printf(" ");

		for (i = 0; i < game.path_length; i++)//using for loop

		{

                        printf("%c", player.history[i]);

		}

		printf("\n");

		printf("  ");



		for (m = 0; m < game.path_length; m += 10)//using for loop

		{

			printf("|||||||||%d", h);

			h++;

		}

		printf("\n");

		printf("  ");



		for (i = 0; i < game.path_length; i += 10)//using for loop

		{

			printf("1234567890");

		}

		printf("\n");

		printf("+---------------------------------------------------+\n");

		printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n",

			player.lives, player.number_treasures, game.moves);

		printf("+---------------------------------------------------+\n");

		do

		{

			printf("Next Move [1-%d]: ", game.path_length);

			scanf("%d", &x);

			nextmove = x < 1 || x > game.path_length;

			if (nextmove)//Using conditional Statement

				printf("  Out of Range!!!\n");

		} while (nextmove);

		printf("\n");

		if ((player.history[x - 1] == '.') || (player.history[x - 1] ==

			'&')//Using conditional Statement

			|| (player.history[x - 1] == '$') || (player.history[x - 1]

				== '!'))//Using conditional Statement

		{

			printf("===============> Dope! You've been here before!\n");//Using conditional Statement

		}

		else if ((game.bombs[x - 1] == '1') && (game.treasures[x - 1] ==

			'1')) {//Using conditional Statement

			printf("===============> [&] !!! BOOOOOM !!! [&]\n");

			printf("===============> [&] $$$ Life Insurance Payout!!! [&]\n");

			player.lives--;

			game.moves--;

			player.number_treasures++;

			player.history[x - 1] = '&';

		}

		else if (game.bombs[x - 1] == '1') {//Using conditional Statement

			printf("===============> [!] !!! BOOOOOM !!! [!]\n");

			player.lives--;



			game.moves--;

			player.history[x - 1] = '!';

		}

		else if (game.treasures[x - 1] == '1') {//Using conditional Statement

			printf("===============> [$] $$$ Found Treasure! $$$ [$]\n");

			game.moves--;

			player.number_treasures++;

			player.history[x - 1] = '$';

		}

		else {//Using conditional Statement

			printf("===============> [.] ...Nothing found here... [.]\n");

			game.moves--;

			player.history[x - 1] = '.';

		}

		printf("\n");

		if (game.moves == 0)printf("No more MOVES remaining!\n\n");//Using conditional Statement

		if (player.lives == 0)printf("No more LIVES remaining!\n\n");//Using conditional Statement

	} while ((player.lives != 0) && (game.moves != 0));

	h = 1;

	if (x == 0);//Using conditional Statement

	else if (x == 1) {//Using conditional Statement

		printf(" ");

		printf("%c", player.char_symbol);

		for (i = x; i < game.path_length; i++)//using for loop

		{

			printf(" ");

		}

		printf("\n");

	}

	else {//Using conditional Statement

		printf(" ");

		for (i = 1; i < x; i++)//using for loop

		{

			printf(" ");

		}

                printf(" ");

		printf("%c", player.char_symbol);

		for (i = x; i < game.path_length; i++)//using for loop

		{

			printf(" ");

		}

		printf("\n");

                printf(" ");

	}

	printf(" ");


	for (i = 0; i < game.path_length; i++)//using for loop

	{

		printf("%c", player.history[i]);

	}

	printf("\n");

	printf("  ");

	for (m = 0; m < game.path_length; m += 10)//using for loop

	{

		printf("|||||||||%d", h);

		h++;

	}

	printf("\n");

	printf("  ");

	for (i = 0; i < game.path_length; i += 10)//using for loop

	{

		printf("1234567890");

	}

	printf("\n");

	printf("+---------------------------------------------------+\n");

	printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n",

		player.lives, player.number_treasures, game.moves);

	printf("+---------------------------------------------------+\n");

	printf("\n");

	printf("##################\n");

	printf("#   Game over!   #\n");

	printf("##################\n");

	printf("\n");

	printf("You should play again and try to beat your score!\n");

	return 0;



}