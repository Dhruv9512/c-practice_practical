#include<stdio.h>

char *decimal_to_hex(int n){
    int i=0;
    static char ans[200];

    while (n!=0)
    {
        int temp=n%16;

        if (temp>=1&&temp<=9)
        {
            ans[i]=temp+48;
        }
        else if(temp>=10&&temp<=15){
            ans[i]=temp+55;
        }
        
        n/=16;
        i++;
    }

    return &ans[0];
    
}
int main()
{
    int n;
    printf("Enter a decimal number:- ");
    scanf("%d",&n);
    

    char *hex=decimal_to_hex(n);
    
   

    printf("%s",hex);
return 0;
}