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
		printf("�ɮ׾a�I����!!\n");
	}
	else
		printf("�ɮ׶}�ҥ���\n");
	system("pause");
	return 0;
}