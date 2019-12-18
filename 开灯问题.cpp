#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int light, person;
	cin >> light >> person;
	int* light_array;
	light_array = new int[light+1]();
	for (int i = 2; i <=person; i++)
	{
		for (int j = 1; j <= light; j++)
		{
			if (j % i == 0)
			{
				light_array[j] = !light_array[j];
			}
		}
	}
	for (int i = 1; i <= light; i++)
	{
		if (！*(light_array+i))
		{
			cout <<left<<setw(3)<<  i;
		}
	}
	return 0;
}
