/* 
sum of proper divisors of one number is equal to other number(each other)

220 and 284
  1184 and 1210
  are amicable pairs or friendly numbers
  */
#include <stdio.h>
#include<math.h>
int sumfactor(int k)
{
    int l,s=0;
    for(l=1;l<=k/2;l++)
    {
        if(k%l==0)
        s+=l;
    }
    return s;
}
int main()
{
    int n,k,i,j;
    scanf("%d %d",&n,&k);
    i=sumfactor(n);
    j=sumfactor(k);
   if(i==k && j==n)
   printf("TRUE");
   else
   printf("FALSE");
    return 0;
}
