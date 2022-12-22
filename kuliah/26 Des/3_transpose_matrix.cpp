// Ryo-senpai
// 22 December 22

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Input Matrix\n");

    // adding num to array and summation
    double arr[5][5], sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == 0)
            {
                sum += arr[i][j];
            }
        }
    }
    printf("\nSum of 1st row is ");
    printf("%d", sum);

    return 0;
}
