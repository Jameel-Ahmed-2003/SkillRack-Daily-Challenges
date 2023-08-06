/* Write  C program to input an integer and replace every occurence of the unit digit by 0 and print the resultant as output

Example 1:
Input :1021
Output :20

Explanation : Since the unit digit in 1021 is 1. Replace every occurence of 1 by 0, then we get 0020. Hence 20 is printed as output.

Example 2:
Input :20220
Output :0


*/
#include <stdio.h>
void main()
{
    int i, n, length;
    scanf("%d%n", &n, &length);
    int a[length];
    for (i = length - 1; i >= 0; i--, n /= 10)
        a[i] = n % 10;
    for (i = 0; i < length; i++)
    {
        if (a[i] == a[length - 1])
            a[i] = 0;
    }
    for (i = 0; i < length; i++)
        n = n * 10 + a[i];
    printf("%d", n);
}