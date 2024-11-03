#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myFoNu[3][3] = {
        {8, 2, 20},
        {5, 7, 77},
        {1, 10, 11}};

    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d,", myFoNu[i][j]);
        }

        printf("\n");
    }

    return 0;
}
