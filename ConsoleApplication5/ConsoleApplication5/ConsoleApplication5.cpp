// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there./

#include "pch.h"
#include <iostream>
#include<string>
#include<cmath>
#include "ConsoleApplication5.h"
using namespace std;
int subsequences(string s, string output[])
{
	if (s.length() == 0)
	{
		output[0] = "";
		return 1;
	}
	int n = subsequences(s[1], output);
	
	for (int i = 0; i <= pow(2, s.length);i++)
	{
		string m = s[i] + s.substr(1);

	}
	return n;

}
int main()
{
    
	string s = "pqr";
    string output[1000];
	int count = subsequences(s, output);
	for (int i = 0; i < count; i++)
	{
		cout << output[i] << endl;
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
