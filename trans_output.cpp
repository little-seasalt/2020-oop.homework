#include<stdio.h>
#include<string.h>

void printf_wallet(int sum);
void trans_output(int sum);	

int main()
{
	int sum,i;
	for(i=0;i<15;i++)
	{
		printf("���������֣�");
		scanf("%d",&sum);
		if(sum < 0)
		{
			printf("��");
			sum=-sum;
		}  
		printf_wallet(sum);
		printf("\n");
	}

	return 0;
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
        	printf("һ��");
        	else
        	{
        		trans_output(bai);
        		printf("��"); 
			}
			if(sum<10&&sum!=0)
			printf("��");
			if(sum>=10&&sum<20)
			printf("һ");
		}
		if(sum <= 10) 	trans_output(sum);
		else
		{
			shi = sum / 10;
        	sum = sum % 10;
    	    if (shi == 1)
    	    {
        	    printf("ʮ");
            	trans_output(sum);
    	    }
    	    if(shi > 1)
    	    {
        	    trans_output(shi);
            	printf("ʮ");
            	if(sum!=0)
            	trans_output(sum);
        	}
		}
    }
 } 
 
 void trans_output(int sum)
{
    if (sum == 1) printf("һ");
    if (sum == 2) printf("��");
    if (sum == 3) printf("��");
    if (sum == 4) printf("��");
    if (sum == 5) printf("��");
    if (sum == 6) printf("��");
    if (sum == 7) printf("��");
    if (sum == 8) printf("��");
    if (sum == 9) printf("��");
    if (sum == 10) printf("ʮ");
}
