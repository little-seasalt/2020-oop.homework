#include<stdio.h>
#include<string.h>

int trans_input(char num[]);	//������ĺ���ת��Ϊ���֣����ڼ��� 
int input_op(int sum); 	//����������ݣ�ֱ���鿴��־�ַ�����ֹͣѭ��
int op(int n, char b[],int sum);	//���������ݽ��д��� 
void printf_wallet(int sum);  //������ս�� 
void trans_output(int sum);		//�����ս��������ת��Ϊ���ֲ����

char zs[20], wallet[20], opp[20], num[20];	
int sum,n;

int main()
{
	freopen("C:\\Users\\86133\\Desktop\\oop.homer\\1.txt","r",stdin);
	scanf("%s %s %s %s",zs,wallet,opp,num);
    sum = trans_input(num);	
    sum = input_op(sum);
	if(sum < 0)  //����Ǯ������Ϊ���� 
	{
		printf("��");
		sum=-sum;
	} 
	printf_wallet(sum);
	printf("\n");
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

int input_op(int sum)
{
	while (1)
    {
        scanf("%s %s",wallet,opp);
        if (strcmp(wallet,"����") == 0)
        break;
        scanf("%s", num);
        n = trans_input(num);
        sum = op(n, opp, sum);
    }	
    return sum;
}

int op(int n, char opp[], int sum)
{
    if (strcmp(opp, "����") == 0) sum = sum + n;
    if (strcmp(opp, "����") == 0) sum = sum - n;
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
