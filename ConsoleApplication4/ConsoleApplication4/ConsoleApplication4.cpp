// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
void sumOfTwoArrays(int input1[], int size1, int input2[], int size2, int output[]) {
	/* Don't write main().
	 * Don't read input, it is passed as function argument.
	 * No need to print or return the output. Just fill the output in given output array.
	 * Taking input and printing output is handled automatically.
	 */
	int i = size1 - 1;
	int j = size2 - 1;
	int carry = 0;
	int k;
	if (size1 > size2)
	{
		k = size1;

		while (i >= 0)
		{
			while (j >= 0)
			{


				output[k] = input1[i] + input2[j] + carry;
				if ((input1[i] + input2[j] + carry) >= 10)
				{
					output[k] = ((input1[i] + input2[j] + carry) % 10);
					carry = 1;
				}
				if ((input1[i] + input2[j] + carry) < 10)
				{

					output[k] = ((input1[i] + input2[j] + carry) % 10);
					carry = 0;
				}


				k--;
				j--;
				i--;

			}
			output[k] = input1[i] + carry;
			i--;
			k--;
		}

	}

	if (size2 >= size1)
	{
		k = size2;
		i = size2 - 1;
		j = size1 - 1;
		while (i >= 0)
		{
			while (j >= 0)
			{


				output[k] = input2[i] + input1[j] + carry;
				if ((input2[i] + input1[j] + carry) >= 10)
				{
					output[k] = ((input2[i] + input1[j] + carry) % 10);
					carry = 1;
				}
				if ((input2[i] + input1[j] + carry) < 10)
				{

					output[k] = ((input2[i] + input1[j] + carry) % 10);
					carry = 0;
				}


				k--;
				j--;
				i--;

			}
			output[k] = input2[i] + carry;
			i--;
			k--;
		}

	}
	if (carry == 0)
	{
		output[0] = 0;
	}




}




int main() {
	int size1, size2;
	cin >> size1;
	int * input1 = new int[1 + size1];

	for (int i = 0; i < size1; i++)
		cin >> input1[i];

	cin >> size2;
	int * input2 = new int[1 + size2];

	for (int i = 0; i < size2; i++)
		cin >> input2[i];

	int *output = new int[1 + max(size1, size2)];
	int outsize = 1 + max(size1, size2);
	sumOfTwoArrays(input1, size1, input2, size2, output);

	for (int i = 0; i < outsize; i++)
		cout << output[i] << " ";


}
