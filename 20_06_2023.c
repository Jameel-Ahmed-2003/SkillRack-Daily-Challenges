/*

The program must accept two positive integers N1 N2 as the input. The program must print the smallest common factor of N1
and N2 which is greater than 1 as the output. If there is no common factor other than 1 then the program must print -1 as
the output.

Boundary Conditions:
2<=N1, N2<=10^8

Input Format :
The first line contains the value of N1 and N2 separated by space.

Output Format:
The first line contains the common factor.

Example input/output 1:
Input:
15 30
Output:
3

Explanation:
3 is the smallest number(>1) which divides both 15 and 30
Hence 3 is printed.

*/
#include<stdio.h>
void main()
{
    int a,b,i,j;
    printf("Enter a and b\n");
    scanf("%d %d",&a,&b);
    for(i=2;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
    if(i==a+1||i==b+1)
    printf("-1");
}