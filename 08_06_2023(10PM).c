/*

The program must accept an integer N as the input. The program must print the desired pattern as the output.

Boundary Conditions
2<=N<=100

Input Format :
The first line contains the value of N

Output Format :
The lines containing the desired pattern as shown in the example

Example Input/Output 1:
Input :
3
Output:
0 0 1
0 2 1
3 2 1

Example Input/Output 2:
Input :
4
Output:
0 0 0 1
0 0 2 1
0 3 2 1
4 3 2 1

*/
#include<stdio.h>
void main()
{
    int n,k=1,i,j,t;
    printf("n = ");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                printf("%d ",k);
                t=k;
                k+=1;
            }
            else if(i+j<n-1)
            printf("0 ");
            else
            {
                t--;
                printf("%d ",t);
            }
        }
        printf("\n");
    }
}