#include <iostream>
#include <stdlib.h>
using namespace std;

int getNumber()
{
	int a = rand()%10;
}


int main()
{
	int count=0 , score1=0 , score2=0;
	char random;
	char option = 'a';
	while(score1<100 && score2<100)
	{ 
	    cout << "INSTRUCTIONS - " << endl;
	    cout << "First player to reach to 100 points wins !!\n\n\n";
		if(count%2==0)
		{
		while(1)
		{
	    if(option=='h')
	    {
	    	break;
		}
		cout << "Player 1 rolls - " << endl;
		cout << "Your score is " << score1  << endl;
		cout << "Player 2s score is " << score2 << endl;
		cout << "Press any key and then enter to roll" << endl;
		cin >> random;
		int no1 = getNumber();
		int no2 = getNumber();
		cout << "Player gets scores " << no1 << " and " << no2 << endl;
		if(no1==0 || no2==0)
		{
			score1=0;
			cout << "Sorry! Your score equals to zero!" << endl;
			break;
		}
		else
		{
		score1+=(no1+no2);
	    }
	    if(score1>=100)
	    {
	    	cout << "Player 1 wins" << endl;
	    	return 0;
		}
		cout << "Player 1 score equals = " << score1 << endl;
		cout << "You want to roll dices again ?" <<endl;
		cout << "Press H for hold or A to roll again" << endl;
		cin >> option;
	    }
	    }
		else
		{
		while(1)
		{
	    if(option=='h')
	    {
	    	break;
		}
		cout << "Player 2 rolls - " << endl;
		cout << "Your score is " << score2 << endl;
		cout << "Player 1s score is = " << score1 << endl;
	    cout << "Press any key and then enter to roll" << endl;
		cin >> random;
		int no1 = getNumber();
		int no2 = getNumber();
		cout << "Player 2 gets scores " << no1 << " and " << no2 << endl;
		if(no1==0 || no2==0)
		{
			score2=0;
			cout << "Sorry! Your score equals to zero!" << endl;
			break;
		}
		else
		{
		score2+=(no1+no2);
	    }
	    if(score2>=100)
	    {
	    	cout << "Player 2 wins" << endl;
	    	return 0;
		}
		cout << "Player 2 score equals = " << score2 << endl;
		cout << "You want to roll dices again ?" <<endl;
		cout << "Press H for hold or A to roll again" << endl;
		cin >> option;
	    }
	    }
		count++;
		cout << "Press any key and then enter to continue" << endl;
		cin >> random;
		system("cls");	
		option='a';
	}
}
