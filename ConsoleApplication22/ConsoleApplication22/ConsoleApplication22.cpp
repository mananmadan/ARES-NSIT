// ConsoleApplication22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<unordered_map>
using namespace std;
#include<string>
int main()
{
    cout << "Hello World!\n"; 
	unordered_map<string, int>u_map;
	string str1 = "the";
	string str2 = "this";
	u_map[str1] = 4;
	u_map[str2] = 8;
	u_map[str2+str1] = 8;
	cout << u_map[str1 + str2];


	cout <<u_map.size();
	//u_map[str1]
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug pr,ogram: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
