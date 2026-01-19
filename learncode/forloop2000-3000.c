
#include<stdio.h>
int main()
{
    int i=2000;
    for(;i<=3000;)
    {
        if(i%400==0||(i%4==0&&i%100!=0))
    {
        printf("%d is leap year\n,",i);
        
    }
    i++;
    }
    return 0;
}