#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{

    int i,strl,loc,locip=0,init=0;
    char mystring[80];
    char mystringtemp[80];
    static int myarrayloc[80];
    scanf("%s",mystring);
    strl=strlen(mystring);
    for(i=0;i<strl;i++)
    {
        loc = (int)mystring[i];
        loc=loc-97;
        locip=myarrayloc[loc];
        locip++;
        myarrayloc[loc]=locip;
        if(myarrayloc[loc]==1){
            mystringtemp[init]=(char)mystring[i];
            init++;
        }


    }
    for( i=0;mystringtemp[i]!='\0';i++)
    {
        printf("%c",mystringtemp[i]);

    }

    return 0;
}
