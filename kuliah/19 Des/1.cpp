#include <iostream>

int num[5], sum;

int main()
{
    printf("Input 5 Numbers \n");

    for (int i = 0; i < 5; i++)
    {
        std::cin >> num[i];
        sum = sum + num[i];
    }

    std::cout << "summation :" << sum;

    return 0;
}
