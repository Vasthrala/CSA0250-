#include<stdio.h>
#include<conio.h>
int main() 
{
int age;
printf("Enter age:");
scanf("%d", &age);
if(age>=18)
printf("You can eligible for vote!");
else
printf("You cannot eligible for vote");
return 0;
}
