// collegetest123.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	//int size;
	int count = 0;
	int i = 0;
	int man;
	char arr[20];
	cin >> man;
//char *arr = new char[man];
//cout<<"enter the size of the string"
	cin.getline(arr);
	cout << "man" << man << endl;
	cout << arr[man]<<endl;
	for (int j = 0; j<(man); j++)
	{
		if (arr[j]!=arr[man-j-1])
			count++;
	}
	cout << "count" << count<<endl;
	if (count == 0)
	 {
		cout << "it is a palindrome" << endl;
     }

	else {
		cout << "it is not a palindrome" << endl;
	}
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
