#include <stdio.h>

int main()
{
    int i, o, j;
    
    i = 0;
    scanf("%d",&o);
    while (i < o)
    {
        j = 0;
        while (j <= i)
        {
            printf(".");
            j++;
        }
        printf("\n");
        i++;
    }
    while(i >= 0)
    {
        j = i;
        while (j >= 0)
        {
            printf(".");
            j--;
        }
        printf("\n");
        i--;
    }
    return 0;
}