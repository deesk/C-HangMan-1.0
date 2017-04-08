#include <iostream>
#include <stdlib.h> // random number generator  
#include <String>
 

// header files 
#include "words.h" 
#include "difficulty_level.h" 
#include "global.h" 

using namespace std;

int const *randNum = &g_rand; // constant random value
string currentWord;
string display;

Words::Words() //defult constructor 
{
	const int maxWords = 5;
	string easyWords[maxWords] = { "LONDON" , "SYDNEY", "TOKYO", "PARIS", "PERTH" };
	string hardWords[maxWords] = { "KATHMANDU", "CHRISTCHURCH", "HAMILTONISLAND", "COPENHAGEN", "LUXEMBOURGH" };

	for (int i = 0; i < maxWords; i++)
		m_easyWords[i] = easyWords[i];

	for (int i = 0; i < maxWords; i++)
		m_hardWords[i] = hardWords[i];

	
	//currentWord = m_easyWords[*randNum];
    //display = currentWord;


}
     
string Words::getEasyWord()
{
	return m_easyWords[*randNum];
}

string Words::getHardWord()
{
	return m_hardWords[*randNum];
}

void Words::displayWord()
{
	if (g_choice == '1')
	{
		currentWord = m_easyWords[*randNum];
		display = currentWord;
		
		cout << " Word: ";
		for (int i = 0; i < display.length();i++)
		{
			{
				display[i] = '_';
			}
			cout << display[i] << " ";
		}
	}

	else if  (g_choice == '2')
	{
		currentWord = m_hardWords[*randNum];
		display = currentWord;
		cout << "Word: ";

		for (int i = 0; i < display.length();i++)
		{
			{
				display[i] = '_';
			}
			cout << display[i] << " ";
		}
	}
	cout << endl;
}

int Words::updateDisplay(char playerGuess)
{
	cout << " Word: ";

	// display all mistry word
	if (g_countSF == 6)
	{
		if (g_choice == '1' || g_choice=='2')

			for (int i = 0; i < currentWord.length(); i++)
			{
				{
					display[i] = currentWord[i];
				}
				cout << display[i] << " ";
			}
		cout << endl;

		return 0;
	}

	   // to update display after ever guess 
	 if  (g_choice == '1' || g_choice == '2')
	{
		for (int i = 0; i < display.length();i++)
		{
			if (playerGuess == currentWord[i])
			{
				display[i] = playerGuess;
			}

			cout << display[i] << " ";
		}

		//exit if user guesses all letters
	if  (display == currentWord)
		{
			cout << " \n\n * Congratulation!! You Win";
			g_countSF = 6;
		}
				
	}
	 
	cout << endl;
	
	return 0;
}

void Words::revealWord() // display all mistry word
{

	if (g_countSF == 6)
	{
		if (g_choice == '1')
			for (int i = 0; i < currentWord.length(); i++)
			{
				display[i] = currentWord[i];

			}
	}
	
}