/*

The program must accept an integer N as input. If the number of digits in N is even then the program must  product of every 2 digits in
N as the output. If the number of digits in N is odd then the program must print the product of every 2 digits in N then it must print
the remaining digit(last digit) as it is as the output

Boundary Condition(s):
1<=N<=10^15
Input Format :
The first line contains the integer N.
Output Format :
The first line contains the integer separated by space as per the given condition
Example input/output 1:
Input :
1234
Output:
2 12
Example input/output 2:
Input :
19849
Output:
9 32 9
*/
#include<stdio.h>
void main()
{
    long long int n;
    int i,size;
    printf("n = ");
    scanf("%lld",&n);
    long long int temp1=n,temp=n;
    for(i=0;temp1!=0;temp1/=10,i++)
    ;
    size=i;
    int r[size];
    for(i=size-1;i>-1;temp/=10,i--)
    r[i]=temp%10;
    if(size%2==0)
    {
        for(i=0;i<size;i++)
        printf("%d ",r[i]*r[i+=1]);
    }
    else
    {
        for(i=0;i<size-1;i++)
        printf("%d ",r[i]*r[i+=1]);
        printf("%d ",r[i]);
    }
}