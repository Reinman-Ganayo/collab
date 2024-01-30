/*
Description: This program simulates a modified snakes-and-ladders game.
Author: Reinman Geoffrey A. Ganayo – S21A
Acknowledgements: 
https://iq.opengenus.org/print-text-in-color-in-c/#:~:text=In%20C%2C%20you%20can%20use,for%20setting%20the%20text%20color.&text=%5C033%5B1%3B0m%20is,the%20color%20back%20to%20normal. (Colored Texts and Terminals)
https://www.asciiart.eu/text-to-ascii-art (Ascii arts for welcome, rules, and thankyou screen)
https://www.youtube.com/watch?v=vJqeDr6dBSs (For srand as a psuedo-random seed generator to the dice roll)
https://www.scaler.com/topics/sleep-function-c/ (For sleep function)
*/



#include <stdio.h> // for stdio.h things (printf, scanf, etc.)
#include <stdlib.h> // for dice randomizer
#include <time.h> // for psuedo-random seed for dice
#include <unistd.h> // for sleep function


/*
Function: welcome
Description: Prints the welcome screen of the program.
*/

void welcome()
{system("COLOR E"); 
printf("\n");
printf("\t\t\t |   |                                                                   |   | \n");
printf("\t\t\t |   |    dP     dP                                               dP     |   | \n");
printf("\t\t\t |   |    88     88                                               88     |   | \n");
printf("\t\t\t |   |    88     88  88d888b. .d8888b.    .d8888b. 88d888b. .d888b88     |   | \n");
printf("\t\t\t |   |    88     88  88'  `88 Y8ooooo.    88'  `88 88'  `88 88'  `88     |   | \n");
printf("\t\t\t |   |    Y8.   .8P  88.  .88       88    88.  .88 88    88 88.  .88     |   | \n");
printf("\t\t\t |   |    `Y88888P'  88Y888P' `88888P'    `88888P8 dP    dP `88888P8     |   | \n");
printf("\t\t\t |   |    oooooooooo~88~ooooooooooooooooooooooooooooooooooooooooooooo    |   | \n");
printf("\t\t\t |   |               dP                                                  |   | \n");
printf("\t\t\t |   |    888888ba                                                       |   | \n");
printf("\t\t\t |   |    88    `8b                                                      |   | \n");
printf("\t\t\t |   |    88     88 .d8888b. dP  dP  dP 88d888b. .d8888b.                |   | \n");
printf("\t\t\t |   |    88     88 88'  `88 88  88  88 88'  `88 Y8ooooo.                |   | \n");
printf("\t\t\t |   |    88    .8P 88.  .88 88.88b.88' 88    88       88                |   | \n");
printf("\t\t\t |   |    8888888P  `88888P' 8888P Y8P  dP    dP `88888P'                |   | \n");
printf("\t\t\t |   |    oooooooooooooooooooooooooooooooooooooooooooooooooooooo         |   | \n\n\n\n");


	printf("\t\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t\t\t\t  ~~\t Machine Project for CCPROG 1 \t~~\n");
	printf("\t\t\t\t\t  ~~\t Submitted by: Reinman Ganayo   ~~\n");
	printf("\t\t\t\t\t  ~~\t Instructor:   Sir Lief    \t~~\n");
	printf("\t\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n");
}

/*
Function: menu
Description: Prints the menu of the program.
*/

void menu ()
{ system("COLOR E"); 

printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
printf("/////////////***************************************** MAIN MENU ****************************************/////////////\n");
printf("/////////////                                                                                            /////////////\n");
printf("/////////////                             Pick your desired gamemode                                     /////////////\n");
printf("/////////////              [0] Rules                                                                     /////////////\n");
printf("/////////////                                                                                            /////////////\n");
printf("/////////////              [1] Play Player v Player                                                      /////////////\n");
printf("/////////////                                                                                            /////////////\n");
printf("/////////////              [2] Play Player v Computer                                                    /////////////\n");
printf("/////////////                                                                                            /////////////\n");
printf("/////////////              [3] Play Plaver v Player (DEV MODE)                                           /////////////\n");
printf("/////////////                                                                                            /////////////\n");
printf("/////////////              [4] Exit The Game                                                             /////////////\n");
printf("/////////////                                                                                            /////////////\n");
printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
printf("//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
}

/*
Function: rules
Description: Prints the rules of the game.
*/

void rules (){
	printf("\033[0;33m\n");
	printf("    ____        __         \n");
	printf("   / __ \\__  __/ /__  _____\n");
	printf("  / /_/ / / / / / _ \\/ ___/\n");
	printf(" / _, _/ /_/ / /  __(__  ) \n");
	printf("/_/ |_|\\__,_/_/\\___/____/  \n");
	printf("                           \n\n");
	printf("\033[0m");
	printf("1. Before the start of each game, Players must choose a pair of numbers that will be Down Tiles\n");
	printf("Note: Players must not choose a downtile in the first Row (0-9), on the 99th Tile, and on the Same Row \n");
	printf("(In the Player v Computer gamemode, the player also chooses the DOWN tiles of the computer)\n");
	printf("2. Your goal is to reach the 99th tile represnted by the symbol \n");
	printf("3. During each turn, players roll a 0-6 die and moves equivalent to the Rolled die\n");
	printf("Note: That if a player consequtively rolls 1s, then they are granted another roll \n");
	printf("4. Along the way there are randomly generated action tiles which are DOWN and UP Tiles, in which they are teleported to their other pair\n");
	printf("Note: If a player steps on the highest valued UP Tile or lowest valued DOWN tile then they are not teleported to their corresponding pair\n");
	printf("5. If a player is close to the 99th Tile then rolls a number that makes them go past 99 then they move back equal to over value\n");
	printf("Ex. Player is in 97 then rolls a 4, then Player back to 97 (because 2 is the over value)\n");
	printf("6. Have fun!!!\n");
	printf("Type any number to go back to the main menu.\n");
	
}
/*
Function: thankYouScreen
Description: Prints the thankYouScreen of the program.
*/

void thankYouScreen () {
printf("\t\t\t  _____ _                 _           __            \n");
printf("\t\t\t |_   _| |__   __ _ _ __ | | _____   / _| ___  _ __ \n");
printf("\t\t\t   | | | '_ \\ / _` | '_ \\| |/ / __| | |_ / _ \\| '__|\n");
printf("\t\t\t   | | | | | | (_| | | | |   <\\__ \\ |  _| (_) | |   \n");
printf("\t\t\t  _|_| |_| |_|\\__,_|_|_|_|_|\\_\\___/ |_| _\\___/|_|   \n");
printf("\t\t\t |  _ \\| | __ _ _   _(_)_ __   __ _  | | | |        \n");
printf("\t\t\t | |_) | |/ _` | | | | | '_ \\ / _` | | | | |        \n");
printf("\t\t\t |  __/| | (_| | |_| | | | | | (_| | |_|_|_|        \n");
printf("\t\t\t |_|   |_|\\__,_|\\__, |_|_| |_|\\__, | (_|_|_)        \n");
printf("\t\t\t                |___/         |___/                 \n");
}

/*
Function: loadingScreen
Description: Simulates a loading screen.
*/

void loadingScreen() {
    int i;
    printf("Loading");
    for (i = 0; i <= 4; i++){	
	sleep(1);	// makes the program pause / sleep for 1 second.
    printf(".");
    }
}

/*
Function: computerRolling
Description: Simulates a computer rolling.
*/

void computerRolling() {
    int i;
    printf("CPU is trying to Roll ");
    for (i = 0; i <= 2; i++){	
	sleep(1);	// makes the program pause / sleep for 1 second.
    printf(".");
    }
}

/*
Function: nRollDice
Description: A function that acts as a dice.
@return: a random number from 0-6.
*/

int nRollDice() {
    return rand() % 7;
}

/*
Function: cls
Description: Clears the terminal.
*/

void cls() {
    system("cls");
}

/*
Function: swap
Description: Swaps the values of two integers.
@param: *nVal1 - pointer to the first integer value
@param: *nVal2 - pointer to the second integer value
@return: void
*/

void swap(int* nVal1, int* nVal2) {
	int temp;
    temp = *nVal1;
    *nVal1 = *nVal2;
    *nVal2 = temp;
}

/*
Function: sorter
Description: Calls the swap function if nVal1 is greater than nVal2.
@param: *nVal1 - pointer to the first integer value
@param: *nVal2 - pointer to the second integer value
@return: void
*/

void sorter(int* nVal1, int* nVal2) {

    if (*nVal1 > *nVal2) {
        swap(nVal1, nVal2);
    }
}

/*
Function: checkTiles
Description: A function that generates unique randomly generated tiles.
@param: *nUpTile1Start - randomly generated number from 1-98
@param: *nUpTile1End - randomly generated number from 1-98
@param: *nUpTile2Start - randomly generated number from 1-98
@param: *nUpTile2End- randomly generated number from 1-98
@param: *nUpTile3Start - randomly generated number from 1-98
@param: *nUpTile3End - randomly generated number from 1-98
@param: *nDownTile3End - randomly generated number from 1-98
@param: *nDownTile3Start - randomly generated number from 1-98
@return: void
*/

void generateTiles (int* nUpTile1Start, int* nUpTile1End, int* nUpTile2Start, int* nUpTile2End, int* nUpTile3Start, int* nUpTile3End,
int* nDownTile1End, int* nDownTile1Start, int* nDownTile2End, int* nDownTile2Start, int* nDownTile3End, int* nDownTile3Start)
{
do { 
    *nUpTile1Start = (rand() % 98) + 1; 
    *nUpTile1End = (rand() % 98) + 1;
    *nUpTile2Start = (rand() % 98) + 1;
    *nUpTile2End = (rand() % 98) + 1;
    *nUpTile3Start = (rand() % 98) + 1;
    *nUpTile3End = (rand() % 98) + 1;
    *nDownTile3End = (rand() % 98) + 1;
    *nDownTile3Start = (rand() % 98) + 1;
    
// Continues to generated random numbers 1-98 to assign to each tile until all numbers assigned are not equal to each other.

} while (*nUpTile1Start == *nUpTile1End || *nUpTile1Start == *nUpTile2Start || *nUpTile1Start == *nUpTile2End || *nUpTile1Start == *nUpTile3Start || *nUpTile1Start == *nUpTile3End || *nUpTile1Start == *nDownTile3Start || *nUpTile1Start == *nDownTile3End ||
 		 *nUpTile1End == *nUpTile2Start || *nUpTile1End == *nUpTile2End || *nUpTile1End == *nUpTile3Start || *nUpTile1End == *nUpTile3End || *nUpTile1End == *nDownTile3Start || *nUpTile1End == *nDownTile3End ||
		 *nUpTile2Start == *nUpTile2End || *nUpTile2Start == *nUpTile3Start || *nUpTile2Start == *nUpTile3End || *nUpTile2Start == *nDownTile3Start || *nUpTile2Start == *nDownTile3End ||
 		 *nUpTile2End == *nUpTile3Start || *nUpTile2End == *nUpTile3End || *nUpTile2End == *nDownTile3Start || *nUpTile2End == *nDownTile3End ||
 		 *nUpTile3Start == *nUpTile3End || *nUpTile3Start == *nDownTile3Start ||
		 *nUpTile3End == *nDownTile3Start || *nDownTile3End == *nDownTile3Start);
	}   

/*
Function: checkEqual
Description: Checks for equality among 6 integer values.
@param: nVal1 - first integer value
@param: nVal2 - second integer value
@param: nVal3 - third integer value
@param: nVal4 - fourth integer value
@param: nVal5 - fifth integer value
@param: nVal6 - sixth integer value
@return: 1 if any of the values are equal, otherwise returns 0
*/

int checkEqual(int nVal1, int nVal2, int nVal3, int nVal4, int nVal5, int nVal6) {	
    if( nVal1 == nVal2 || nVal1 == nVal3 || nVal1 == nVal4 || nVal1 == nVal5 || nVal1 == nVal6 ||
    	nVal2 == nVal3 || nVal2 == nVal4 || nVal2 == nVal5 || nVal2 == nVal6 ||
    	nVal3 == nVal4 || nVal3 == nVal5 || nVal3 == nVal6 ||
		nVal4 == nVal5 || nVal4 == nVal6 ||
		nVal5 == nVal6)
        return 1;
    else 
        return 0; // If no equal values are found, return 0
    
}

/*
Function: checkPlayerTileInput
Description: Gets and validates player input for selecting down tiles and their destinations.
Precondition: parameters are not less than 10, greater than 98 and are not in the same row.
@param: nDownTile1Start - pointer to player 1's chosen starting value of down tile 
@param: nDownTile1End - pointer to player 1's chosen ending value of down tile 
@param: nDownTile2Start - pointer to player 2's chosen starting value of down tile 
@param: nDownTile2End - pointer to player 2's chosen ending value of down tile 
@return: void
*/

void checkPlayerTileInput(int* nDownTile1Start, int* nDownTile1End, int* nDownTile2Start, int* nDownTile2End) {
    int nValidInputP1 = 0;
    int nValidInputP2 = 0;
    while (nValidInputP1 == 0) {
        printf("Player 1 - Pick 2 Places for the DownTiles: ");
        scanf("%d %d", nDownTile1Start, nDownTile1End);
        

        if (*nDownTile1Start >= 99 || *nDownTile1End >= 99 ||  // Check if values are within the valid range.
            *nDownTile1Start < 10 || *nDownTile1End < 10 ||
			
			*nDownTile1Start / 10 == *nDownTile1End / 10) { // Check if values are in the same row
            printf("Invalid Input by Player 1! Try again.\n");
        } else {
            nValidInputP1 = 1; // If input is valid, set validInput flag to exit the loop
        }
    }
    
     while (nValidInputP2 == 0) {
        
        printf("Player 2 - Pick 2 Places for the DownTiles: ");
        scanf("%d %d", nDownTile2Start, nDownTile2End);

        if (*nDownTile1Start == *nDownTile1End || *nDownTile1Start == *nDownTile2Start || *nDownTile1Start == *nDownTile2End ||
            *nDownTile1End == *nDownTile2Start || *nDownTile1End == *nDownTile2End ||
            *nDownTile2Start == *nDownTile2End || // Check if any tiles are equal to each other.
            
            *nDownTile1Start / 10 == *nDownTile1End / 10 || *nDownTile1Start / 10 == *nDownTile2Start / 10 || *nDownTile1Start / 10 == *nDownTile2End / 10 ||  // Check if values are in the same row
            *nDownTile1End / 10 == *nDownTile2Start / 10 || *nDownTile1End / 10  == *nDownTile2End ||
            *nDownTile2Start / 10 == *nDownTile2End / 10 ||
            
            *nDownTile2Start >= 99 || *nDownTile2End >= 99 || // Check if values are within the valid range.
            *nDownTile2Start < 10 || *nDownTile2End < 10) { 
            printf("Invalid Input by Player 2! Try again.\n");
        } else {
            nValidInputP2 = 1; // If input is valid, set validInput flag to exit the loop
        }
    }
}

/*
Function: checkTiles
Description: Validates various tiles' configurations, including player inputs for down tiles and their destinations.
@param: nUpTile1Start - pointer to the starting value of up tile 1
@param: nUpTile1End - pointer to the ending value of up tile 1
@param: nUpTile2Start - pointer to the starting value of up tile 2
@param: nUpTile2End - pointer to the ending value of up tile 2
@param: nUpTile3Start - pointer to the starting value of up tile 3
@param: nUpTile3End - pointer to the ending value of up tile 3
@param: nDownTile1End - pointer to the ending value of down tile 1
@param: nDownTile1Start - pointer to the starting value of down tile 1
@param: nDownTile2End - pointer to the ending value of down tile 2
@param: nDownTile2Start - pointer to the starting value of down tile 2
@param: nDownTile3End - pointer to the ending value of down tile 3
@param: nDownTile3Start - pointer to the starting value of down tile 3
@return: void
*/


void checkTiles(int* nUpTile1Start, int* nUpTile1End, int* nUpTile2Start, int* nUpTile2End, int* nUpTile3Start, int* nUpTile3End,
                int* nDownTile1End, int* nDownTile1Start, int* nDownTile2End, int* nDownTile2Start, int* nDownTile3End, int* nDownTile3Start) 
{
    int nUpTileRowCheck , nDownTileRowCheck;
    int numUA1, numUA2, numUB1, numUB2, numUC1, numUC2; 
    int numDA1, numDA2, numDB1, numDB2, numDC1, numDC2; 
    int nIsDownTileHighest = 0;
    
    checkPlayerTileInput(nDownTile1Start, nDownTile1End, nDownTile2Start,nDownTile2End);
    cls();

    do { // This Loop checks if there are 2 or more Up / Down Tiles in the same row.
        generateTiles(nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End,
                      nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
        
        // Gets the row number of each tile ex. (Tile) 12 = (Row) 2.
        numUA1 = (*nUpTile1Start + 10) / 10;  
        numUA2 = (*nUpTile1End + 10) / 10;
        numUB1 = (*nUpTile2Start + 10) / 10;
        numUB2 = (*nUpTile2End + 10) / 10;
        numUC1 = (*nUpTile3Start + 10) / 10;
        numUC2 = (*nUpTile3End + 10) / 10;
        
        numDA1 = (*nDownTile1End + 10) / 10; 
        numDA2 = (*nDownTile1Start + 10) / 10;
        numDB1 = (*nDownTile2End + 10) / 10;
        numDB2 = (*nDownTile2Start + 10) / 10;
        numDC1 = (*nDownTile3End + 10) / 10;
        numDC2 = (*nDownTile3Start + 10) / 10;

        nUpTileRowCheck = checkEqual(numUA1, numUA2, numUB1, numUB2, numUC1, numUC2);
        nDownTileRowCheck = checkEqual(numDA1, numDA2, numDB1, numDB2, numDC1, numDC2);

        // If one of the players assigns 98 as one of the down tiles then it does not check to ensure a down tile is the last tile.
		
        if (*nDownTile1Start == 98 || *nDownTile1End == 98 || *nDownTile2Start == 98 || *nDownTile2End == 98) {
            nIsDownTileHighest = 0;
        } 
		else {
            if (*nDownTile3Start < *nUpTile1Start || *nDownTile3Start < *nUpTile1End || *nDownTile3Start < *nUpTile2Start || 
				*nDownTile3Start < *nUpTile2End || *nDownTile3Start < *nUpTile3Start ||
                *nDownTile3Start < *nUpTile3End || *nDownTile3Start < *nDownTile1Start) {
                nIsDownTileHighest = 1;
            } 
			else {
                nIsDownTileHighest = 0;
            } 
            
        }
        
    } while (nUpTileRowCheck == 1 || nDownTileRowCheck == 1 || nIsDownTileHighest == 1);

	// Sorts the Tiles from highest to lowest corresponding to whether they are Up or Down tiles.
    sorter(nUpTile1Start, nUpTile1End);
    sorter(nUpTile2Start, nUpTile2End);
    sorter(nUpTile3Start, nUpTile3End);
    sorter(nDownTile1End, nDownTile1Start);
    sorter(nDownTile2End, nDownTile2Start);
    sorter(nDownTile3End, nDownTile3Start);
}

/*
Function: border
Description: Prints out a border for the board.
*/

void border () {
	int j;
    	  for (j = 0; j < 10; j++) {
        printf("+-----");
    }
			printf("+\n");

}

/*
Function: Board
Description: Prints the a board from 0 - 99. It prints symbols corresponding to the generated ActionTiles and Players.
@param: nPlayer1Pos - Player 1's position on the board
@param: nPlayer2Pos - Player 2's position on the board
@param: nUpTile1Start - pointer to the starting value of up tile 1
@param: nUpTile1End - pointer to the ending value of up tile 1
@param: nUpTile2Start - pointer to the starting value of up tile 2
@param: nUpTile2End - pointer to the ending value of up tile 2
@param: nUpTile3Start - pointer to the starting value of up tile 3
@param: nUpTile3End - pointer to the ending value of up tile 3
@param: nDownTile1End - pointer to the ending value of down tile 1
@param: nDownTile1Start - pointer to the starting value of down tile 1
@param: nDownTile2End - pointer to the ending value of down tile 2
@param: nDownTile2Start - pointer to the starting value of down tile 2
@param: nDownTile3End - pointer to the ending value of down tile 3
@param: nDownTile3Start - pointer to the starting value of down tile 3
@return: void
*/

void Board(int nPlayer1Pos, int nPlayer2Pos, 
           int *nUpTile1Start, int *nUpTile1End, int *nUpTile2Start, int *nUpTile2End, int *nUpTile3Start, int *nUpTile3End, 
           int *nDownTile1Start, int *nDownTile1End, int *nDownTile2Start, int *nDownTile2End, int *nDownTile3Start, int *nDownTile3End) {
 
	system("COLOR F"); 
   	int numRows = 10;
    int rowVal;
    int colVal;
    
   int nGridNumber = 99;
    for(rowVal = numRows; rowVal >= 1; rowVal--) {
        
        border ();
 
        for(colVal = numRows; colVal >= 1; colVal--) {
            
            printf("|");
            
            if(rowVal % 2 == 1) {
                // Logic for Odd row
                if ((nGridNumber == nPlayer1Pos) && (nGridNumber == nPlayer2Pos)) 
                    printf("\033[1;35m  @  \033[1;0m", nGridNumber);
                else if (nGridNumber == nPlayer1Pos) 
                    printf("\033[1;33m  $  \033[1;0m"); 
                else if (nGridNumber == nPlayer2Pos) 
                    printf("\033[1;34m  #  \033[1;0m");
                else if (nGridNumber == *nUpTile1Start || nGridNumber == *nUpTile1End) 
                    printf("\033[1;32m  %c  \033[1;0m", 142); 
                else if (nGridNumber == *nUpTile2Start || nGridNumber == *nUpTile2End) 
                    printf("\033[1;32m  %c  \033[1;0m", 225); 
                else if (nGridNumber == *nUpTile3Start || nGridNumber == *nUpTile3End) 
                    printf("\033[1;32m  %c  \033[1;0m", 128); 
                else if (nGridNumber == *nDownTile1Start || nGridNumber == *nDownTile1End) 
                    printf("\033[1;31m  %c  \033[1;0m", 168); 
                else if (nGridNumber == *nDownTile2Start || nGridNumber == *nDownTile2End) 
                    printf("\033[1;31m  %c  \033[1;0m", 246); 
                else if (nGridNumber == *nDownTile3Start || nGridNumber == *nDownTile3End) 
                    printf("\033[1;31m  %c  \033[1;0m", 190); 
                else 
                    printf("\033[1;36m  %c  \033[1;0m", 178);
                
                nGridNumber++; // Ex. Row 9 = Last print number = 89 but update of nGridNumber is 90
            } 
            
            else {
                // Logic for Even row
                
                if ((nGridNumber == nPlayer1Pos) && (nGridNumber == nPlayer2Pos)) 
                    printf("\033[1;35m  @  \033[1;0m", nGridNumber);
                else if (nGridNumber == nPlayer1Pos) 
                    printf("\033[1;33m  $  \033[1;0m"); 
                else if (nGridNumber == nPlayer2Pos) 
                    printf("\033[1;34m  #  \033[1;0m");
                else if (nGridNumber == 99) 
                    printf("\033[1;32m  %c  \033[1;0m", 219); 
                else if (nGridNumber == *nUpTile1Start || nGridNumber == *nUpTile1End) 
                    printf("\033[1;32m  %c  \033[1;0m", 142); 
                else if (nGridNumber == *nUpTile2Start || nGridNumber == *nUpTile2End) 
                    printf("\033[1;32m  %c  \033[1;0m", 225); 
                else if (nGridNumber == *nUpTile3Start || nGridNumber == *nUpTile3End) 
                    printf("\033[1;32m  %c  \033[1;0m", 128); 
                else if (nGridNumber == *nDownTile1Start || nGridNumber == *nDownTile1End) 
                    printf("\033[1;31m  %c  \033[1;0m", 168); 
                else if (nGridNumber == *nDownTile2Start || nGridNumber == *nDownTile2End) 
                    printf("\033[1;31m  %c  \033[1;0m", 246); 
                else if (nGridNumber == *nDownTile3Start || nGridNumber == *nDownTile3End) 
                    printf("\033[1;31m  %c  \033[1;0m", 190); 
                else 
                    printf("\033[1;36m  %c  \033[1;0m", 178);
                
                nGridNumber--; // Ex. Row 10 = Last print number = 90 but update of nGridNumber is 89
            }
        }
        
        if(rowVal % 2 == 1) 
            // Logic for Odd row
            nGridNumber -= numRows + 1;  // Following the logic above since nGridNumber is 90 then (90 - 11) = 79 (Prints 79 to 70 using Even Logic Above)
        else 
            // Logic for Even row
            nGridNumber -= numRows - 1; // Following the logic above since nGridNumber is 89 then (89 - 9) = 80 (Prints 80 to 89 using Even Odd Above)
            
        printf("|");
        printf("\n");
    }
    
    border ();
    printf("/////////////////////////////////////////////////////////////\n");
    printf("(Player 1: \033[1;33m$\033[1;0m | Player 2: \033[1;34m#\033[1;0m | Same tile: \033[1;35m@\033[1;0m)\n");
    printf("(Player 1: Tile %d | Player 2: Tile %d)\n", nPlayer1Pos, nPlayer2Pos);
    printf("/////////////////////////////////////////////////////////////\n");
}

/*
Function: checkActionTiles
Description: Checks if the player steps on action tiles (up or down tiles) and updates the player's position accordingly.
@param: nPlayer - Player identifier
@param: nPlayerPos - pointer to the player's position on the board
@param: nUpTile1Start - pointer to the starting value of up tile 1
@param: nUpTile1End - pointer to the ending value of up tile 1
@param: nUpTile2Start - pointer to the starting value of up tile 2
@param: nUpTile2End - pointer to the ending value of up tile 2
@param: nUpTile3Start - pointer to the starting value of up tile 3
@param: nUpTile3End - pointer to the ending value of up tile 3
@param: nDownTile1End - pointer to the ending value of down tile 1
@param: nDownTile1Start - pointer to the starting value of down tile 1
@param: nDownTile2End - pointer to the ending value of down tile 2
@param: nDownTile2Start - pointer to the starting value of down tile 2
@param: nDownTile3End - pointer to the ending value of down tile 3
@param: nDownTile3Start - pointer to the starting value of down tile 3
@return: void
*/

void checkActionTiles(int nPlayer, int* nPlayerPos,  int* nUpTile1Start, int* nUpTile1End, int* nUpTile2Start, int* nUpTile2End,  int* nUpTile3Start, 
					int* nUpTile3End, int* nDownTile1End, int* nDownTile1Start, int* nDownTile2End, int* nDownTile2Start,  int* nDownTile3End, int* nDownTile3Start) {
    if (*nPlayerPos == *nUpTile1Start) {
        *nPlayerPos = *nUpTile1End;
        printf("Player %d Stepped on an Up Tile\n", nPlayer);
    } else if (*nPlayerPos == *nUpTile2Start) {
        *nPlayerPos = *nUpTile2End;
        printf("Player %d Stepped on an Up Tile\n", nPlayer);
    } else if (*nPlayerPos == *nUpTile3Start) {
        *nPlayerPos = *nUpTile3End;
        printf("Player %d Stepped on an Up Tile\n", nPlayer);
    } else if (*nPlayerPos == *nDownTile1Start) {
        *nPlayerPos = *nDownTile1End;
        printf("Player %d Stepped on a Down Tile\n", nPlayer);
    } else if (*nPlayerPos == *nDownTile2Start) {
        *nPlayerPos = *nDownTile2End;
        printf("Player %d Stepped on a Down Tile\n", nPlayer);
    } else if (*nPlayerPos == *nDownTile3Start) {
        *nPlayerPos = *nDownTile3End;
        printf("Player %d Stepped on a Down Tile\n", nPlayer);
    } else if (*nPlayerPos == 99) {
        printf("Player %d wins\n", nPlayer);
    }
}

/*
Function: nPlayerMove
Description: Moves the player's position based on the dice roll.
@param: nPlayer - Player identifier
@param: nPlayerPos - pointer to the player's position on the board
@param: nDiceRolled - value obtained from rolling the dice
@return: void
*/

void nPlayerMove(int nPlayer, int* nPlayerPos, int nDiceRolled) {
    *nPlayerPos += nDiceRolled; // Increment the player's position by the value rolled on the dice
}

/*
Function: game1 / game 2 / game 3
Description: Runs the main game loop for two players.
@param: nUpTile1Start - pointer to the starting value of up tile 1
@param: nUpTile1End - pointer to the ending value of up tile 1
@param: nUpTile2Start - pointer to the starting value of up tile 2
@param: nUpTile2End - pointer to the ending value of up tile 2
@param: nUpTile3Start - pointer to the starting value of up tile 3
@param: nUpTile3End - pointer to the ending value of up tile 3
@param: nDownTile1End - pointer to the ending value of down tile 1
@param: nDownTile1Start - pointer to the starting value of down tile 1
@param: nDownTile2End - pointer to the ending value of down tile 2
@param: nDownTile2Start - pointer to the starting value of down tile 2
@param: nDownTile3End - pointer to the ending value of down tile 3
@param: nDownTile3Start - pointer to the starting value of down tile 3
@return: void
*/

void game1(int* nUpTile1Start, int* nUpTile1End, int* nUpTile2Start, int* nUpTile2End, int* nUpTile3Start, int* nUpTile3End, int* nDownTile1End, int* nDownTile1Start, int* nDownTile2End, int* nDownTile2Start, int* nDownTile3End, int* nDownTile3Start) {
    char cCommand;
    int nPlayer1 = 1;
    int nPlayer2 = 2;
    int nPlayer1Pos = 0, nPlayer2Pos = 0;
    int nPlayer1LastRoll = 0;
    int nPlayer2LastRoll = 0;
    int nTurn = 1;
    int nDiceNum;

    cls();
    
	// Initialize and display the game board
    checkTiles(nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
    Board(nPlayer1Pos, nPlayer2Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);

   // Main game loop
    while (nPlayer1Pos != 99 && nPlayer2Pos != 99) {
        if (nTurn == 1) {
            printf("Player 1's Turn, Type Y to roll the dice: ");
            scanf(" %c", &cCommand);

            if (cCommand == 'Y' || cCommand == 'y') {
                nDiceNum = nRollDice();
                nPlayerMove(nPlayer1, &nPlayer1Pos, nDiceNum);

                if (nPlayer1Pos > 99) { // Handle player reaching the end and bouncing back
                    nPlayer1Pos = 99 - (nPlayer1Pos - 99);
                }
                cls();
                Board(nPlayer1Pos, nPlayer2Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
                printf("Player 1 rolled a: %d\n", nDiceNum);
                checkActionTiles(nPlayer1, &nPlayer1Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
                if (nDiceNum == nPlayer1LastRoll && nPlayer1LastRoll == 1) { // Check for consecutive 1s rolled by Player 1
                    printf("Player 1 rolled consecutive 1 in two turns\n");
                    nTurn = 1;
                    nPlayer1LastRoll = nDiceNum; // keeps track of the last dice rolled
                } else {
                    nPlayer1LastRoll = nDiceNum; // keeps track of the last dice rolled
                    nTurn++;
                }
            }
        } else if (nTurn == 2) {
            printf("Player 2's Turn, Type Y to roll the dice: ");
            scanf(" %c", &cCommand);

            if (cCommand == 'Y' || cCommand == 'y') {
                nDiceNum = nRollDice();
                nPlayerMove(nPlayer2, &nPlayer2Pos, nDiceNum);

                if (nPlayer2Pos > 99) { // Handle player reaching the end and bouncing back
                    nPlayer2Pos = 99 - (nPlayer2Pos - 99);
                }
                cls();
                Board(nPlayer1Pos, nPlayer2Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
                printf("Player 2 rolled a: %d\n", nDiceNum);
                checkActionTiles(nPlayer2, &nPlayer2Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
                if (nDiceNum == nPlayer2LastRoll && nPlayer2LastRoll == 1) { // Check for consecutive 1s rolled by Player 1
                    printf("Player 2 rolled consecutive 1 in two turns\n");
                    nTurn = 2;
                    nPlayer2LastRoll = nDiceNum; // keeps track of the last dice rolled
                } else {
                    nPlayer2LastRoll = nDiceNum; // keeps track of the last dice rolled
                    nTurn = 1;
                }
            }
        }
    }
}


void game2(int* nUpTile1Start, int* nUpTile1End, int* nUpTile2Start, int* nUpTile2End, int* nUpTile3Start, int* nUpTile3End, int* nDownTile1End, int* nDownTile1Start, int* nDownTile2End, int* nDownTile2Start, int* nDownTile3End, int* nDownTile3Start) {
    char cCommand;
    int nPlayer1 = 1;
    int nPlayer2 = 2;
    int nPlayer1Pos = 0, nPlayer2Pos = 0;
    int nPlayer1LastRoll = 0;
    int nPlayer2LastRoll = 0;
    int nTurn = 1;
    int nDiceNum;

    cls();

    checkTiles(nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
    Board(nPlayer1Pos, nPlayer2Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);

    while (nPlayer1Pos != 99 && nPlayer2Pos != 99) {
        if (nTurn == 1) {
            printf("Player 1's Turn, Type Y to roll the dice: ");
            scanf(" %c", &cCommand);

            if (cCommand == 'Y' || cCommand == 'y') {
                nDiceNum = nRollDice();
                nPlayerMove(nPlayer1, &nPlayer1Pos, nDiceNum);

                if (nPlayer1Pos > 99) {
                    nPlayer1Pos = 99 - (nPlayer1Pos - 99);
                }
                cls();
                Board(nPlayer1Pos, nPlayer2Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
                printf("Player 1 rolled a: %d\n", nDiceNum);
                checkActionTiles(nPlayer1, &nPlayer1Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
                if (nDiceNum == nPlayer1LastRoll && nPlayer1LastRoll == 1) { // Check for consecutive 1s rolled by Player 1
                    printf("Player 1 rolled consecutive 1 in two turns\n");
                    nTurn = 1;
                    nPlayer1LastRoll = nDiceNum; // keeps track of the last dice rolled
                } else {
                    nPlayer1LastRoll = nDiceNum; // keeps track of the last dice rolled
                    nTurn++;
                }
            }
        } else if (nTurn == 2) {
            computerRolling(); // simulates a computer loading to roll 
            cCommand = 'y';

            if (cCommand == 'Y' || cCommand == 'y') {
                nDiceNum = nRollDice();
                nPlayerMove(nPlayer2, &nPlayer2Pos, nDiceNum);


                if (nPlayer2Pos > 99) {
                    nPlayer2Pos = 99 - (nPlayer2Pos - 99);
                }
                cls();
                Board(nPlayer1Pos, nPlayer2Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
                printf("Player 2 rolled a: %d\n", nDiceNum);
                checkActionTiles(nPlayer2, &nPlayer2Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
                if (nDiceNum == nPlayer2LastRoll && nPlayer2LastRoll == 1) { // Check for consecutive 1s rolled by Player 1
                    printf("Player 2 rolled consecutive 1 in two turns\n");
                    nTurn = 2;
                    nPlayer2LastRoll = nDiceNum; // keeps track of the last dice rolled
                } else {
                    nPlayer2LastRoll = nDiceNum; // keeps track of the last dice rolled
                    nTurn = 1;
                }
            }
        }
    }
}

void game3(int* nUpTile1Start, int* nUpTile1End, int* nUpTile2Start, int* nUpTile2End, int* nUpTile3Start, int* nUpTile3End, int* nDownTile1End, int* nDownTile1Start, int* nDownTile2End, int* nDownTile2Start, int* nDownTile3End, int* nDownTile3Start) {
    char cCommand;
    int nPlayer1 = 1;
    int nPlayer2 = 2;
    int nPlayer1Pos = 0, nPlayer2Pos = 0;
    int nPlayer1LastRoll = 0;
    int nPlayer2LastRoll = 0;
    int nTurn = 1;
    int nDiceNum;
    int nForcedRoll;

    cls();

    checkTiles(nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
    Board(nPlayer1Pos, nPlayer2Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);

    while (nPlayer1Pos != 99 && nPlayer2Pos != 99) {
        if (nTurn == 1) {
            printf("Player 1's Turn, Type Y to roll the dice: ");
            scanf(" %c", &cCommand);

            if (cCommand == 'Y' || cCommand == 'y') {
            	
            	printf("Input a number: "); // Dice is not randomized in Dev Mode, the dice is dependent on the Input of the User
            	scanf("%d", &nForcedRoll);
                nDiceNum = nForcedRoll;
                nPlayerMove(nPlayer1, &nPlayer1Pos, nDiceNum);

                if (nPlayer1Pos > 99) {
                    nPlayer1Pos = 99 - (nPlayer1Pos - 99);
                }
                cls();
                Board(nPlayer1Pos, nPlayer2Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
                printf("Player 1 rolled a: %d\n", nDiceNum);
                checkActionTiles(nPlayer1, &nPlayer1Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
                if (nDiceNum == nPlayer1LastRoll && nPlayer1LastRoll == 1) { // Check for consecutive 1s rolled by Player 1
                    printf("Player 1 rolled consecutive 1 in two turns\n");
                    nTurn = 1;
                    nPlayer1LastRoll = nDiceNum; // keeps track of the last dice rolled
                } else {
                    nPlayer1LastRoll = nDiceNum; // keeps track of the last dice rolled
                    nTurn++;
                }
            }
        } else if (nTurn == 2) {
            printf("Player 2's Turn, Type Y to roll the dice: ");
            scanf(" %c", &cCommand);

            if (cCommand == 'Y' || cCommand == 'y') {
               	printf("Input a number: "); // Dice is not randomized in Dev Mode, the dice is dependent on the Input of the User
            	scanf("%d", &nForcedRoll);
                nDiceNum = nForcedRoll;
                nPlayerMove(nPlayer2, &nPlayer2Pos, nDiceNum);


                if (nPlayer2Pos > 99) {
                    nPlayer2Pos = 99 - (nPlayer2Pos - 99);
                }
                cls();
                Board(nPlayer1Pos, nPlayer2Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
                printf("Player 2 rolled a: %d\n", nDiceNum);
                checkActionTiles(nPlayer2, &nPlayer2Pos, nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End, nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start);
                if (nDiceNum == nPlayer2LastRoll && nPlayer2LastRoll == 1) { // Check for consecutive 1s rolled by Player 1
                    printf("Player 2 rolled consecutive 1 in two turns\n");
                    nTurn = 2;
                    nPlayer2LastRoll = nDiceNum; // keeps track of the last dice rolled
                } else {
                    nPlayer2LastRoll = nDiceNum; // keeps track of the last dice rolled
                    nTurn = 1;
                }
            }
        }
    }
}


int main(){
	
	int nUpTile1Start, nUpTile1End, nUpTile2Start, nUpTile2End, nUpTile3Start, nUpTile3End;
	int nDownTile1End, nDownTile1Start, nDownTile2End, nDownTile2Start, nDownTile3End, nDownTile3Start;
	int nGetOutOfRules;
	srand(time(NULL)); 
    int nStart, nGamemode;
	int nGameEndCommand;
	welcome();
	
	printf("\t\t\t\t\t\t   Press ENTER to Start: ");
	getchar();
	nStart = 1;
	
	while (nStart == 1){
		cls();
		menu (nGamemode);
		scanf("%d", &nGamemode);
		
		    switch (nGamemode) {
		case 0:
			// Code for showing the Rules
			cls(); 
			rules();
			scanf("%d", &nGetOutOfRules); 
			break;	
        case 1:
            // Code for Game Mode 1
            do {
            	cls();
                loadingScreen();
                  game1 (&nUpTile1Start, &nUpTile1End, &nUpTile2Start, &nUpTile2End, &nUpTile3Start, &nUpTile3End, &nDownTile1End, &nDownTile1Start, &nDownTile2End, &nDownTile2Start, &nDownTile3End, &nDownTile3Start); 

                printf("Do you wish to start a new game? Type 1 if yes and any number != 1 if no: ");
                scanf("%d", &nGameEndCommand);
            } while (nGameEndCommand == 1); // loops the game until Players decide to not start a new game
            cls();
            thankYouScreen ();
            nStart = 0; 
            break;

        case 2:
            // Code for Game Mode 2
            do {
            	cls();
                loadingScreen();
                  game2 (&nUpTile1Start, &nUpTile1End, &nUpTile2Start, &nUpTile2End, &nUpTile3Start, &nUpTile3End, &nDownTile1End, &nDownTile1Start, &nDownTile2End, &nDownTile2Start, &nDownTile3End, &nDownTile3Start); 

                printf("Do you wish to start a new game? Type 1 if yes and any number != 1 if no: ");
                scanf("%d", &nGameEndCommand);
            } while (nGameEndCommand == 1); // loops the game until Players decide to not start a new game
            cls();
            thankYouScreen ();
            nStart = 0; 
            break;

        case 3:
            // Code for Game Mode 3
             do {
             	cls();
                loadingScreen();
                game3 (&nUpTile1Start, &nUpTile1End, &nUpTile2Start, &nUpTile2End, &nUpTile3Start, &nUpTile3End, &nDownTile1End, &nDownTile1Start, &nDownTile2End, &nDownTile2Start, &nDownTile3End, &nDownTile3Start); 

                printf("Do you wish to start a new game? Type 1 if yes and any number != 1 if no: ");
                scanf("%d", &nGameEndCommand);
            } while (nGameEndCommand == 1); // loops the game until Players decide to not start a new game
            cls();
            thankYouScreen ();
            nStart = 0; 
            break;

        case 4:
            // Code for Game Mode 4
            cls();
            thankYouScreen ();

        default:
        	nStart = 0; 
            break;
   		}
			
	}
	
	return 0;
}
