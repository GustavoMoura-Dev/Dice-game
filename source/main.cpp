/*
	PROJETO PARA CALCULAR UM VALOR ALEATÓRIO NA JOGADA DE UM DADO DE 6 LADOS(PONTOS).
*/

#include<iostream>
#include<locale.h>
#include<string.h>
#include<cstdlib>
#include<ctime.h>

using namespace std;

void play();
void playagn();

int main()
{
	system("COLOR E4");

	char yn;
	cout << "Welcome, do you want to roll the dice? (y/n): ";
	cin >> yn;

	if (yn == 'y' || yn == 'Y') {
		play();
	}

	else if (yn == 'n' || yn == 'N') {
		char out;
		cout << "\nWould you like to leave the game? (y/n): ";
		cin >> out;
		if (out == 'y' || out == 'Y') {
			cout << "\nLeaving the game . . .\n";
			exit(0);
		}
		else if (out == 'n' || out == 'N') {
			cout << "\nOk, starting again...\n\n";
			main();
		}
	}
	else {
		cout << "\nSET 'y' OR 'n' TO ASK!\n";
		cout << " \n";
		main();
	}

	return 0;
}

void play()
{
	system("COLOR E4");
	srand((unsigned)time(0));
	
	char agn;

	int random = (rand() % 6) + 1;

	cout << "\nYour number is: " << random << "\n";

	cout << "\nDo you want to roll again? (y/n): ";
	cin >> agn;

	if (agn == 'y' || agn == 'Y')
	{
		playagn();
	}
	else if(agn == 'n' || agn == 'N')
	{
		cout << "\nLeaving game . . .\n";
		exit(0);
	}
}

void playagn()
{
	system("COLOR E4");
	char roll;

	cout << "\nPress 'r' to roll the dice: ";
	cin >> roll;
	if (roll == 'r' || roll == 'R')
	{
		play();
	}
	else
	{
		char pagn;

		cout << "\nYou didn't press 'r', try again: ";
		cin >> pagn;
		play();
	}
}
