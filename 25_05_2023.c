/*

C program to print the desired pattern as the output
SAMPLE
INPUT:1
n = 3
OUTPUT:1
1
2*3
4*5*6
SAMPLE
INPUT:2
n = 7
OUTPUT:2
1
2*3
4*5*6
7*8*9*10
11*12*13*14*15
16*17*18*19*20*21
22*23*24*25*26*27*28

*/
#include<stdio.h>
int n,i,j,k=1;
void main()
{
    printf("n = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;)
        {
            if(j<=i)
            {
                printf("%d",k);
                k+=1;
            }
            j++;
            if(j<=i)
            printf("*");
        }
        printf("\n");
    }
}