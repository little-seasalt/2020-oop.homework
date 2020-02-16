#include<stdio.h>
#include<string.h>

int trans_input(char num[]);	//将输入的汉字转化为数字，便于计算 
int input_op(int sum); 	//输入多组数据，直到查看标志字符出现停止循环
int op(int n, char b[],int sum);	//对输入数据进行处理 
void printf_wallet(int sum);  //输出最终结果 
void trans_output(int sum);		//对最终结果的数字转化为汉字并输出

char zs[20], wallet[20], opp[20], num[20];	
int sum,n;

int main()
{
	freopen("C:\\Users\\86133\\Desktop\\oop.homer\\1.txt","r",stdin);
	scanf("%s %s %s %s",zs,wallet,opp,num);
    sum = trans_input(num);	
    sum = input_op(sum);
	if(sum < 0)  //处理钱包数额为负数 
	{
		printf("负");
		sum=-sum;
	} 
	printf_wallet(sum);
	printf("\n");
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

int input_op(int sum)
{
	while (1)
    {
        scanf("%s %s",wallet,opp);
        if (strcmp(wallet,"看看") == 0)
        break;
        scanf("%s", num);
        n = trans_input(num);
        sum = op(n, opp, sum);
    }	
    return sum;
}

int op(int n, char opp[], int sum)
{
    if (strcmp(opp, "增加") == 0) sum = sum + n;
    if (strcmp(opp, "减少") == 0) sum = sum - n;
    return sum;
}

void printf_wallet(int sum)
{
	int shi,bai;
	if(sum <= 10) 	trans_output(sum);	
    else
    {
		 if(sum >= 100)
        {
        	bai = sum /100;
        	sum = sum %100;
        	if(bai == 1)
        	printf("一百");
        	else
        	{
        		trans_output(bai);
        		printf("百"); 
			}
			if(sum<10&&sum!=0)
			printf("零");
			if(sum>=10&&sum<20)
			printf("一");
		}
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
            	if(sum!=0)
            	trans_output(sum);
        	}
		}
    }
 } 
 
 void trans_output(int sum)
{
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
