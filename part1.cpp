#include<stdio.h>
#include<string.h>

int trans_input(char num[]);

int main()
{
	char zs[][4]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};
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
}

