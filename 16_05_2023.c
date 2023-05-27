/*

The program accept 2 integers N and X as input and print the binary representation of N in Xbits if possible else print
-1 as the output

*/
#include<stdio.h>
int n,x,i,a[100],size;
void main()
{
    printf("Enter the decimal number\t");
    scanf("%d",&n);
    printf("x = ");
    scanf("%d",&x);
    for(i=0;n!=0;i++)
    {
        a[i]=n%2;
        n/=2;
    }
    size=i;
    if(x<size)
    printf("-1");
    else if(x>size)
    {
        for(i=size;i<=x;i++)
        {
            a[i]=0;
            i++;
        }
        for(i=x-1;i>=0;i--)
        printf("%d",a[i]);
    }
    else
    {
        for(i=size-1;i>=0;i--)
        printf("%d",a[i]);
    }
}
