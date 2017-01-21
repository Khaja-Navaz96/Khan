#include<stdio.h>
#include<unistd.h>
int main()
 {
    int  i;
    char a[] = "HAPPY PONGAL";
    for(i=0;i<12;i++) 
    {
        printf("%c",a[i]);
        sleep(100000);
    }
    return 0;
}
