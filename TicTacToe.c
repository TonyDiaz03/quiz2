//Tic Tac Toe game between two players or player vs computer 
//only need to run the game once
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

void createBoard();//create the board
void showBoard();//display the board
void player1Turn(); //player 1 turn
void player2Turn();//player 2 turn
void computerTurn();//computer turn
int space();//check to see if there is space

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

	
	createBoard();	
	printf("\n\nThe current status is");
	
	

	switch(selection){
		case '1' :
			while(space() != 0)
			{
				showBoard();
				player1Turn();
				showBoard();
				player2Turn();



			}
		case '2' :
			while(space() != 0)
			{
				showBoard();
				player1Turn();
				computerTurn();
			}

	}
	
	


	
	
	
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
	int row;
	int column;
	do
	{
		
		printf("choose row and column to place X ");
		scanf("%d %d", &row, &column);
		row--;
		column--;

		if(board[row][column] != ' ')
		{
			printf("Space is taken\n");
		}
		else{
			board[row][column] = player1;
			break;
		}
	}while(board[row][column] != ' ');

	


}
void player2Turn()
{
	int row;
	int column;
	do
	{
		
		printf("Choose row and column to place O ");
		scanf("%d %d", &row, &column);
		row--;
		column--;

		if(board[row][column] != ' ')
		{
			printf("Space is taken\n");
		}
		else{
			board[row][column] = player2;
			break;
		}
	}while(board[row][column] != ' ');
}
void computerTurn()
{
	srand(time(0));
	int row;
	int column;

	if(space() > 0)
	{
		do
		{
			row = rand() % 3;
			column = rand() %3;	
		} while (board[row][column] != ' ');

		board[row][column] = computer;

	}
	else{
		printf("Game is a draw");
	}
}
int space()
{
	int spaces = 9;;

	for(int i =0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(board[i][j] != ' ')
			{
				spaces--;
			}
		}
	}
	return spaces;
}