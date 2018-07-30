#include <iostream>
#include <conio.h>
using namespace std;

void rotate_right(float String[], int SIZE);

void main()
{
	const int SIZE = 5;
	float String[SIZE] = { 0 };

	cout << "Please Enter Values In String:- " << endl << endl;
	for (int i = 0; i<SIZE; i++)
	{
		cout << "Please Enter The Value For " << i + 1 << " Cell:- ";
		cin >> String[i];
	}
	cout << endl << endl << endl;
	rotate_right(String, SIZE);

	_getch();
}

void rotate_right(float String[], int SIZE)
{
	float Temp = 0;
	Temp = String[SIZE - 1];
	for (int i = SIZE - 1; i>0; i--)
	{
		String[i] = String[i - 1];
	}
	String[0] = Temp;
	cout << "The Values Of String Are Now:- " << endl << endl;
	for (int j = 0; j<SIZE; j++)
	{
		cout << "The Value Of Cell " << j + 1 << " Is Now:- ";
		cout << String[j] << endl;
	}
}