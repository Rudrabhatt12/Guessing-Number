# Guessing-Number
//In this game it will ask you to guess a number and it will tell u if ur lower  or higher and once you enter the right number you win .

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


