#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    if (argc == 2)
    {
        int key = atoi(argv[1]);
        
        string text = GetString();
        
        for (int i = 0, n = strlen(text); i < n; i++)
        {
            
            if(isupper(text[i]))
            {
                int upper = ((text[i]) - 65 );
                upper = (upper + key )% 26;
                upper = upper + 65;
                printf ("%c",upper); 
            }
            else if (islower(text[i]))
            {
                int lower = ((text[i]) - 97 );
                lower = (lower + key )% 26;
                lower = lower + 97;
                printf ("%c",lower);
            }
            else
            {
              printf ("%c", text[i]); 
            }
        } 
        
            printf ("\n"); 
    } 
      
    else
    {  
      printf ("enter a key\n"); 
      return 1;
    }
}
