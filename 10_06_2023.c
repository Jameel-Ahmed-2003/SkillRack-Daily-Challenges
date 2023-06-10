/*

The program must accept an integer matrix of size N*N containing only 0's and 1's as the input. The program must print the
count of 0's which are surrounded by 1's on all four sides and the count of 1's which are surrounded by 0's on all the 
four sides as the output.

Boundary Conditions :
1<=N<=100

Input format :
the first line contains N.
the next N lines contain N integers each separated by a space.

Output Format :
The first line contains two integers separated by a space as per the given condition.

Example input/output 1:
Input:
5
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0
0 0 1 0 0
0 0 0 0 0

Output :
3 4

Example input/output 2:
Input:
6
0 0 1 1 1 0
0 1 0 1 0 1
1 0 1 1 0 1
0 1 1 0 0 0
1 1 1 0 1 0
0 1 0 0 0 0

Output:
2 2

*/
#include<stdio.h>
void main()
{
    int n,i,j,ones=0,zeros=0;
    printf("Enter the size of square matrix\t");
    scanf("%d",&n);
    printf("\nEnter elements for %d by %d matrix\n\n",n,n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if( a[i][j]==0 && a[i][j+1]==1 && a[i+1][j]==1 && a[i-1][j]==1 && a[i][j-1]==1 )
            zeros++;
            if( a[i][j]==1 && a[i][j+1]==0 && a[i+1][j]==0 && a[i-1][j]==0 && a[i][j-1]==0 )
            ones++;
        }
    }
    printf("\nCount of Zeros surrounded by ones on all the four sides is %d\n\n\
Count of Ones surrounded by zeros on all the four sides is %d",zeros,ones);
}