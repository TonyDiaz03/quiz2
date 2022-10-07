//Tic Tac Toe game between two players or player vs computer 
//only need to run the game once
#include <stdio.h>

void createBoard();//create the board
void showBoard();//display the board
void player1Turn(); //player 1 turn
void player2Turn();//player 2 turn
void computerTurn();//computer turn

char board[3][3];
char player1 = 'X';
char player2= 'O';
char computer = 'O';


int main()
{
	char selection;
	printf("Enter your choice (1 or 2)\n");//start of game
	printf("--------------------------\n");
	printf("--------------------------\n");

	selection = getchar();//get users choice of 1 or 2

	printf("You have entered choice ");
	putchar(selection);

	

	printf("\n\nThe current status is");
	
	createBoard();
	showBoard();
	
	


	
	
	
	return 0;
}
void createBoard()
{	
	for(int i =0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void showBoard()
{
	printf("\n+-----------+\n");
	printf("| %c | %c | %c |", board[0][0], board[0][1], board[0][2]);
	printf("\n+-----------+\n");
	printf("| %c | %c | %c |", board[1][0], board[0][1], board[0][2]);
	printf("\n+-----------+\n");
	printf("| %c | %c | %c |", board[2][0], board[0][1], board[0][2]);
	printf("\n+-----------+\n");
}
void player1Turn()
{

}
void player2Turn()
{

}
void computerTurn()
{

}