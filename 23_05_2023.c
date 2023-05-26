/*

The program must accept an integer matrix of size N x N as the input. The program must reverse the integers in the opposite diagonal of the matrix. Finally, the program must print the modified matrix as the output.
Boundary Condition(s):
2 <= N <= 50
Input Format:
The first line contains the integer N.
The next N lines contain N integers separated by space(s).
Output Format:
The first N lines contain N integers separated by space.
Example Input/output 1:
Input:
4
1238
5628
3745
4643
Output:
1234
5678
3245
8643
Explanation:
The integers in the opposite diagonal are
1238
5628
3745
4643
After the reversing the integers in the opposite diagonal, the output matrix is
1234
5678
3245
8643

*/
#include<stdio.h>
void main()
{
    int n,i,j,k=0;
    printf("n = ");
    scanf("%d",&n);
    int a[n][n],b[n];
    printf("Enter the elements\n");
    for ( i = 1; i <=n; i++)
    {
        for (j = 0; j <n; j++)
        scanf("%d",&a[i][j]);   
    }
    for ( i = 1; i <=n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i+j==n)
            {
                b[k]=a[i][j];
                k+=1;
            }
        }
    }
    k-=1;
    printf("\n\n");
    for ( i = 1; i <=n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i+j==n)
            {
                a[i][j]=b[k];
                k--;
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}