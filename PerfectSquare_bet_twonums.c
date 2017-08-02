#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int i,k=0,sq,a,b,s[1000];
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        sq=sqrt(i);
        if(sq*sq==i)
        {
            if(k==0)
            {
                printf("%d",i);
            }
            else if(k==1)
            {
                printf(",%d",i);
            }
            k=1;
        }
    }
}
