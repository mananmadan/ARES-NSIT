// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

int helper(int num, string output[10000])
{
	//cout<<"hello";
	int num1 = num / 10;
	int num2 = num % 10;
//	if (num1 <= 0)
	//{
		if (num1<= 0)
		{
	//		output[0] = "";
			return 0;
		}
//	}
	
	int l = helper(num1, output);
	cout <<"l";
	cout << l << endl;
	if ( num1 != 0)
	{
		for (int i = 0; i <l; i++)
		{
			//cout << "in for";
			output[i] = output[i] + (char)(num2 + 96);
			//cout << i;

		}
		return ++l;
		
	}
	
}
int getCodes(string input, string output[10000]) {
	/*
	You are given the nput text and output string array. Find all possible codes and store in the output string array. Don’t print the codes.
	Also, return the number of codes return to the output string. You do not need to print anything.
	*/
	int i = 0;
	int sum = 0;
	while (input[i] != '\0')
	{
	    sum = sum * 10 + (int)input[i] - 48;
		i++;
	}
	//cout << sum;
	//return 0;
int m  =     helper(sum, output);
//cout << "hello";
return m;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
	   string input;
	   std::cin >> input;

	   string output[10000];
	   int count = getCodes(input, output);
	   for (int i = 0; i < count && i < 10000; i++)
		   cout << output[i] << endl;
	   return 0;
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
