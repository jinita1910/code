#include<stdio.h>
int Addition(int a,int b)
{
	int c;
	while(b!=0)
	{
		c=(a&b)<<1;//find carry and shift left
		a=a^b;//find sum
		b=c;
	}
	return a;
		
}
int Subtraction (int a,int b)
{
	int carry;
	b=Addition(~b,1);//get 2's compliment of b and add in a
	while(b!=0)
	{
		carry=(a&b)<<1;//find carry and shift left
		a=a^b;//find sum
		b=carry;
	}
	return a;
}
int main()
{
int n1,n2,binAdd,binSub;
printf("Enter first integer:");
scanf("%d",&n1);
printf("\nEnter second integer:");
scanf("%d",&n2);
printf("The integers are :\n %d\n%d",n1,n2);
binAdd=Addition(n1,n2);
binSub=Subtraction(n1,n2);
printf("\nThe sum is %d.",binAdd);
printf("\nThe difference is %d.",binSub);	
return 0;
}
