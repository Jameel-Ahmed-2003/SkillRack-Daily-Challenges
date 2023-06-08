/*

The program must accept N integers and a digit D as the input. The program must print all integers which are not having
the digit D as the output. If there is no such integer then the program must print -1 as the output
Example Input/Output 1 :

Input :
8 2
14 21 492 58 67 622 827 904
Output :
14 58 67 904
Explanantion:The integers which are not having the digit 2 are 14,58 67 and 904. So they are printed as the output.

Example Input/Output 2:
5 0
150 704 4505 4044 460
Output :
-1

*/
#include<stdio.h>
void main()
{
    int n,i,temp,search,j=0,r;
    printf("Number of elements : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("search\t\t   : ");
    scanf("%d",&search);
    printf("Enter %d elements  :\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(temp=a[i];temp!=0;temp/=10)
        {
            r=temp%10;
            if(r==search)
            {
                b[j]=a[i];
                j++;
            }
        }
        if(a[i]!=b[j-1])
        printf("%d ",a[i]);
    }
    if(j==i)
    printf("-1");
}