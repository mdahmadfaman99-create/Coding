#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n;
    printf("enter row and column size of both matrix=");
    scanf("%d%d",&m,&n);
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("enter the value of matrix a in %d,%d position\n",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Addition Result=\n");
    for(j=0;j<=n-1;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
    return 0;
}