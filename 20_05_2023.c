/*

The program must accept an integer N as input and print the desired pattern as shown in the example as the output
Boundary Condition Condition(s):
1<=N<=50
Input Format:
The first line contains the value of N
Output Format:
The first N lines contain the desired pattern pattern as shown in the Example Input/Output section.
Example Input/Output 1:
Input :
4
Output :
1234
2**3
3**2
4321

Example Input/Output 2:
Input :
5
Output :
12345
2***4
3***3
4***2
54321

*/
#include<stdio.h>
void main()
{
    int n,i,j,k=0;
    printf("n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==1&&j!=0&&j!=n-1)
            printf("%d ",i+j);
            else if(i==n&&j!=0&&j!=n-1)
            printf("%d ",i-j);
            else if(j==0)
            printf("%d ",i+j);
            else if(j==n-1)
            printf("%d ",n-k++);
            else
            printf("* ");
        }
        printf("\n");
    }
}