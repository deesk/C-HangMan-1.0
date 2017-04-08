#include <string>

using namespace std;

#ifndef WORDS_H
#define WORDS_H

class Words{

	string m_easyWords[5];// = { "LONDON" , "SYDNEY", "TOKYO", "PARIS", "PERTH" };
	string m_hardWords[5];// = { "KATHMANDU", "CHRISTCHURCH", "HAMILTONISLAND", "COPENHAGEN", "LUXEMBOURGH" };
	//string currentWord;
	//string display;
	 
public:

	Words();

	string getEasyWord();
	string getHardWord();
			
	void displayWord();
	int updateDisplay(char playerGuess);
	void revealWord();

	
	
};


#endif