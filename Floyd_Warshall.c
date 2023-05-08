#include<stdio.h>
main()
{
    int n,i,k,j,a[50][50];
    printf("enter the no of nodes");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("enter weight between %d and %d\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
          a[i][j]= min(a[i][j],a[i][k]+a[k][j]);
        }
    }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }



}
int min(int x,int s)
{
    if(x>s)
        return s;
    else
        return x;
}
