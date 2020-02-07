#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max=0;
    int array[20]={21,34,43,4,2,542,23,23};
    for(int i=0;i<8;i++)
    {
        if(array[i]>array[max])
        {
            max=i;
        }
    }
    printf("max is %d",array[max]);
    return 0;
}
