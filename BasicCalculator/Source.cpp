#include <iostream>
#include <Windows.h>

using namespace std;

void menu()
{
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
}

int main()
{
	int option;
	float num1;
	float num2;
	float answer;

	menu();

	cout << ">> ";
	cin >> option;

	system("cls");

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	if (option == 1)
	{
		system("cls");
		answer = num1 + num2;
		cout << "The answer is: " << answer << endl;
	}

	if (option == 2)
	{
		system("cls");
		answer = num1 - num2;
		cout << "The answer is: " << answer << endl;
	}

	if (option == 3)
	{
		system("cls");
		answer = num1 * num2;
		cout << "The answer is: " << answer << endl;
	}

	if (option == 4)
	{
		system("cls");
		answer = num1 / num2;
		cout << "The answer is: " << answer << endl;
	}

	cout << "The Calculator will close automatically in 5 seconds...\n";
	Sleep(5000);
}