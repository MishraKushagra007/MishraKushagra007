# include <stdio.h>
int main()
{
	int n;
	printf("enter any number ");
	scanf("%d",&n);
	if (n&&((n & n - 1)==0))
	{
		printf("it is power of 2");
	}
		else{
		
		printf("it is not a power of 2");
		
	}
	return 0;
}