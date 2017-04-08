// guess letter from user

#ifndef GUESS_H
#define GUESS_H


class Guess
{
	char m_guess;
	char m_toUpperGuess;
	char *m_allGuess;	//stores all user guess
	int m_countGuess;       // count user's guess

public:

	Guess();
	~Guess(); 

	char getUserInput();
	void resetCountGuess();
	void alertSameLetter();
	void storeAllGuess();

	void coutAllGuess();


	//void displayCountGuess(); ///nr
	
	//void displayAllGuess();//nr
	
};

#endif 