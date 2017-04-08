#include <iostream>
#include <conio.h> // _getch()
#include "global.h"

using namespace std;

char getChoice() // getting difficulty level choice from user
{	
	g_choice;
	g_choice=_getch();     //to buffer only first character of user input in 'choice'
	
	while ((g_choice != '1') && (g_choice != '2')) 
	{
		cout << "\a"; // makes beep sound only when character besde 1 and z is pressed 
		cout << " !!Please enter valid option [1 or 2]: ";
		g_choice=_getch();
		system("cls");	
	}
		
	return g_choice;
}









