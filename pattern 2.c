# Problem-solving
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
            {
                printf("%d ",(j+i)-1);
            }
        }

        printf("\n");
    }

}
