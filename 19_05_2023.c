/*

The program accept an integer n as the input.The program increament all the even digits by 1 and decreament all odd
digits by 1 and should print the result as output
Input :
253
Output :
342

*/
#include<stdio.h>
void main()
{
    int a,n,r,rev=0,size,i=0;
    scanf("%d",&a);
    n=a;
    for(;n!=0;n/=10,i++)
    {
        r=n%10;
        rev=(rev*10)+r;
    }
    size=i;
    int b[size];
    for(i=0;i<size;i++)
    {
        b[i]=rev%10;
        if(b[i]%2==0)
        b[i]+=1;
        else
        b[i]-=1;
        rev/=10;
    }
    a=0;
    for(i=0;i<size;i++)
    a=a*10+b[i];
    printf("%d",a);
}