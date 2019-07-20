#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	k=2*n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		{
			if(i==n || (i==1 && j==n))
			printf("* ");
		    else if((i>1 && i<n) && (j==n-i+1 || j==n+i-1))
			printf("* ");
			else
			printf("  ");
			
		}
		printf("\n");
	}
}
