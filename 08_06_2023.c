/*

The program must accept an N*N matrix as input. The program must replace the digits in each integer by'*' if the integers
are divisible by its unit digit and print the output. Else the program must print the integer without any modifications 
as the output.
Boundary Condition(s):
1<=N<=100
1<=Each integer value <=10^5
Input Format :
The first line contain N integers each separated by a space.
Output Format :
The first N lines contain the modified matrix.
Example input/output 1:
Input :
4
163 122 84 97
155 246 192 124
44 97 57 167
46 36 278 281

Output:
163 *** ** 97
*** *** *** ***
** 97 57 167
46 ** 278 ***

Explanation:
The integers which are divisible by their unit digits are 122, 84, 155, 246, 192, 124, 44, 36 and 281.
The digits in these digits are replaced by '*' and printed.

*/
#include<stdio.h>
void main()
{
    int n,i,j,ud,temp;
    printf("n = ");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);   
    }
    printf("\nOutput\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            ud=a[i][j]%10;
            if(a[i][j]%ud==0)
            {
                for(temp=a[i][j];temp!=0;temp/=10)
                printf("*");
                printf(" ");
            }
            else
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}