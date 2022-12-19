#include<stdio.h>
#include<stdlib.h>
#define max 80
#define enter 13
int main()
{
	FILE*p1;
	char str[max],ch;
	int i = 0;
	p1 = fopen("out.txt", "a");
	printf("請輸入字串，案enter見結束輸入 : \n");
		while ((ch = getche()) != enter && i< max)
			str[i++]=ch;
		putc('\n', p1);
		fwrite(str, sizeof(char), i, p1);
		fclose(p1);
		printf("檔案附加完成!!\n");
}