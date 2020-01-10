#include<stdio.h>
#include<string.h>
int main()
{
	char array[] = "1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char c;
	while((c=getchar())!=EOF)
	{
		char* find = strchr(array, c);
		if (find)
		{
			putchar(*(find-1));
		}
		else
		{
			putchar(c);
		}
	}
	return 0;
}