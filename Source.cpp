#include<iostream>
#include<ctime>
#include "Header.h"
using namespace std;
void random(int* massiv,int size)
{
	for (int i = 0; i < size; i++)
	{
		massiv[i] = 1 + rand() % 50;
	}
}
void print(int* massiv, int size)
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << massiv[i] << " ";
	}
}
void searchminmax(int* massiv, int size)
{
	int min=NULL, max=NULL;
	for (int i = 0; i < size; i++)
	{
		if (max < massiv[i]) max = massiv[i]; 
		if (min > massiv[i]) min = massiv[i];
	}
}
void bubblesort(int* massiv, int size)
{
	
	for (int i = 0; i < 10; i++) {
		bool flag = true;
		for (int j = 0; j < 10 - (i + 1); j++) {
			if (massiv[j] > massiv[j + 1]) {
				flag = false;
				swap(massiv[j], massiv[j + 1]);
			}
		}
		if (flag) {
			break;
		}
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << massiv[i] << " ";
	}
}
void main()
{
	srand(time(NULL));
	int size;
	cout << "Input size:";
	cin >> size;
	int* massiv = new int[size];
	random(massiv, size);
	print(massiv, size);
	searchminmax(massiv, size);
	bubblesort(massiv, size);
	show();
	//print(massiv, size);
}