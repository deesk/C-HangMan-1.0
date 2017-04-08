#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

void printWelcomeScreen()
{
	//frame 1
	ifstream myfile;    
	myfile.open ("files/ws/ws1.txt");    
	
	if (myfile.is_open())
	{    
		while ( myfile.good() )    
		{  
			string line;

			getline(myfile,line); 
			cout << line << endl;
		}    
		
		myfile.close();
	}
	
	
	Sleep(1000);
	system("cls");

	// frame 2

	ifstream myfile2;
	myfile2.open("files/ws/ws2.txt");

	if (myfile2.is_open())
	{
		while (myfile2.good())
		{
			string line;

			getline(myfile2, line);
			cout << line << endl;
		}

		myfile2.close();

	}

	Sleep(1000);
	system("cls");

	// frame 3

	ifstream myfile3;
	myfile3.open("files/ws/ws3.txt");

	if (myfile3.is_open())
	{
		while (myfile3.good())
		{
			string line;

			getline(myfile3, line);
			cout << line << endl;
		}

		myfile3.close();

	}

	Sleep(1000);
	system("cls");

	// frame 4

	ifstream myfile4;
	myfile4.open("files/ws/ws4.txt");

	if (myfile4.is_open())
	{
		while (myfile4.good())
		{
			string line;

			getline(myfile4, line);
			cout << line << endl;
		}

		myfile4.close();
		
	}

	Sleep(1000);
	system("cls"); 

	// frame 5

	ifstream myfile5;
	myfile5.open("files/ws/ws5.txt");

	if (myfile5.is_open())
	{
		while (myfile5.good())
		{
			string line;

			getline(myfile5, line);
			cout << line << endl;
		}

		myfile5.close();

	}

	Sleep(1000);
	system("cls");

	// frame 6

	ifstream myfile6;
	myfile6.open("files/ws/ws6.txt");

	if (myfile6.is_open())
	{
		while (myfile6.good())
		{
			string line;

			getline(myfile6, line);
			cout << line << endl;
		}

		myfile6.close();

	} 
			
	Sleep(1000);
	//system("cls");
	cout << endl;
	cout << "						    Wait......"; 

	// frame 7

	
	Sleep(3000);
	system("cls");
}
void printStartupScreen()
{

	// frame 8 : Instructions and Difficulty level option 

	ifstream myfile8;
	myfile8.open("files/instructions.txt");

	if (myfile8.is_open())
	{
		while (myfile8.good())
		{
			string line;

			getline(myfile8, line);
			cout << line << endl;
		}

		myfile8.close();

	}
}