#include<stdio.h>
#include<math.h>
int main()
{
    char s[10000000],a[10000000],b[10000000];
    int i,j,k,c;
    scanf("%d",&c);
    while(c!=0)
    {
        scanf("%s",s);
        j=0;k=0;
        for(i=0;s[i]!='\0';i++)
        {
            if(i%2==0)
            a[j++]=s[i];
            else
            b[k++]=s[i];
        }
        a[j]='\0';
        b[k]='\0';
        printf("%s ",a);
        printf("%s",b);
        printf("\n");
        c--;
    }
    return 0;
}
