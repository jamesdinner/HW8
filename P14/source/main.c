#include<stdio.h>
#include<stdlib.h>

int main() 
{
	FILE*p;
	char ch;
	int count = 0;
	p = fopen("w.txt", "r");
	if (p != NULL)
	{
		while (ch = getc(p) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(p);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else
		printf("�ɮ׶}�ҥ���");
}