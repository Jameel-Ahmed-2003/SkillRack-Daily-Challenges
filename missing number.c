/*
Find the Missing Number
You are given an array of positive numbers from 1 to n,
such that all numbers from 1 to n are present except one
number 'x'. You have to find 'x'. The input array is not
sorted.
*/
#include<stdio.h>
void main()
{
    int n,a,x;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        scanf("%d",&a);
        x+=a;
    }
    printf("%d",(n*(n+1))/2-x);
}
