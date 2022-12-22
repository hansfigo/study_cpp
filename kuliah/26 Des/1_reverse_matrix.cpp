// Ryo-senpai feat.UcupKencup
// 22 December

#include <stdio.h>

int main()
{
    int arr[5][5];
    printf("Input the matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nTranspose\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[0][i]);
        printf("%d\n", arr[1][i]);
    }

    return 0;
}
