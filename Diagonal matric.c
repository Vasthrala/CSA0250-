#include<stdio.h>
#include<conio.h>
int main()
{
	int array[10][10];
	int i, j,m, n, a=0, sum=0;
	printf("Enter the order of the matrix is\n");
	scanf("%d %d",&m, &n);
	if(m==n)
	{
		printf("Enter the coefficients of the matrix\n");
		for(i=0; i<m; ++i)
		{
			for(j=0; j<n; ++j)
			{
				for (j=0; j<n; ++j)
				{
					printf("%d", array[i][j]);
			    } 
			    printf("\n");
			}
			for(i=0;i<m;++i)
			{
				sum = sum+array[i][j];
				a = a+array[i][m-i-1];
			} 
			printf("\n The sum of the main diagonal elements is =%d\n",sum);
		
			printf("The sum of the off diagonal elements is =%d\n",a);
		}
		}
					
	    else
	    printf("The given order is not a square matrix\n");
	
	return 0;
}
