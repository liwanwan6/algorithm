#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n[100000+1] = {};
	int number = 100000;
	for (int i = 2; i <= number; i++)
	{
		if (!n[i])
		{
			for (int j = i * 2; j <= number; j += i)
			{
				n[j] = 1;
			}
		}
	}
	for (int i = 2; i <= number + 1; i++)
	{
		if (!n[i])
		{
			cout <<left<< setw(8) << i;
		}
	}
		return 0;
}