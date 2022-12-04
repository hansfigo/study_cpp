#include <iostream>

int space, rows;
void fibonnachi(int rows);
void Reversefibonnachi(int rows);
void pyramid(int rows);
char loop = 'y';

int main()
{

    do
    {
        printf("Enter Row :");
        std::cin >> rows;

        fibonnachi(rows);

        for (int z = 0; z <= rows; z++)
        {
            printf("*");
        }
        printf("\n");

        Reversefibonnachi(rows);
        printf("\n");

        pyramid(rows);
        printf("\n");

        printf("Ulang ?? (y/n)");
        std::cin >> loop;
    } while (loop == 'y');

    return 0;
}

void fibonnachi(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void Reversefibonnachi(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pyramid(int rows)
{
    for (int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            std::cout << "  ";
        }

        while (k != 2 * i - 1)
        {
            std::cout << "* ";
            ++k;
        }
        std::cout << std::endl;
    }
}