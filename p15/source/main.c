#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE*p1,*p2;
	char ch;
	int count = 0;
	p1 = fopen("w.txt", "r");
	p2 = fopen("out.txt", "w");
	if (p1 != NULL && p2 != NULL)
	{
		while ((ch = getc(p1)) != EOF)
		{
			putc(ch, p2);
		}
		fclose(p1);
		fclose(p2);
		printf("檔案靠背完成!!\n");
	}
	else
		printf("檔案開啟失敗\n");
	system("pause");
	return 0;
}