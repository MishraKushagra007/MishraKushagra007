# include <stdio.h>
int main()
{
	char sex, ms;
	int age;
	printf("enter age,sex,marital staus\n");
	scanf("%d %c %c",&age,&sex,&ms);
	if((ms=='M')||(ms=='U'&& sex=='M'&&age>30)||(ms=='U'&&sex=='F'&&age>25))
	printf("driver shoud be insured\n");
	else
	printf("driver should not be insured\n");
}