/*
n=4
A
B A
C B A
D C B A
*/
#include<stdio.h>
int main()
{
    int n,i,j,k,c=0;
    char ch='A';
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%c ",(ch-1+j));
        }
        printf("\n");
    }
}
