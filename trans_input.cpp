#include<stdio.h>
#include<string.h>

int trans_input(char num[]);

int main()
{
	char num[20];
	int n=100,i;
	for(i=0;i<21;i++)
	{
		printf("请输入大写数字：");
		scanf("%s",num);
		n=trans_input(num);
		if(n<=10&&n>=-10)
		printf("%d pass\n",n);
	}
	return 0;
 } 
 
int trans_input(char num[])
{
    if (strcmp(num, "零") == 0) return 0;
    if (strcmp(num, "一") == 0) return 1;
    if (strcmp(num, "二") == 0) return 2;
    if (strcmp(num, "三") == 0) return 3;
    if (strcmp(num, "四") == 0) return 4;
    if (strcmp(num, "五") == 0) return 5;
    if (strcmp(num, "六") == 0) return 6;
    if (strcmp(num, "七") == 0) return 7;
    if (strcmp(num, "八") == 0) return 8;
    if (strcmp(num, "九") == 0) return 9;
    if (strcmp(num, "十") == 0) return 10;
    if (strcmp(num, "负一") == 0) return -1;
    if (strcmp(num, "负二") == 0) return -2;
    if (strcmp(num, "负三") == 0) return -3;
    if (strcmp(num, "负四") == 0) return -4;
    if (strcmp(num, "负五") == 0) return -5;
    if (strcmp(num, "负六") == 0) return -6;
    if (strcmp(num, "负七") == 0) return -7;
    if (strcmp(num, "负八") == 0) return -8;
    if (strcmp(num, "负九") == 0) return -9;
    if (strcmp(num, "负十") == 0) return -10;
}
