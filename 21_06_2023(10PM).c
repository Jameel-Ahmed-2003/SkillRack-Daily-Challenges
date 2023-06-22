/*

The program must accept an integer matrix of size R*C and an integer k as the input. The program must print the desired
pattern as shown in the example input/output sections

Boundary Conditions:
1<= R,C,K <=100

Example input/output 1:
Input :
2 4 3
1 2 3 4
5 6 7 8

Output :
1 1 1 2 2 2 3 3 3 4 4 4
1 1 1 2 2 2 3 3 3 4 4 4
1 1 1 2 2 2 3 3 3 4 4 4
5 5 5 6 6 6 7 7 7 8 8 8
5 5 5 6 6 6 7 7 7 8 8 8
5 5 5 6 6 6 7 7 7 8 8 8

Example input/output 2:
Input :
2 3 2
7 9 3
4 5 6

Output :
7 7 9 9 3 3
7 7 9 9 3 3
4 4 5 5 6 6
4 4 5 5 6 6

*/
#include<stdio.h>
void main()
{
    int r,c,n,i,j,temp,count;
    scanf("%d %d %d",&r,&c,&n);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(count=0;count<n;count++)
        {
            for(temp=0;temp<c;temp++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d ",a[i][temp]);
                }
            }
            printf("\n");
        }
    }
}