// ConsoleApplication13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

for (int i = 0; i < n - 1; i++)
{
	small = array[i];
	pos = i;
	for (int j = i + 1; j < n; j++)
	{
		if (small > array[j])
		{
			small = array[j];
			pos = j;
		}
	}
	temp = array[pos];
	array[pos] = array[i];
	array[i] = temp;
}
mean = sum / n;
cout << “\n mean is” << mean;
if (n % 2 != 0)
{
	pos1 = pos2 = (n + 1) / 2;
}
else
{
	pos1 = n / 2;
	pos2 = n / 2 + 1;
}
median1 = array[pos1];
median2 = array[pos2];
cout << ” median is “ << median1 << “\t” << median2;
for (int c = 0; c < n; c++)
{
	for (int d = 0; d < n; d++)
	{
		if (array[c] == array[d])
		{
			count[c]++;
		}
	}
}
int modepos, max = count[0];
for (int e = 1; e < n; e++)
{
	if (max < count[e])
	{
		max = count[e];
		modepos = e;
	}
}
mode = array[modepos];
cout << “mode is” << mode;
getch();
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
