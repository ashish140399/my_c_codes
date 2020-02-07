#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void string_rev(int loc,char mystring[])
{
    if(loc>=0)
    {
        printf("%c",mystring[loc]);
        loc=loc-1;
        string_rev(loc,mystring);
    }

}


int main()
{
    int strl,loc;
    char mystring[80];
    scanf("%s",mystring);
    strl=strlen(mystring);
    loc=strl-1;
    string_rev(loc, mystring);
    return 0;
}


