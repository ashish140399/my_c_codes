#include<stdio.h>
#include<string.h>
int main()
{  int i,l,t,c=0;
    char myarray[80];
    printf("enter the strting\n");
    scanf("%s",&myarray);
    l=strlen(myarray);
    for(i=0,t=l-1;i<=t;i++,t--)
    {
        if(myarray[i]!=myarray[t])
             {c=1;
               break;
             }

    }
    if(c==1)
        printf("string is not palindromic");
    else
        printf("string is palindromic");
}
