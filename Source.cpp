//Brandy Rohrer
//April 29, 2021
//Assignment 15a Exceptions
//Function and driver to calculate character offsets

#include<iostream>
#include<string>

using namespace std;

char character(char, int);

int main()
{
	char userLetter;
	int userOffset;
	char result;

	do
	{
		try
		{
			cout << "Please enter a letter - ";
			cin >> userLetter;
			cout << "Please enter an offset amount - ";
			cin >> userOffset;
			cout << endl;

			result = character(userLetter, userOffset);

			cout << "The letter is - " << result << endl;
		}
		catch (string exceptionString)
		{
			cout << exceptionString << endl;
		}
	} while (userOffset != 0);

	system("pause");
	return 0;
}

char character(char character, int offset)
{
	char letter;
	string invalidCharacterException = "Not a valid character!";
	string invalidRangeException = "Result not a letter!";
	

	if (character < 65)
	{
		throw invalidCharacterException
	}
	if (character > 90  && character < 97)
	{
		throw invalidCharacterException;
	}
	if (character > 122)
	{
		throw invalidCharacterException;
	}
	
	letter = character + offset;	
	
	if (letter < 65)
	{
		throw invalidRangeException;
	}
	else if (letter > 90 && letter <97)
	{
		throw invalidRangeException;
	}
	else if(letter > 122)
	{
		throw invalidRangeException;
	}
	else
	{
		return letter;
	}
}
