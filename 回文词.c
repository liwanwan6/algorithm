#include<stdio.h>
#include<string.h>
#include<ctype.h>
char mirror[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char* judge[] = { "is not a palindrome","is a regular palindrome","is a mirrored string","is a mirrored palindrome" };
char mirror_number(char);
int main()
{
	char s[50];
	while (scanf("%s", s) == 1)
	{
		int p = 1, m = 1;
		int len = strlen(s);
		for (int i = 0; i < len / 2; i++)
		{
			if (s[i] != s[len - 1 - i])
			{
				p = 0;
			}
			if (mirror_number(s[i]) != s[len - 1 - i])
			{
				m = 0;
			}
		}
		printf("%s-----%s\n\n", s, judge[m*2+p]);
	}
	return 0;
}
char mirror_number(char c)
{
	if (isalpha(c))
	{
		return (mirror[c - 'A']);
	}
	else
	{
		return (mirror[c - '0' + 25]);
	}
}