#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j,k,r;
    int a[100];
    char s[100],str[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    i=1;
    while(i<=n)
    {
        j=0;
        s[j]='\0';
        while(a[i]!=0)
        {
            r=a[i]%26;
            if(r==0){
            s[j++]='Z';
            a[i]=a[i]/26-1;
            }
            else
            {
                s[j++]=r-1+'A';
                a[i]=a[i]/26;
            }
        }
       s[j]='\0';
        for( ;j>=0;j--)
        printf("%c",s[j]);
        printf("\n");
        i++;
    }

    return 0;
}
