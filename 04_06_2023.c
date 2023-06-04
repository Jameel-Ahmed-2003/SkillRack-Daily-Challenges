/*

The program must accept an integer matrix of size R*C as input. The program must reverse the elements in the
even rows in the matrix. Then the program must reverse the elements in the odd columns in the matrix.Finally
the program must print the modified matrix as output.
Boundary Condition(s):
2<=R C<=50

Input:
3 4
96 53 51 15
23 11 72 68
77 53 74 47

Output:
77 53 74 15
68 72 11 23
96 53 51 47
*/
#include<stdio.h>
void main()
{
    int row,col,i,j,k,temp;
    printf("row : ");
    scanf("%d",&row);
    printf("column : ");
    scanf("%d",&col);
    int a[row][col];
    printf("Enter Matrix elements\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        scanf("%d",&a[i][j]);
    }
    printf("\n\nResultant matrix\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0,k=col-1;j<col;j++,k--)
        {
            if(k>=col/2 && i%2!=0)
            {
                temp = a[i][j];
                a[i][j]=a[i][k];
                a[i][k]=temp;
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    for(i=0,k=row-1;i<row;i++,k--)
    {
        for(j=0;j<col;j++)
        {
            if(j%2==0&&k>=row/2)
            {
                temp=a[i][j];
                a[i][j]=a[k][j];
                a[k][j]=temp;
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}