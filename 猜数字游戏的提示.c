#include<stdio.h>
int main()
{
	int n, key[1024], answer[1024], count = 0;;
	/*长度*/
	while (scanf("%d", &n) == 1 && n)
	{	
		printf("Game%d:", ++count);
		/*正确答案*/
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &key[i]);
		}
		for (;;)
		{		
			int A = 0, B = 0;
			int sum = 0;
			/*用户答案*/
			for (int j = 0; j < n; j++)
			{
				scanf("%d", &answer[j]);
				/*判断同位字符*/
				if (key[j] == answer[j])
				{
					A++;
				}
				sum += answer[j];
			}
			/*判断是否退出*/
			if (!sum)
			{
				break;
			}
			/*判断同字符，不同位*/
			for (int j = 1; j < 10; j++)
			{
				int a = 0, b = 0;
				for (int x = 0; x < n; x++)
				{
					if (key[x] == j)
					{
						a++;
					}
					if (answer[x] == j)
					{
						b++;
					}
				}
				B += a > b ? b : a;
			}
			printf("(%d,%d)\n", A, B - A);
		}
	}
	return 0;
}