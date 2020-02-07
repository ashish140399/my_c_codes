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
    int maxpos=0,d,i,strl,searchchar,dscount=0;
    struct Point datasaver[80];
    char mystring[80];
    scanf("%s",mystring);
    strl=strlen(mystring);
    for(i=0,searchchar=2;i<strl;i++)
    {
        for(d=0;d <dscount ;d++)
        {
            if(datasaver[d].alpha==mystring[i])
            {
                searchchar =0;
            }
            if(searchchar==0)
                datasaver[d].count=datasaver[d].count+1;

        }
        if(searchchar==2)
        {
            datasaver[dscount].alpha=mystring[i];
            datasaver[d].count=1;
            dscount++;

        }
    }
    for( i=0;i<dscount;i++)
    {
        if(datasaver[i].count>datasaver[maxpos].count)
        {
            maxpos=i;
        }
    }
    if(datasaver[maxpos].count>1)
        printf("maximum no of character is %c having a count of %d\n",datasaver[maxpos].alpha,datasaver[maxpos].count);
    else
        printf("no maximum character");
    return 0;
}
