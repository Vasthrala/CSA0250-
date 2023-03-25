#include<stdio.h>
#include<conio.h>
int main()
{
	int num, remainder, total = 0,temp;
	printf("Enter the number: ");
	scanf("%d", &num);
	temp = num;
	while(num>0)
	{
		remainder = num%10;
		total = total+(remainder*remainder*remainder);
		num=num/10;
	}
	if(temp==total)
	printf("This is armstrong number");
	else
	printf("This is not armstrong Number");
	return 0;
}
