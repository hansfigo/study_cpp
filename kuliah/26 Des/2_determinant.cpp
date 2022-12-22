#include <stdio.h>

int main()
{
    printf("Input a 3x3 matrix\n");

    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", matrix[i][j]);
            printf("%d", matrix[i][j]);
        }
        
    }
    
    return 0;
}
