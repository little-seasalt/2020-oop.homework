#include<stdio.h>
#include<string.h>

int trans_input(char num[]);

int main()
{
	char num[20];
	int n=100,i;
	for(i=0;i<21;i++)
	{
		printf("�������д���֣�");
		scanf("%s",num);
		n=trans_input(num);
		if(n<=10&&n>=-10)
		printf("%d pass\n",n);
	}
	return 0;
 } 
 
int trans_input(char num[])
{
    if (strcmp(num, "��") == 0) return 0;
    if (strcmp(num, "һ") == 0) return 1;
    if (strcmp(num, "��") == 0) return 2;
    if (strcmp(num, "��") == 0) return 3;
    if (strcmp(num, "��") == 0) return 4;
    if (strcmp(num, "��") == 0) return 5;
    if (strcmp(num, "��") == 0) return 6;
    if (strcmp(num, "��") == 0) return 7;
    if (strcmp(num, "��") == 0) return 8;
    if (strcmp(num, "��") == 0) return 9;
    if (strcmp(num, "ʮ") == 0) return 10;
    if (strcmp(num, "��һ") == 0) return -1;
    if (strcmp(num, "����") == 0) return -2;
    if (strcmp(num, "����") == 0) return -3;
    if (strcmp(num, "����") == 0) return -4;
    if (strcmp(num, "����") == 0) return -5;
    if (strcmp(num, "����") == 0) return -6;
    if (strcmp(num, "����") == 0) return -7;
    if (strcmp(num, "����") == 0) return -8;
    if (strcmp(num, "����") == 0) return -9;
    if (strcmp(num, "��ʮ") == 0) return -10;
}
