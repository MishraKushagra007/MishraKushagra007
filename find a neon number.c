# include <stdio.h>
int main()
{
	int num,sum=0,sq,rem;
	printf("enter the number");
	scanf("%d",&num);
	sq = num*num;
	while(sq!=0)
	{ 
	rem=sq%10;
	sum=sum+rem;
	sq=sq/10 ;
	
	}
	if(num==sum)
	{
		printf("%d is a neaon number",num);
	}
		else{
			printf("%d is not a neaon number");
		}
		return 0;
	
}