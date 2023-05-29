/*
The program accept N integers and should print 2 integers among them whose difference is the maximum
*/
#include<stdio.h>
void main()
{
    int n,i;
    printf("n = ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
    }
    printf("%d %d",min,max);
}