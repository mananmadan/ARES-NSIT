// returnsubsetto l.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
//#include "solution.h"
using namespace std;
int subsetSumToK(int input[], int n, int output[][50], int k) {

	if (n == 0)
	{
		if (k == 0)
		{
			output[0][0] = 0;
			return 1;
		}

		else
			return 0;
	
	
	}

	cout << k << endl;

	int m = subsetSumToK(input + 1, n - 1, output, k - input[0]);
	 
}


int main() {
	int input[20], length, output[10000][50], k;
	cin >> length;
	for (int i = 0; i < length; i++)
		cin >> input[i];

	cin >> k;

	int size = subsetSumToK(input, length, output, k);

	//for (int i = 0; i < size; i++) {
		//for (int j = 1; j <= output[i][0]; j++) {
			//cout << output[i][j] << " ";
		//}
		//cout << endl;
	//}
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
