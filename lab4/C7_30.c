// WAP to replace lowercase characters by uppercase & vice-versa in a user 
//specified string.

#include <stdio.h>

void main()
{
    char str[100];

    printf("Enter a string : ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("String after changing case : %s", str);
}