/*

The program must accept 2character matrices A and B are of same size N*N as the input. The program must print the matrix
which has the maximum number of vowels as the output. If both matrices have the same number of vowels then the program
must print the matrix A as the output.
Boundary Condition(s):
2<=N<=50
Input Format:
The first line contains the integer N.
The next line contains n characters separated by space(s)
The remaining N lines contians N characters(matrix B) each separated by space(s).

Output Format:
The first N lines contain N characters separated by space(s).

Example Input/Output 1:
Input :
3
Q k e
v B a
U I T
i Y u
t z o
w a E

Output :
i Y u
t z 0
w a E

Example Input/Output 2:
Input :
4
a s d g
q w e t
i j h k
x c v u
o f g f
u r t y
l k j i
f d s a

Output :
a s d g
q w e t
i j h k
x c v u
*/
#include<stdio.h>
void main()
{
    int n,i,j,k,x,counta=0,countb=0;
    printf("n = ");
    scanf("%d",&n);
    char a[n][n],b[n][n],c[10]={"aeiouAEIOU"};
    for(k=1;k<=2;k++)
    {
        if(k==1)
        printf("Enter 1st matrix\n");
        else
        printf("Enter 2nd matrix\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(k==1)
                {
                    scanf(" %c",&a[i][j]);
                    for(x=0;x<10;x++)
                    {
                        if(c[x]==a[i][j])
                        counta+=1;
                    }
                }
                else
                {
                    scanf(" %c",&b[i][j]);
                    for(x=0;x<10;x+=1)
                    {
                        if(c[x]==b[i][j])
                        countb+=1;
                    }
                }
            }
        }
    }
    printf("1st matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%c ",a[i][j]);
        printf("\n");
    }
    printf("2nd matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%c ",b[i][j]);
        printf("\n");
    }
    printf("\n");
    if(counta>=countb)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            printf("%c ",a[i][j]);
            printf("\n");
        }
    }
    else if(countb>counta)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            printf("%c ",b[i][j]);
            printf("\n");
        }
    }
}