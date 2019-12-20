#include<stdio.h>
 char a[3] = { 'a','b','c' };
 void function(int first,int end)
 {
	 char temp;
	 if (first == end)
	 {
		 for (int i = 0; i < end; i++)
		 {
			 printf("%c\t", a[i]);
		 }
		 printf("\n");
	 }
	 else
	 {
		 for (int i = first; i < end; i++)
		 {
			 temp = a[i];
			 a[i] = a[first];
			 a[first] = temp;
			 function(first + 1, end);
			 temp = a[i];
			 a[i] = a[first];
			 a[first] = temp;
		 }
	 }
 }
int main()
{
	function(0, 3);
	return 0;
}









/*
#include<stdio.h>
int temp[1000] = { 0 };
int a[1000] = { 0 };
void function(int n,int  box)
{
	if (box == n + 1)
	{
		for (int i = 1; i <= n; i++)
		{
			printf("%d\t", a[i]);
		}
		printf("\n");
		return;
	}
	else
	{
		for (int j = 1; j <= n; j++)
		{
			if (temp[j] == 0)
			{
				a[box] = j;
				temp[j] = 1;
				function(n, box + 1);
				temp[j] = 0;
			}
		}
		return;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	function(n,1);
	return 0;
}
*/