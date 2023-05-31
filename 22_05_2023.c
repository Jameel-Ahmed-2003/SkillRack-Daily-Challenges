/*

The program accepts 3integers X, Y, N. The program
Forms a series for N steps. The odd integers are the multiple of X while the even integers are the multiple of y.

*/
#include<stdio.h>
void main()
{
    int x,y,n,i,j;
    printf("x = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);
    printf("n = ");
    scanf("%d",&n);
    int a[n];
    if(n%2==0)
    {
        for(j=1,i=0;i<n;i+=2,j++)
        a[i]=x*j;
        for(j=1,i=1;i<n;i+=2,j++)
        a[i]=y*j;
    }
    else
    {
        for(j=1,i=1;j<=n/2;i+=2,j++)
        a[i]=y*j;
        for(j=1,i=0;i<n;i+=2,j++)
        a[i]=x*j;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}