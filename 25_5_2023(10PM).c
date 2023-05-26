/*

The program must accept N integers as the input where N is even. The program must print the sum of the 1 and N Integer, 2nd and
(N-1)th integer, 3rd and (N-2 integer and so on,
Boundary Condition(s):
2<=N=10^5
Input Format: The first line contains the integer N. The second line contains N integers separated by space(s).
Output Format:
The first line contains the sum of the 1 and N integer, 2nd and (N 1) integer, 3 and (N2th integer and so on
Example Input/output 1:
Input:
10
1 3 5 6 10 2 4 5 50 100
Output:
101 93 10 10 12
Explanation:
The 15 and 10th integers are 1 and 100 and their sum value is 101. So 101 is printed.
The 2nd and 9th integers are 3 and 90 and their sum value is 93. So 93 is printed.
The 4th and 7th integers are t and 4 and their sum value is 10. So 10 is printed.
The 5th and 6th integers are 10 and 2 and their sum value is 12. So 12 printed.
The 3 and 8 integers are 5 and 5 and their sum value is 10.50 10 is printed.
Example Input/output 2:
Input:
6
5 20 15 25 10 45
Output:
50 30 40

*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("n = ");
    scanf("%d",&n);
    int a[n],b[n/2];
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0,i=1;j<n/2;j++,i++)
    {
        b[j]=a[j]+a[n-i];
        printf("%d ",b[j]);
    }
}