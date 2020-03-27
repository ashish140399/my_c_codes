#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{

    int maxpos,i,strl,loc,locip=0;
    char mystring[80];
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

    }
    for( i=0;i<strl;i++)
    {
        if(myarrayloc[i]>myarrayloc[maxpos])
        {
            maxpos=i;
        }

    }
    if (myarrayloc[maxpos]==1){
        printf("no one is repeted");
    }else
    printf("maximum no of character is %c and repeated %d times \n",maxpos+97,myarrayloc[maxpos]);
    return 0;
}
