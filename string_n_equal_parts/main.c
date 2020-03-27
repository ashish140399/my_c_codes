#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int d,i,strl,part,array_part=0,num;
    char mystring[80];
    scanf("%s",mystring);
    strl=strlen(mystring);
    printf("enter no you want to divide string in\n");
    scanf("%d",&num);
    if(strl%num==0)
    {
        part=strl/num;
        int part_temp=part;
        for(i=0;i<num;i++)
        {
            for(d=array_part;d<=part-1;d++)
            {
                printf("%c",mystring[d]);
            }
            array_part=array_part+part_temp;
            part=part+part_temp;
            printf("\n");
        }
    }
    else
    {
        printf("string cannot be divided in equal parts");
    }
    return 0;
}
