#include<stdio.h>
void main()
{
    char word[9] = "anything";
    int vow = 0, con = 0;

    for(int i = 0; i < 9 - 1; i ++)
    {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            vow ++;
        }
        else
        {
            con ++;
        }
    }
    printf("Vowels : %d\nConsonants : %d\n",vow, con);
}