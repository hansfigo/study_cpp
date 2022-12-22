//ryo-senpai 22 December
#include <iostream>

const int arr[5][5] = {{1, 2, 3}, {4, 5, 6}};

int main()
{
    printf("Input the matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        printf("\n");
    }

    printf("\nTranspose\n");
    for (int i = 0; i < 3; i++)
    {
        std::cout << arr[0][i] << " " << arr[1][i] << std::endl;
    }

    return 0;
}
