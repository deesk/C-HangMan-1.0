
// guess letter from player

#include <iostream>
#include <conio.h> //  _getch()

#include "guess.h"

using namespace std;

Guess::Guess()  //default constructor
{
	int length=1;
	cout << "=====m_countGuess: " << m_countGuess << endl;
	m_allGuess = new char[length]; // creating dynamic memory to sore all guessed letters
	//m_countGuess = m_toUpperGuess;
}

Guess::~Guess()
{
	delete[] m_allGuess;
	m_allGuess = NULL;
}


char Guess::getUserInput() // get,count and display player guess letter in upper case
{
	cout << " Guess:  ";    
	do 
	{		
		m_guess = _getch(); //to buffer only first character of player input in 'guess'
		m_toUpperGuess = toupper(m_guess);
		
		if ((m_toUpperGuess < 'A') || (m_toUpperGuess > 'Z')) // make beep sound only when character besde a to z is pressed 
		cout << "\a";
		
	}while ((m_toUpperGuess < 'A') || (m_toUpperGuess > 'Z')); 

	
	cout << m_toUpperGuess <<endl; 
	m_countGuess++; // count number of guess entered by player

	return m_toUpperGuess;
}

void Guess::storeAllGuess()
{
	m_allGuess[m_countGuess - 1] = m_toUpperGuess; // stores all guess entered by player 
}

void Guess::alertSameLetter()
{
	for (int i = 0; i < m_countGuess; i++)
	{
		if (m_toUpperGuess == m_allGuess[i])
		{
			cout << " * You already enter this letter, try another one\n\n";
		}
	}
	
}

void Guess::resetCountGuess()
{
	m_countGuess = 0;
}

void Guess::coutAllGuess()
{
	cout << m_countGuess <<endl;
	for (int i =0; i< m_countGuess; i++)
	{
		cout << m_allGuess[m_countGuess];
	}

}