// Ryo-senpai feat.UcupKencup & Zicahnass
// 22 December 22

#include <stdio.h>

int main()
{
    printf("Input a 3x3 matrix\n");

    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int x1 = 1, x2 = 1, x3 = 1;
    int y1 = 1, y2 = 1, y3 = 1;
    int i = 2;

    for (int i = 0; i < 3; i++)
    {
        x1 *= matrix[i][i];
        x2 *= i >= 2 ? matrix[i][i - 2] : matrix[i][i + 1];
        x3 *= i >= 1 ? matrix[i][i - 1] : matrix[i][i + 2];
    }

    for (int j = 0; j < 3; j++)
    {

        y1 *= matrix[j][i];
        y2 *= j >= 1 ? matrix[j][i + 1] : matrix[j][j];
        y3 *= j >= 2 ? matrix[j][j] : matrix[j][i - 1];
        i--;
    }

    int determinant = (x1) + (x2) + (x3) - ((y1) + (y2) + (y3));

    printf("\n%d\n ", determinant);

    return 0;
}

// int matrix[3][3] =
//     {
//         {1, 3, -2},
//         {5, 1,  4 },
//         {2, -3, 2}};