#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int guess=0, nc, randomNumber=0;
	time_t t;
	srand((unsigned) time(&t));
	randomNumber=rand()%21;
	printf("This is guessing the number game\n");
	printf("I have chosen a number between 0-20, which you must guess\n\n\n");
	for(nc=5;nc>0;--nc)
	{
		cout<<"You have "<<nc<<" guess left\n" ;
		cout<<"Enter your guess: ";
		cin>>guess;
		if(guess==randomNumber){
			cout<<"CONGRATULATIONS! YOU HAVE WON THE GAME\n\n";
			return 0;
		}
		else if(guess<0||guess>20)
		{
			cout<<"You have missed a chance. Please enter a number between 0-20\n\n";
		}
		else if(guess<randomNumber)
		{
			cout<<"My number is greater than that\n\n";
		}
		else if(guess>randomNumber)
		{
			cout<<"My number is less than that\n\n";
		}
	}
	cout<<"You have failed all the 5 chances. The number was "<<randomNumber;
	return 0;
}