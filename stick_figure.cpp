#include <iostream>
#include <fstream>
#include <string>

#include "global.h"

using namespace std;

void printStickFigure(int sfNo)
{
	switch (sfNo)
	{
	case 0:
		{
			ifstream myfile;    
			myfile.open ("files/stick_figure/sf0.txt");    
	
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
		break;
		}

	case 1:
		{
			ifstream myfile;    
			myfile.open ("files/stick_figure/sf1.txt");    
	
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
			
		break;
		}
	
	case 2:
		{
			ifstream myfile;
			myfile.open("files/stick_figure/sf2.txt");

			if (myfile.is_open())
			{
				while (myfile.good())
				{
					string line;

					getline(myfile, line);
					cout << line << endl;
				}

				myfile.close();
			}
		
			break;
		}

	case 3:
		{
			ifstream myfile;
			myfile.open("files/stick_figure/sf3.txt");

			if (myfile.is_open())
			{
				while (myfile.good())
				{
					string line;

					getline(myfile, line);
					cout << line << endl;
				}

				myfile.close();
			}
			
			break;
		}

	case 4:
		{
			ifstream myfile;
			myfile.open("files/stick_figure/sf4.txt");

			if (myfile.is_open())
			{
				while (myfile.good())
				{
					string line;

					getline(myfile, line);
					cout << line << endl;
				}

				myfile.close();
			}
			
			break;
		}
	
	case 5:
		{
			ifstream myfile;
			myfile.open("files/stick_figure/sf5.txt");

			if (myfile.is_open())
			{
				while (myfile.good())
				{
					string line;

					getline(myfile, line);
					cout << line << endl;
				}

				myfile.close();
			}
			
			break;
		}

	case 6:
		{
			ifstream myfile;
			myfile.open("files/stick_figure/sf6.txt");

			if (myfile.is_open())
			{
				while (myfile.good())
				{
					string line;

					getline(myfile, line);
					cout << line << endl;
				}

				myfile.close();
			}
			
			break;
		}

	
   }
   
}

