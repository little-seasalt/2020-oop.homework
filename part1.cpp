#include<stdio.h>
#include<string.h>

int trans_input(char num[]);

int main()
{
	char zs[][4]={"零","一","二","三","四","五","六","七","八","九","十"};
	int i,n;
	for(i=0;i<11;i++)
	{
		n=trans_input(zs[i]);
		printf("%d ",n);
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
}

