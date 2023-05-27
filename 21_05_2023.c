/*

The program must accept a string $ as the input. The program must print the desired pattern as shown in the Example Input/output section.
Note: The length of 5 is always odd.
Boundary Condition(s);
1 <= Length of 5 <= 100
Input Format:
The first line contains the string S.
Output Format:
The list of lines containing the desired pattern as shown in the Example Input/output section.
Example Input/output 1:
Input:
apple
Output:
apple
*ppl*
**p**
Example Input/output 2:
Input:
program
Output:
program
*rogra
**ogr**
***g***

*/
#include<string.h>
#include<stdio.h>
void main()
{
    int i,j;
    int count;
    char a[100];
    scanf("%[^\n]s",&a);
    int n=strlen(a);
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(j>=i&&j<n-i)
            {
                printf("%c",a[j]);
                count++;
            }
            else
            printf("*");
        }
        if(count==1)
        goto label;
        else
        printf("\n");
    }
    label:
    ;
}