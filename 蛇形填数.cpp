#include<iostream>
#include<iomanip>
constexpr int N = 5;;
using namespace std;
int main()
{
	int a[N][N] = {};
	int number = 0;
	int x = 0, y = N - 1;
	a[x][y] = ++number;
	while (number < N * N)
	{
		while (x+1 < N && !a[x+1][y])
		{
			a[++x][y] = ++number;
		}
		while (y-1 >= 0 && !a[x][y-1])
		{
			a[x][--y] = ++number;
		}
		while (x-1 >= 0 && !a[x-1][y])
		{
			a[--x][y] = ++number;
		}
		while (y+1 < N && !a[x][y+1])
		{
			a[x][++y] = ++number;
		}
	}
	for (auto & n : a) {
		for (int & t : n) {
			cout <<left<< setw(5)<<t ;
		}
		cout << endl;
	}
	return 0;
}