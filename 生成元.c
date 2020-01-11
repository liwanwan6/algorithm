#include<stdio.h>
#include<string.h>
int main()
{
	int number[100010];
	memset(number,0 , sizeof(number));
	for (int i = 1; i < 100010; i++)
	{
		int x=i,sum=i;
		while (x)
		{
			sum += x % 10;
			x /= 10;
		}
		if (i < number[sum] || number[sum] == 0)
		{
			number[sum] = i;
		}
	}
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int c;
		scanf("%d", &c);
		printf("%d\n", number[c]);
	}
	return 0;
}