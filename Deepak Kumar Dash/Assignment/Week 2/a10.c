#include<stdio.h>
void main()
{
    char str[50];
    printf("Enter a string : ");
    scanf("%s", str);

    int alpha = 0, dig = 0, special = 0;
    int count = 0;
    //char ch = str[count];
    char ch;
    do
    {
        ch = str[count];
        if(ch >= 48 && ch <= 57)
        {
            dig ++;
        }
        else if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        {
            alpha ++;
        }
        else
        {
            special ++;
        }
        count ++;
    }while(ch);
    
    printf("Alphabets : %d\n", alpha);
    printf("Digits : %d\n", dig);
    printf("Special : %d\n", special);
    
}