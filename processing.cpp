/* 
- displays word, gets letter from user(user input)
- checks user input(guess) with current word 
- updates sitck figure, missed word and chances left
*/

#include <iostream>
#include <string>
#include <conio.h>

// explicit  header files
#include "guess.h"  // to get user input and manupulate guessed word
#include "words.h" // to get word 
#include "difficulty_level.h"
#include "global.h"
#include "stick_Figure.h"
#include "welcome_screen.h"

using namespace std;

//declarations: Class
Words attempt;  // object of Words class 
Guess letter; // object of Guess class 

//declarations: variable 

const int chance = 6; // total number of chances given to player/user
char userGuess;
static bool guess; // guess letter ture(correct) or false(incorrect) 
char misses[chance]; // holds wrong guesses by user


bool checkGuess() // checking user guess against randomly choosen word
{	
	userGuess = letter.getUserInput(); // assigning user Guessed letter	

	// Checking Easy word
	if (g_choice == '1')
	{
	    for (int i = 0; i < attempt.getEasyWord().length(); i++)
		{
			while (userGuess == attempt.getEasyWord()[i])
			{
				guess = true;

				return guess;
			}
		}
	
		guess = false;
		return guess;
	    
     }

		// checking Hard Word
	if (g_choice == '2')
	{
		for (int i = 0; i < attempt.getHardWord().length(); i++)
		{
			while (userGuess == attempt.getHardWord()[i])
			{
				guess = true;

				return guess;
			}
		}

		guess = false;
		return guess;
	}

}

void printMisses() // print all wrong guesses made by user
{
	cout << " Misses: ";
	for (int i = 0; i <= g_countSF - 1; i++)
	{
	   cout << misses[i] <<" ";
	}
	cout << endl;
}

void process()
{
	bool exit = false;
	while (exit == false) 
	{		
		printStartupScreen();
		getChoice(); // Getting difficulty level choice from user 
		system("cls"); // to clear screen
			
		printStickFigure(g_countSF);
		attempt.displayWord(); // prints _ _ _ _ _ _ _ for first time

		while (g_countSF != chance) // stick figure no.
		{
			printMisses(); // prints all wrong letters enter by user/player

			checkGuess(); //takes player guess as an input and checks user guess against randomly choosen word
			
			system("cls");

			cout << "============Easy: " << attempt.getEasyWord() << endl;
			cout << "============Hard: " << attempt.getHardWord() << endl;

			if (guess == true)
			{
				printStickFigure(g_countSF);
				cout << "\n * Right Guess!!\n\n";
			}
			else
			{
				printStickFigure(++g_countSF);
				cout << " \n * Wrong Guess!!\n\n";

				misses[g_countSF - 1] = userGuess; // stores all user worng guesses 				
			}
						
			letter.alertSameLetter();// if player enter same letter again prints error message 
			attempt.updateDisplay(userGuess);  // update display() with user wright guess
			letter.storeAllGuess();// stores all user guess 
		}
		
		// play again option 
		cout << " \n * Do you want to play again (y/n): ";
		char option;
		option = _getch();
		
		while (option != 'y' && option != 'Y' && option != 'n' && option != 'N')
		{
			cout << "\a"; // makes beep sound only letter y or n is not pressed  
			cout << " \n\n !!Please enter valid option [y or n]: ";
			option = _getch();
			system("cls");
		}

		if (option == 'y' || option == 'Y')
		{
			exit = false;
			g_countSF = 0;
			letter.resetCountGuess();
			
			letter.coutAllGuess();
			g_rand = rand() % 5;

			system("cls");
		}

		else if (option == 'n' || option == 'N')
		{
			cout << " Good Bye!!\n\n";
			exit = true;
		}
		
			
	}
}
	