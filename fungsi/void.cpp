// Author: Anan Aziz
// Project: ATM Simulator
// Date: 03/09/19

#include<iostream>
using namespace std;

double initialAmount = 10000; // Global variable
int choice;

// Function prototypes
bool stringEqual( char str1[], char str2[]);
void logIn();
void menu();
void withdraw();
void deposit();
void balanceInquiry();

// Function compares two strings for equality
bool stringEqual( char str1[], char str2[])
{
	int i;	
	for( i = 0; str1[i] !='\0' || str2[i] != '\0'; i++)
	{
		if( str1[i] != str2[i])
			return false;
	}
	return true;
}


// Function verifies login info
void logIn()
{
	char correctUsername[30] = "ana2140358";
	char correctPassword[30] = "B7L8";
	char username[30];
	char password[30];
	
	// Prompts user to enter username
	cout << "Enter username: ";
	cin >> username;
	
	if (stringEqual(correctUsername, username) )
		{
			// Prompts user to enter password
			cout << "Enter password: ";	
			cin >> password;
			
			if (stringEqual(correctPassword, password))
			{
				menu();	
			}
			else
				cout << "Invalid password";
		}
	else
		cout << "Invalid username";
}

void menu()
{	
	cout << "Enter (1) for Withdrawal" << endl;
	cout << "Enter (2) for Deposit" << endl;
	cout << "Enter (3) for Balance Inquiry" << endl;
	cout << "Enter (4) for Exit" << endl << endl;
	cin >> choice;
	
	switch (choice)
	{
		case 1: withdraw();
		break;
		case 2: deposit();
		break;
		case 3: balanceInquiry();
		break;
		case 4: cout << "Thank you. Have a nice day!";
		break;				
	}		
}

// Function withdraws
void withdraw()
{
	double withdrawAmount;
	
	cout << "Enter withdraw amount: ";
	cin >> withdrawAmount;
	double result = initialAmount - withdrawAmount;
	cout << "Your current balance is $" << result << endl << endl;
	
	cout << "What do you want to do next?" << endl << endl;
	menu();	
}

// Function deposits
void deposit()
{
	double depositAmount;
	
	cout << "Enter deposit amount: ";
	cin >> depositAmount;
	double result = initialAmount + depositAmount;
	cout << "Your current balance is $"<< result << endl << endl;
	
	cout << "What do you want to do next?" << endl << endl;
	menu();	
}

// Function prints current balance
void balanceInquiry()
{
	cout << "Your current balance is $"<< initialAmount << endl << endl;	
	
	cout << "What do you want to do next?" << endl << endl;
	menu();	
}

// Main function
int main()
{
	cout << "Hello! Welcome to ATM Simulator" << endl << endl;
	
	logIn();
	
	return 0;
}
