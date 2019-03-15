#include <iostream>
#include <vector>
#include <stdlib.h>
#include <conio.h>
using namespace std;
char road[30][34];
class bike
{
	public:
	int x;
	int y;
	char value;
};
bike b[3];
void putcar()
{
	for(int i=0;i<3;i++)
	{
		road[b[i].x][b[i].y]=b[i].value;
	}
}
void createbike()
{
	b[0].x=24;
	b[0].y=17;
	b[1].x=25;
	b[1].y=17;
	b[2].x=26;
	b[2].y=17;
	b[0].value='C';
	b[1].value='A';
	b[2].value='R';
	putcar();
}
class obstacle
{
	public:
	int x;
	int y;
	char value;
};
	obstacle o;
void placeobject()
{
	o.x=rand()%10;
	o.y=rand()%34;
	o.value='X';
	road[o.x][o.y]=o.value;
}
void moveobstacle()
{
	if(o.x+1==30)
	{
		o.value=' ';
		placeobject();
	}
	road[o.x][o.y]=' ';
	o.x+=1;
	road[o.x][o.y]=o.value;
}
void makeboundary()
{
    for(int i=0;i<34;i++)
    {
    	road[0][i] = '*';
	}
	for(int i=0;i<30;i++)
	{
		road[i][33] = '*';
    }
	for(int i=0;i<34;i++)
	{
		road[29][i]= '*';
	}
	for(int i=0;i<30;i++)
	{
		road[i][0] = '*';
	}
	for(int i=0;i<30;i++)
	{
		road[i][11] = '|';
	}
	for(int i=0;i<30;i++)
	{
	   road[i][22] = '|';
	}
}
void print()
{
	for(int i=0;i<30;i++)
	{
		for(int j=0;j<34;j++)
		{
			printf("%c" , road[i][j]);
		}
		printf("\n");
	}
}
void delay()
{
	int i,j;
	for(i=0;i<327;i++)
	{
		for(j=0;j<210799;j++)
		{
		}
}
}
void movebike()
{
	char dir;
	dir=getch();
	if(dir=='d')
	{
	for(int i=0;i<3;i++)
	{
	   road[b[i].x][b[i].y]=' ';
	}
	for(int i=0;i<3;i++)
	{
		b[i].y+=1;
	}
	for(int i=0;i<3;i++)
	{
		road[b[i].x][b[i].y]=b[i].value;
	}
	}
	else if(dir=='a')
	{
		for(int i=0;i<3;i++)
		{
			road[b[i].x][b[i].y]=' ';
		}
		for(int i=0;i<3;i++)
		{
			b[i].y-=1;
		}
		for(int i=0;i<3;i++)
		{
			road[b[i].x][b[i].y]=b[i].value;
		}		
	}
}
int main()
{
	int n=0;
	makeboundary();
	createbike();
	placeobject();
	while(1)
	{
    moveobstacle();
	print();
	delay();
	movebike();
	if(o.x==b[0].x-1 && o.y==b[0].y || o.x==b[0].x+1 && o.y==b[0].y)
	{
		cout << "GAME OVER";
		break;
	}
	makeboundary();
    system("cls");
//	printf("%d %d %d %d\n"   , b[0].x , b[0].y , o.x , o.y);
    }
}
