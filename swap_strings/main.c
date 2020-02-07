#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char first[80],second[80],temp[80];
    printf("enter first string\n");
    scanf("%s",first);
    printf("enter second string\n");
    scanf("%s",second);
    strcpy(temp,first);
    strcpy(first,second);
    strcpy(second,temp);
    printf("First string is : %s\n",first);
    printf("First second is : %s",second);
    return 0;
}
