#include<stdio.h>
int main()
{
	int n,i,a,s,d,c=0;
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		s=1;
		d=n%10;
		for(i=1;i<=d;i++)
		s*=i;
		c+=s;
		n=n/10;
	}
	if(a==c)
	printf("true");
	else
	printf("false");
}
