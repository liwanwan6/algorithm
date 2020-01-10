#include<stdio.h>
int main()
{
	char c;
	int choice = 1;
	while ((c = getchar()) != EOF)
	{
		if (c == '"')
		{
			printf("%s", choice ? "“": "”");
			choice = !choice;
		}
		else
		{
			printf("%c", c);
		}
	}
	return 0;
}