#include<stdio.h>
#include<string.h>

void printf_wallet(int sum);
void trans_output(int sum);	
 
int main()
{
	int num[100],i;
	for(i=0;i<100;i++)
	{
		num[i]=i;
		printf_wallet(num[i]);
		if((i+1)%5==0)
		printf("\n");
	}
	return 0;
}

void printf_wallet(int sum)
{
	int shi;
	if(sum <= 10) 	trans_output(sum);	
    else	
    {
        shi = sum / 10;
        sum = sum % 10;
        if (shi == 1)
        {
            printf("十");
            trans_output(sum);
        }
        if(shi > 1)
        {
            trans_output(shi);
            printf("十");
            trans_output(sum);
        }
    }
 } 
 
void trans_output(int sum)
{
    if (sum == 0) printf("零"); 
	if (sum == 1) printf("一");
    if (sum == 2) printf("二");
    if (sum == 3) printf("三");
    if (sum == 4) printf("四");
    if (sum == 5) printf("五");
    if (sum == 6) printf("六");
    if (sum == 7) printf("七");
    if (sum == 8) printf("八");
    if (sum == 9) printf("九");
    if (sum == 10) printf("十");
}
