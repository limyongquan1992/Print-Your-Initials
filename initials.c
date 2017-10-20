#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    // ask user for input
    string s = get_string();
    
    // check if string input is valid
    if (s != NULL)
    {
        // check and print the 1st character of string
        if (s[0] != ' ')
        {
            printf("%c", toupper(s[0]));
        }
        
        // iterate over the characters in string input
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            // look for the space character in the string
            if (s[i] == ' ')
            {
                // check if the character after space is a letter
                if (s[i+1] != ' ' && i != strlen(s)-1)
                {
                    // print the letter after space in upper case
                    printf("%c", toupper(s[i+1]));
                }
                
            }
        }
        printf("\n");
    }
}