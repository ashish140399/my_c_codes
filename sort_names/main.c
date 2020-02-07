#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char myarray[20][40],temp[100];
    int i,n,d,m;
    printf("enter no of elements in array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",myarray[i]);
    }
    for(i=0;i<n;i++)
    {
        for(d=i;d<n-1;d++)
        {
            if(1)
            {
                int strcomp=strcmp(myarray[d],myarray[d+1]);
                if(strcomp==1){
                    strcpy(temp,myarray[d+1]);
                    strcpy(myarray[d+1],myarray[d]);
                    strcpy(myarray[d],temp);
                }
            }
        }
    }
    printf("sorted string is :\n");

    for( m=0;m<n;m++)
    {
        printf("%s\n",myarray[m]);
    }
    return 0;
}
