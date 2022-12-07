#include <iostream>

double lenght;

int main()
{

    printf("input length = ");
    std::cin>>lenght;

    for (int i = 0; i < lenght; i++)
    {
        for (int j = 0; j < lenght; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    
    return 0;
}
