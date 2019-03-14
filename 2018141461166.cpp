#include<stdio.h>
int main()
{
//	int a;
//	scanf("%d",&a);
	int count=0;
	int num=0,sum=0,max=0;
	for(int q=100;q<=999;q++)
	{
		int b=0;
		b=(q/100)*((q%100)/10)*(q%10);
		int c=0;
		c=(q/100)*(q/100)+((q%100)/10)*((q%100)/10)+(q%10)*(q%10);
		int d=0;
		d=(q/100)+((q%100)/10)+(q%10);
		int count1=0,count2=0,count3=0,count4=0;
		
		
		for(int p=1;p<q;p++)
		{
			if(q%p==0)
			count1++;
		}
		if(count1==1)
		count++;
		for(int p=1;p<b;p++)
		{
			if(b!=0)
			{
				if(b%p==0)
				count2++;
			}
		}	
		if(count2==1)
		count++;
		for(int p=1;p<c;p++)
 		{
			if(c%p==0)
			{
				if(d!=1)
				count3++;
			}
		}
		if(count3==1)
		count++;
		for(int p=1;p<d;p++)
		{
			if(d%p==0)
			{	
				if(d!=1)		
				count4++;
			}
		}
		if(count4==1)
		count++;
		if(count==4)
		{
			num++;
			sum=sum+q;
			if(q>max)
			max=q;
		
		}
			count=0;
		
		
	}
	printf("%d %d %d %d",num,sum,max,count);
	return 0;
}
