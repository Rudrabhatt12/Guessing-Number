#include<iostream>
#include "Mario.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand((unsigned int) time(NULL));
	 
	int number = rand() % 100 + 1;
	int guess = 0;

	do
	{
		cout << "Enter Guess (1-100): ";
		cin >> guess;

		if (guess > number)
			cout << "Guess Lower!" << endl;
		else if (guess < number)
			cout << "Guess higher!" << endl;
		else
			cout << "you won" << endl;


	} while (guess != number);

	return 0;
}
