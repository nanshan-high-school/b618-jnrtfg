#include <iostream>


int main() 
{
 int L,D=0,tL=0;
 scanf("%d",&L);
 for(int i=0;i<=9999;i++)
 {
 	if(L==tL)
 	{
 		break;
	}
	else
	{
		D++;
		if(D%2==1)
		{
			tL=tL+D; 
		}
		else
		{
			tL=tL-D; 
		}
	}
 }
 printf("%d",D);
 return 0;
}