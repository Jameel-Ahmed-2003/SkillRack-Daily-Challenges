/*

The program must accept a string value S as the input. The program must print the characters which are present at the odd
positions if the count of vowels in S is odd. Else the program must print the characters which are present at the even
positions as the output. If there is no vowels in the string S then the program must print -1 as the output.

Boundary Conditions
2<=Length of S <=100

Input Format:
The first line contains the string S
Output Format:
The first line contains either the characters which are present at the odd or even positions or -1
Example input/output 1:
Input :
apple
Output :
pl

Explanation :
In the word apple there are two vowels. Here the count 2 is even.
Hence the characters at the even positions are printed.
Hence the output is pl

Example input/output 2:
Input :
rhythm
Output :
-1

*/
#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int count=0;
    printf("STRING : ");
    fgets(str,20,stdin);
    int l1=strlen(str),i;
    for(i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        count++;
    }
    if(count==0)
    printf("-1");
    else
    {
        for(i=0;str[i]!='\0';i++)
        {
            if(count%2==0)
            printf("%c",str[i+=1]);
            else
            printf("%c",str[i]);
        }
    }
}