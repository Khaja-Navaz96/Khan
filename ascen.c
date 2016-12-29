#include<stdio.h>
int main() {
    int n,a[100],remain,i,j,k=0,arranged_num=0,temp=0;
    scanf("%d",&n);
    while(n>0)
    {
        remain=n%10;
        a[k]=remain;
        n=n/10;
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<k;i++)
    {
       arranged_num=arranged_num*10+a[i];
    }   
    printf("%d",arranged_num);
    return 0;
}
