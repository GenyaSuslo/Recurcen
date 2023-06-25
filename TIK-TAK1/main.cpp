#include<iostream>
using namespace std;

void PrintField(char field[], const int n);

#define VERTICAL_OFSET "\n\n\n\n\n"
#define HORIZONTAL_OFSET "\t\t\t\t\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 9;
	char field[n] = {/*1, 2, 3, 4, 5, 6, 7, 8, 9*/};
	PrintField(field, n);


	//реализовать функцию void MOVE(???)которая обеспечит ход игрока
}
void PrintField(char field[], const int n)
{
	cout << VERTICAL_OFSET;
		for (int i = 6; i >= 0; i-=3)
	{
		cout << HORIZONTAL_OFSET;
		cout << " ";
		
		for (int j = 0; j < 3; j++)
		{
			cout << /*(int)*/field[i + j];
			if (j < 2)cout << " | ";
		}
		cout << endl;
		if(i>0)	cout << "--- --- ---";
		cout << endl;
	}
}
