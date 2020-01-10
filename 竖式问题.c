#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],buf[100];
	int abc,de,x, y,count=0;
	scanf("%s", s);
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 10; j < 100; j++)
		{
			abc = i;
			de = j;
			x = abc * (j % 10);
			y = abc * (j / 10);
			sprintf(buf, "%d%d%d%d", abc, de, x, y);
			int ok = 0;
			for (int x = 0; x < strlen(buf); x++)
			{
				if (strchr(s, buf[x])==NULL)
				{
					ok = 1;
				}
			}
			if (!ok)
			{
				printf("<%d>\n",++count);
				printf("%5d\n×%3d\n-----\n%5d\n%-4d\n-----\n%4d\n\n", abc, de, x, y, abc * de);
			}
		}
	}
	return 0;
}