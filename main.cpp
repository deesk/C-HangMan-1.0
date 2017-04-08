
#include <iostream>
#include <stdlib.h> // random number generator  
#include <time.h>   // current time to generate random number 
#include <exception> 

#include "welcome_screen.h" // to print welcome screen
#include "difficulty_level.h" //to choose difficulty level
#include "stick_figure.h" // to print sitck figure
#include "global.h" // to access global variables
#include "processing.h" // process user inputs, update stickfigure, misses and chances left 


using namespace std;
void generateRandomNum();

int main()
{
	generateRandomNum();// generates random number betweent 0-4 
	
	//printWelcomeScreen(); // Printing welcome and instruction screen
  	
	process(); // calling all function in process() at processing.cpp to execute rest of the function 
	
	// exeption handeling: throws an eexpection if there is ans error in txt file..

	

	system("pause");
	return 0;

}

void generateRandomNum() // generates random number betweent 0-4
{
	srand(time(NULL)); // setting current time as seed a for random number generator 
	g_rand = rand() % 5;
	
}