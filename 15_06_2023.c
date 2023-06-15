/*

The program must accept two string values S1 and S2 as the input. Then the program must print the first character in S1
second character in S2 third character in S1 and so on.

Note : Both the string values are always having the same length

Boundary Conditions:
1<=Length of S1 and S2 <=100

Input Format :
The first line contains the string S1.
The second line contains the string S2.
Output Format :
Example input/output 1:
Input :
lemon
apple

Output :
lpmln

Explanation
The first character in lemon is l.
The second character in apple is p.
The third character in lemon is m.
The fourth character in apple is l.
The fifth character in lemon is n.

Example input/output 2:
Input :
copy
past

Output :
capt

*/
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[1000],str2[1000];
    printf("Enter two strings\n");
    fgets(str1,1000,stdin);
    fgets(str2,1000,stdin);
    int l1=strlen(str1),l2=strlen(str2);
    printf("length of string 1 is %d and string 2 is %d\n",l1,l2);
    str1[l1],str2[l2];
    for(int i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
    {
        if(i%2==0)
        printf("%c\n",str1[i]);
        else
        printf("%c\n",str2[i]);
    }
}