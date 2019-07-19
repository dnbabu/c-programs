/* 
12 --> 144 --> 441 --> 21 --> 12
|------------------------------|
*/
#include <stdio.h>
#include<math.h>
int reverse(int k)
{
    int r,s=0;
    while(k!=0)
    {
        r=k%10;
        s=(s*10)+r;
        k=k/10;
    }
    return s;
}
int main()
{
    int n,k,i,j,l,c;
    scanf("%d",&n);
    k=n*n;
    i=reverse(k);
    j=sqrt(i);
    l=reverse(j);
    if(n==l)
    printf("adam");
    else
    printf("not adam");
   
    return 0;
}
