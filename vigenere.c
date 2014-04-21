#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    
     if(argc == 2)
     {
        
            for (int i = 0, n = strlen(argv[1]); i < n; i++)
            {
                if (!isalpha(argv[1][i]))
                {
                    printf("Enter an alpha key");
                    return 1;
                }
            }
            
            string text = GetString();
            int j = 0; 
            
            for (int i = 0, n = strlen(text); i < n; i++)
            {
                
                if(isupper(text[i]))
                {
                    int upper = ((((text[i]) - 65) + (toupper(argv[1][j]) - 65)) % 26) + 65;
                    printf ("%c",upper); 
                    j++;
                }
                else if(islower(text[i]))
                {
                    int lower = ((((text[i]) - 97) + (tolower(argv[1][j]) - 97)) % 26) + 97;
                    printf ("%c",lower); 
                    j++;
                }  
                else
                {
                    printf("%c",text[i]);
                }
               
                if ( j >= strlen(argv[1]))
                {
                  j = 0;
                } 
             }
             
            printf ("\n");
        }
        else
        {
            printf("Enter a key");
            return 1;
        }
}
