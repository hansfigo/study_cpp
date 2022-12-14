#include <iostream>

int space, rows;
void LeftPyramid(int rows);
void ReversePyramid(int rows);
void MidPyramid1(int rows);
void MidPyramid2(int rows);
char loop = 'y';

int main()
{

    do
    {
        printf("Enter Row :");
        std::cin >> rows;

        LeftPyramid(rows);

        for (int z = 0; z <= rows; z++)
        {
            printf("*");
        }
        printf("\n");

        ReversePyramid(rows);
        printf("\n");

        MidPyramid2(rows);
        printf("\n");

        printf("Ulang ?? (y/n)");
        std::cin >> loop;
    } while (loop == 'y');

    return 0;
}

void LeftPyramid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        printf("\n");
    }
}

void ReversePyramid(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j*i;
        }
        printf("\n");
    }
}

void MidPyramid1(int rows)
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

void MidPyramid2(int rows)
{
    int column = 2 * rows - 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (j >= rows - (i - 1) && j <= rows + (i - 1))
            {
                std::cout << j;
            }
            else
            {
                printf(" ");
            }
        }
        printf(" \n");
    }
}