#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int compare(char* , int , int);
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		char s[105];
		int a = 0;
		cin >> s;
		/*逐个比较*/
		for (int i = 1; i < strlen(s); i++)
		{
			if (compare(s,i,a))
			{
				/*把小的头脚标赋给a*/
				a = i;
			}
		}
		/*已经找到最小输出的首个角标，直接遍历即可*/
		for (int i = 0; i < strlen(s); i++)
		{
			/*从头到尾输出，前面的不能掉*/
			putchar(s[(a+i)%strlen(s)]);
		}
		cout << endl;
	}
	return 0;
}
int compare(char* array,int a,int b)
{
	for (int i = 0; i < strlen(array); i++)
	{
		/*每个字符逐个比较*/
		if (array[(a+i)%strlen(array)] != array[(b+i)%strlen(array)])
		{
			/*返回最小的值*/
			return array[(a + i) % strlen(array)] < array[(b + i) % strlen(array)];
		}
	}	
	/*如果相等就返回0*/
	return 0;
}