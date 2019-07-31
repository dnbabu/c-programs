/*
input : timetable
output:
         t
        ta
       tab
      tabl
     table
    tablet
   tableti
  tabletim
 tabletime

*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],a[100];
    int i,j=0,k,l,c,n,m;
    scanf("%s",s);
    l=strlen(s)/2;
    n=strlen(s);
    m=n;
    for(i=l;i<strlen(s);i++)
    a[j++]=s[i];
    for(k=0;k<l;k++)
    a[j++]=s[k];
    a[j]='\0';
   if(n%2==0)
   printf("EVEN LENGTH ");
   else
   {
     for(i=0;i<n;i++)
   {
        for(c=0;c<m;c++)
        printf(" ");
        for(k=0;k<=i;k++)
         printf("%c",a[k]);
         printf("\n");
         m--;
    }
   }
}
