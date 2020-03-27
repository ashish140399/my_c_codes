#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,i,array[100],d,m,temp,rot_count;
    printf("Enter no of element in array");
    scanf("%d",&count);
    for (i=0;i<count;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("want to do array rotation by how much");
    scanf("%d",&rot_count);
    for(d=0;d<rot_count;d++)
    {
        temp=array[0];
        for(m=0;m<count-1;m++)
        {
            array[m]=array[m+1];
        }
        array[m]=temp;
    }
    printf("rotated array is \n");
    for (i=0;i<count;i++)
    {
        printf("%d \t",array[i]);
    }
    return 0;
}
