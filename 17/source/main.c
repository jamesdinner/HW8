#include<stdio.h>
#include<stdlib.h>
#define max 80

int main()
{
	FILE*p1;
	char str[max];
	int bytes;
	p1 = fopen("out.txt", "r");
	while (!feof(p1))
	{
		bytes = fread(str, sizeof(char), max - 1, p1);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
		
	fclose(p1);

}