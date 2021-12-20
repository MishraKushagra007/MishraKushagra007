# include<stdio.h>
int main()
{
	int quty,dis;
	float rate,tot;
	printf("enter the quantity and rate");
	scanf("%d,%f",&quty,&rate);
	if(quty=>1000)
	{
	dis=10;
         }

	else
	{
	dis=0;
	tot = (quty*rate)-(quty*rate*dis/100);
	printf("total expenses= rs.%f\n",tot);
        }
	return 0;
}
