#include<stdio.h>
#include<conio.h>
 
void main()
{
    float celsius,fahrenheit;
 
    printf("\n Enter the Temparature in Celsius : ");
    scanf("%f",&celsius);
 
    fahrenheit = (celsius * 9/5) + 32;
    
    printf("%.2f celsius =%.2f Fahrenheit",celsius, fahrenheit);
 
    return 0;
}
