/*ye program user given data ka table print karta hai */
#include <stdio.h>

int main()
{
    int number,i,a;
    printf("enter a number you want the table of number=");
    scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
    a= number*i;
    printf("%d*%d= %d \n",number,i,number*i );
   // printf("\n");
    }
    return 0;
}