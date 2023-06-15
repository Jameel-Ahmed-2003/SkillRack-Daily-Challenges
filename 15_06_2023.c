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