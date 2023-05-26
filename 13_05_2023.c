/*

The program must accept three integers A, B and C as the input the program must print VES if can be obtained by repeatedly
subtracting from A (that is A-B) as the output. Else the program must print NO as the output.
Boundary Condition(s):
1<=A,B,C<=1000
Input Format :
The first line contains the values A, B and C separated by a space
Output Format :
The fast line contains either YES or NO
Example Input/output 1
Input:
71 7 15
Output:
YES
Explanation
71-7=64
64-7=37
57-7=50
50-7=43
43-7=36
36-7=29
29-7=22
22-7=15
Here 15 is obtained by repeatedly subtracting 7 from 71, Hence the output is YES
Example Input/output 2:
Input:
89 19 10
Output:
YES

*/
#include<stdio.h>
#include<math.h>
#define SIZE 100
void main()
{
    int rem,n,d,a[SIZE],i=0,number;
    printf("n= ");
    scanf("%d",&n);
    printf("d= ");
    scanf("%d",&d);
    while(n!=0)
    {
        rem=n%10;
        printf("rem = %d\n",rem);
        a[i]=rem+d;
        printf("%d\n",a[i]);
        n/=10;
        i++;
    }
    printf("\n\n");
    int N=i;
    for(i=N-1;i>-1;i--)
    printf("%d",a[i]);
}