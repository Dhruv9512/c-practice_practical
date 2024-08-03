#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("\nEnter the second string: ");
    scanf("%s",str2);
    char str3[200];
    int len=0;
    for (int i = 0; str1[i]!= '\0'; i++)
    {
        str3[i]=str1[i];
        len++;
    }
    for (int i = 0 ,j = len; str2[i]!= '\0'; i++,j++)
    {
        str3[j]=str2[i];
    }
    printf("%s",str3);
}