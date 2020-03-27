#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point
{
    char alpha;
    int count;
};

int main()
{
    int d,i,strl;
    struct Point datasaver;
    char temp_char;
    int temp_count=0;
    char mystring[80];
    scanf("%s",mystring);
    strl=strlen(mystring);
    datasaver.count=0;
    for(i=0;i<strl;i++)
    {
        temp_count=0;
        temp_char=mystring[i];
        for(d=0;d <strl ;d++)
        {
            if(mystring[d]==mystring[i])
            {
                temp_count++;;
            }
        }
        if(temp_count==1)
        {
            datasaver.count=temp_count;
            datasaver.alpha=temp_char;
            break;
        }
    }
    if(datasaver.count==1)
        printf("First non repeating character is %c having a count of %d\n",datasaver.alpha,datasaver.count);
    else
        printf("no maximum character");
    return 0;
}
