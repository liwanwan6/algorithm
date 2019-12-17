#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
	int n = 10;
	int* a;
	a = new int[n];
	vector<double> number(10, 1);
	vector<double>::iterator it;
	number.push_back(20);
	sort(number.begin(), number.end());
	for (int i = 0; i < number.size(); i++)
	{
		cout << left << setw(8) << number[i];
	}
	cout << endl;
	reverse(number.begin(), number.end());
	number.pop_back();
	for (it = number.begin(); it != number.end(); ++it)
	{
		cout << left << setw(8) << *it;
	}
	cout << endl;
	for (double & i : number) {
		cout << i;
	}
	return 0;
}