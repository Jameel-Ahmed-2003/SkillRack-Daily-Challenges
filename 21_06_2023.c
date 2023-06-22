/*

The program must accept N string values as the input. The program must print the alphabets with least ASCII values in
each string as the output.

Boundary conditions
1<=N<=100
1<=Length of s<=100

Input Format:
The first line contains N.
The second line contains N string values separated by a space.

Output Format:
The first line contains the alphabets with least ASCII values in each string separated by a space

Example input/output 1:
Input :
3
Output :
apple tree owl

Explanation :

In the string apple the alphabet with the least ASSCII value is a (97).
In the string tree the alphabet with the least ASCII value is e(101).
In the string owl the alphabet with the least ASCII value is l(108).
Hence the output is a e l

*/
#include <stdio.h>
#include <string.h>
#include<windows.h>
void main()
{
    int n,i,j,max;
    system("cls");
    printf("Number of strings : ");
    scanf("%d",&n);
    char strings[n][100];
    printf("Enter %d strings:\n",n);
    for (i = 0; i < n; i++)
    {
        printf("String %d: ", i + 1);
        fflush(stdin);
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }
    printf("\nEntered strings are:\n");
    for (i = 0; i < n; i++)
    printf("String %d: %s\n", i + 1, strings[i]);
    for(i=0;i<n;i++)
    {
        max=strings[i][0];
        for(j=0;strings[i][j]!='\0';j++)
        {
            if(max>(int)strings[i][j])
            max=(int)strings[i][j];
        }
        printf("%c ",max);
    }
}
