#include <iostream>
using namespace std;
char board[9][9];
int x,y;
int count=0;
int flag=0;
void takeInput();
void putonboard();
void checkWinningCondition();
void nullboard()
{
	for(int a=0;a<9;a++)
	{
		for(int b=0;b<9;b++)
		{
			board[a][b]=' ';
		}
	}
}
void create_board()
{
	int a;
	for(a=0;a<9;a++)
	{
		board[2][a]='_';
		board[5][a]='_';
	}
	for(a=0;a<9;a++)
	{
		board[a][2]='|';
		board[a][5]='|';
	}
}

void print_board()
{
	int a,b;
	for(a=0;a<9;a++)
	{
		for(b=0;b<9;b++)
		{
			cout << board[a][b];
		}
		cout << endl;
	}
}

void checkBeforeInserting()
{
    int xco , yco;
	xco = 3*x + 1;
	yco = 3*y + 1;
	if(board[xco][yco]=='X' || board[xco][yco]=='O')
	{
	cout << "Invalid Move" << endl;
	takeInput();		
	}
	else
	{
		putonboard();
	}
}

void putonboard()
{
	int xco , yco;
	xco = 3*x + 1;
	yco = 3*y + 1;
	if(count%2==0)
	{
		board[xco][yco]='X';
	}
	else
	{
		board[xco][yco]='O';
	}
	count++;
	checkWinningCondition();
}


void takeInput()
{
	checkWinningCondition();
	if(count%2==0)
	{
		cout << "Player 1 turn" << endl;
	}
	else
	{
		cout << "Player 2 turn" << endl;
	}
	cout << "Enter the x co-ordiante" <<endl;
	cin >> x;
	cout << "Enter the y co-ordinate" << endl;
	cin >> y;
	checkBeforeInserting();
}

void checkWinningCondition()
{
	if(board[1][1] !=' ' && board[1][4]==board[1][1] && board[1][7]==board[1][4])
	{
		if(count%2==0)
		{
			cout << "Player 2 wins";
			flag=1;
		}
		else
		{
			cout << "Player 1 wins";
			flag=1;
		}
	}
   	if(board[4][1] !=' ' && board[4][4]==board[4][1] && board[4][7]==board[4][4])
	{
		if(count%2==0)
		{
			cout << "Player 2 wins";
			flag=1;
		}
		else
		{
			cout << "Player 1 wins";
			flag=1;
		}
	}
		else if(board[7][1] !=' ' && board[7][4]==board[7][1] && board[7][7]==board[7][4])
	{
		if(count%2==0)
		{
			cout << "Player 2 wins";
			flag=1;
		}
		else
		{
			cout << "Player 1 wins";
			flag=1;
		}
	}
		else if(board[1][1] !=' ' && board[4][1]==board[1][1] && board[7][1]==board[1][1])
	{
		if(count%2==0)
		{
			cout << "Player 2 wins";
			flag=1;
		}
		else
		{
			cout << "Player 1 wins";
			flag=1;
		}
	}
		else if(board[1][4] !=' ' && board[4][4]==board[1][4] && board[7][4]==board[4][4])
	{
		if(count%2==0)
		{
			cout << "Player 2 wins";
			flag=1;
		}
		else
		{
			cout << "Player 1 wins";
			flag=1;
		}
	}
		else if(board[1][7] !=' ' && board[4][7]==board[1][7] && board[7][7]==board[4][7])
	{
		if(count%2==0)
		{
			cout << "Player 2 wins";
			flag=1;
		}
		else
		{
			cout << "Player 1 wins";
			flag=1;
		}
	}
		else if(board[1][1] !=' ' && board[4][4]==board[1][1] && board[7][7]==board[4][4])
	{
		if(count%2==0)
		{
			cout << "Player 2 wins";
			flag=1;
		}
		else
		{
			cout << "Player 1 wins";
			flag=1;
		}
	}
		else if(board[1][7] !=' ' && board[4][4]==board[1][7] && board[7][1]==board[4][4])
	{
		if(count%2==0)
		{
			cout << "Player 2 wins";
			flag=1;
		}
		else
		{
			cout << "Player 1 wins";
			flag=1;
		}
	}
}
int main()
{
	nullboard();
	create_board();
	print_board();
	int turn=0;
	while(turn<9)
	{
		checkWinningCondition();
		if(flag==1)
		{
			break;
		}
		takeInput();
		if(turn==8)
		{
			cout << "Tie";
		}
		turn++;
		system("cls");
		print_board();
	}
}
