#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num[7] = {23, 4, 67, -8, 90, 54, 21};
    int aux = 0;

    for (int i = 6; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (num[j] < num[j + 1])
            {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }

    for (int i = 6; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }

    return 0;
}