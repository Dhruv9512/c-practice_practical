#include <stdio.h>
int main()
{
    char str[100];
    int count=0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    //scanf("%s",str);
    char *ptr=str; //pointer str points to str
    for (int i = 0; i < 100; i++)
    {
        if (*ptr=='\0')
            break;
        count++;
        ptr++;
    }
    printf("The length of String is : %d",count);
    return 0;
}