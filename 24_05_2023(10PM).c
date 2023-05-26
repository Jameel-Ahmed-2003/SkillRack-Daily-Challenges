/*

The program must accept an integer N as the input. The program must find the binary representation of N. Then the
program must replace all the 1's by numbering them from 1 (left to right). Then the program must replace all the 0's
by numbering them from 1 (right to left). Finally, the program must print the modified binary representation of N as
the output.
Boundary Condition(s):
1<=N<=10^8
Input Format:
The first line contains the value of N.
Output Format:
The first line contains the modified binary representation of N.
Example Input/output 1:
Input:
34
Output: 143221
Explanation:
The binary representation of 34 is 100010
After replacing all the 1's by numbering them from 1 (left to right, the binary representation becomes 100020. After replacing all the Us by numbering them from 1 (right to left), the binary representation becomes 143221
Example Input/output 2:
Input:
90402
Output:
1112310987465543261


*/
#include<stdio.h>
int n,i,choice,size,count=1,count1=1;
void anynumber(int a[n],int n,int num)
{
    for(i=0;n!=0;i++)
    {
        a[i]=n%num;
        n/=num;
    }
    size=i;
    for(i=size-1;i>=0;i--)
    printf("%d",a[i]);
    printf("\n");
    for(i=size-1;i>=0;i--)
    {
        if(a[i]==1)
        {
            a[i]=count;
            count+=1;
        }
    }
    for(i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            a[i]=count1;
            count1+=1;
        }
    }
    for(i=size-1;i>=0;i--)
    printf("%d",a[i]);
}
void main()
{
    printf("Enter the decimal number\t");
    scanf("%d",&n);
    int a[n],n1=n;
    anynumber(a,n1,2);
}