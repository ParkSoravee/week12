#include<stdio.h>

void getStr(char*);
void print(char*);

int main()
{
	char str[1000];
	char* pStr = str;
	getStr(pStr);
	print(pStr);
}

void getStr(char* pStr)
{
	scanf_s("%[^'\n']s", pStr, 999);
}
void print(char* pStr)
{
	int i = 0;
	while (*(pStr+i) != '\0')
	{
		if (*(pStr+i) == ' ' or (*(pStr + i) >= 'a' and *(pStr + i) <= 'z') or (*(pStr + i) >= 'A' and *(pStr + i) <= 'Z') or (*(pStr + i) >= '1' and *(pStr + i) <= '9'))
			printf("%c", *(pStr+i));
		i++;
	}
}