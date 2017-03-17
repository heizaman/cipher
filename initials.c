#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main()
{
    
    int i,n;
    char c;
    char *name;
    
    //Gets user input as a string
    name = GetString();
    
    //Prints the first letter of the first word
    c = toupper(name[0]);
    printf("%c",c);   
    
    //Checks the condition and prints the rest of first letters
    for(i=0, n=strlen(name); i<n; i++)
    {
        if(name[i]==' ')
        {
            c = toupper(name[i+1]);
            printf("%c",c);
        }
    }
    
    //Moves the cursor to next line
    printf("\n");
    
return 0;

}



//Without using toupper() function -

/*

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{

    int i,n;
    char *name;
    
    //Gets user input as a string
    name = GetString();
    
    //Prints the first letter
    if(name[0]<97)
        {
            printf("%c",name[0]);   
        }
    else
        {
            printf("%c",name[0]-'a'+'A');
        }
    
    //Checks the condition and prints the rest of first letters
    for(i=0, n=strlen(name); i<n; i++)
    {
        if(name[i]==' ')
        {
            if(name[i+1]<97)
            {
                printf("%c",name[i+1]);   
            }
            else
            {
                printf("%c",name[i+1]-'a'+'A');
            }
        }
    }
    
    //Moves the cursor to next line
    printf("\n");
    
return 0;

}

*/
