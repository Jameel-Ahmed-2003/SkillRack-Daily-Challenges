/*

The program must accept an integer N as the input. The program must print the desired pattern as shown in the example
Boundary Conditions
2<=N=<=100
Input Format :
The first line contains the integer N
Outuput Format :
The first N lines contain the desired pattern as shown in the example
Example Input/Output 1 :
Input :
4
Output :
1 2 3 4 3 2 1
* 2 3 4 3 2
* * 3 4 3
* * * 4
Example Input/Output 2 :
Input :
5
Output :
1 2 3 4 5 4 3 2 1
* 2 3 4 5 4 3 2
* * 3 4 5 4 3
* * * 4 5 4
* * * * 5

*/
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        printf("%d ",j);
        for(j=n;j>=i;j--)
        printf("%d ",j);
        printf("\n");
        for(k=1;k<=i&&i<n;k++)
        printf("* ");
    }
}