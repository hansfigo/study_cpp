#include <iostream>

int main()
{
    int x = 5;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
