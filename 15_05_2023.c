/*

The program must accept N integers as the input. The program must print the output based on the following conditions,
-If the number of even integers is greater than the number of odd integers then the program must print all the even
integers in the reverse order followed by all the odd integers in the given order.
-If the number of even integers is less than the number of odd integers then the program must print all the odd integers
in the reverse order followed by all the even integers in the given order. -If the number of even integers is equal to
the number of odd integers then the program must print all the integers in the reverse order.
Boundary Condition(s):
1<=N<=100
-10^8<= Each integer value <= 10^8
Input Format:
The first line contains the value of N
The second line contains N integers separated by space(s).
Output Format:
The first line contains either N integers separated by a space or -1 based on the given conditions.
Example Input/output 1:
Input :
7
21 14 11 13 29 24 15
Output:
15 29 13 11 21 14 24
Explanation
The number of odd integers is 5.
The number of even integers is 2. Here 5 is greater than 2, so all the odd integers are printed in reverse order followed by all the even integers in the given order.
Hence the output is 15 29 13 11 21 1424
Example Input/output 2:
Input
4
-12 45 78 -23
Output: -23 78 45 -12


*/
#include<stdio.h>
void main()
{
    int n,i,n_even,j=0,n_odd,k=0,even[100],odd[100];
    printf("n= ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        even[j++]=a[i];
        else
        odd[k++]=a[i];
    }
    n_even=j--;
    printf("n_even= %d\n",n_even);
    n_odd=k--;
    printf("n_odd = %d\n",n_odd);
    if(j==k)
    {
        for(i=n-1;i>-1;i--)
        printf("%d ",a[i]);
    }
    else if(j>k)
    {
        for(j=n_even-1;j>-1;j--)
        printf("%d ",even[j]);
        for(k=0;k<n_odd;k++)
        printf("%d ",odd[k]);
    }
    else
    {
        for(k=n_odd-1;k>-1;k--)
        printf("%d ",odd[k]);
        for(j=0;j<n_even;j++)
        printf("%d ",even[j]);
    }
    printf("\n\n");
}