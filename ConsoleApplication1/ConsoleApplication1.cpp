#include "pch.h"
#include <iostream>

using namespace std;

int rows; //Vvodim preremenuju rjdaov
//int k = 2 * rows - 2;

//Dlja Starogo koda:
//int spc; //Vvodim preremenuju otstupov
//int a = 0;
//int i = 1;

void intrownumbers(int M) //Function to check if row numbers from 1 to 30 
{
	while (rows <= 0 || rows > 30)
	{
		cin.clear();
		cout << " " << endl;
		cout << "Error! Re-enter rows numbers, please!" << endl;
		cin >> rows;
		cout << " " << endl;
	}
}

void printTriangle(int N) //Function header to print triangle
{
	cout << " " << endl;
	int k = 2 * rows - 2; // Opredeljaem koli4estvo probelov 
	for (int i = 0; i < rows; i++) //Vnewnij cqkl - Opredelenie kol-va rjadov
	{
		for (int j = 0; j < k; j++) //Vnutrenij cqkl - Opredelenie kol-va probelov
			cout << " ";
		k = k - 1; //Ponizhenie zna4enija k posle kazhdogo cikla
		for (int j = 0; j <= i; j++) //Vnutrenij cqkl - Opredelenie koli4estva kolonok
		{
			cout << "o ";
		}
		cout << endl; //Razdelenie stro4koi posle vqpolnenija kazhdogo cqkla
	}
}

int main() 
{
	for (;;) //Sdelatj beskoe4nqi cqkl
	{
		cout << "-Let's create a Trinalge- \n";
		cout << "Input numbers of rows for your triangle (1-30max): ";
		cin >> rows;
		intrownumbers(rows);//Vqzevajem funkcii
		printTriangle(rows);
		cout << " " << endl;
		cout << "Bye!" << endl;
		return 0;
	}
}

//Staraja verisa coda:

/*
for (i, a; i <= rows; ++i, a = 0) //Na4inaem cikl
{
	cout << " ";
	for (spc = 1; spc <= rows - i; ++spc)//koli4estvo otsupov ravno kolic4esvu rjadov - 1 (v na4ale)
	{
		cout << "  ";
	}
	while (a != 2 * i - 1)//Esli 4islo ne4etnoe - "o" / Esli 4etnoe - " "
	{
		cout << "o ";
		++a; //Proverka sleduewego zna4enia a=a+1
	}
	cout << endl;
}
*/