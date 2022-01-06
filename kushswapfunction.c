# include<stdio.h>
void swap (void)
{
int x,y,z;
scanf("%d%d",&x,&y);
z=x;
x=y;
y=z;
printf("%d%d",x,y);
}
int main()
{
swap();
return 0;
}
