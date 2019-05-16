// returnsubsets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
//#include "solution.h"
#include<iostream>
using namespace std;
int subset(int input[], int n, int output[][20]) {
	// Write your code here
	if (n == 0)
	{
		output[0][0] = 0;
		return 1;
	}
	int smalloutput[10000][20];
	int x = subset(input + 1, n - 1, smalloutput);
		//x= no of subsets returned by recursion
		//copy into output
		for (int i = 0; i < x; i++)
		{
			int temp = output[i][0];
			for (int i = 0; i < temp; i++)
			{
				output[i][temp] = smalloutput[i][temp];
			}
		}
	for (int i = 0; i < x; i++)
	{
		smalloutput[i][0]++;
		int temp = smalloutput[i][0];

		for (int i = 0; i < temp; i++)
		{
			if (i == 0)
				output[x + i][temp] = input[0];
			else
				output[x + i][temp] = smalloutput[i][temp];
		}
	}
	return 2 * x;

}


#include<iostream>
using namespace std;
int main() {
	int input[20], length, output[35000][20];
	cin >> length;
	for (int i = 0; i < length; i++)
		cin >> input[i];

	int size = subset(input, length, output);

	for (int i = 0; i < size; i++) {
		for (int j = 1; j <= output[i][0]; j++) {
			cout << output[i][j] << " ";
		}
		cout << endl;
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
