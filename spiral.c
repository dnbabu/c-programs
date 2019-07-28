#include<stdio.h>
int main()
{
	int n,i=0,j=0,k=0,var=1;
	scanf("%d",&n);
	int a[100][100];
	int layer=(n/2);
	while(k<=layer)
	{
	 for(j=k;j<(n-k);j++){ a[i][j]=(var++);}
	 j--;
	 i++;
	 for( ;i<(n-k);i++){ a[i][j]=(var++);}
	 i--;
	 j--;
	 for( ;j>=k;j--) {a[i][j]=(var++);}
	 i--;
	 j++;
	 for( ;i>k;i--) {a[i][j]=(var++);}
	 i++;
	 k++;
   }
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	
}
