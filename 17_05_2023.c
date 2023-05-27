/*

The program must accept an integer N as the input. The program must print the desired pattern as shown in the example
Boundary  Condition(s):
-100<=N<=100
Input Format:
The first line contains the value of N.
Output Format:
The first N lines contain the desired pattern
Example Input/Output 1:
Input :
4
Output:
1 * * *
2 3 * *
4 5 6 *
7 8 9 10

Example Input/Output 2:
Input :
-4
Output:
* * * 1
* * 3 2
* 6 5 4
10 9 8 7

*/
#include<stdio.h>
void main()
{
    int n,i,j,k=1,x=0;
    int a[100];
    printf("n = ");
    scanf("%d",&n);
    if(n>0)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(j<=i)
                {
                    printf("%d ",k);
                    k++;
                }
                else
                printf("* ");
            }
            printf("\n");
        }
    }
    else
    {
        k=1;
        n=n*-1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i+j>=n-1)
                {
                    printf("%d ",k);
                    a[x]=k;
                    x+=1;
                    k+=1;
                }
                else
                printf("* ");
            }
            printf("\n");
        }
    }
}
