#include <iostream>

int row;
void fibonnachi(int row);
void Reversefibonnachi(int row);
char loop = 'y';

int main()
{

    do
    {
        printf("Enter Row :");
        std::cin >> row;

        fibonnachi(row);

        for (int z = 0; z <= row; z++)
        {
            printf("*");
        }
        printf("\n");

        Reversefibonnachi(row);
        printf("\n");
        printf("Ulang ?? (y/n)");
        std::cin >> loop;
    } while (loop == 'y');

    return 0;
}

void fibonnachi(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void Reversefibonnachi(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = row; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}