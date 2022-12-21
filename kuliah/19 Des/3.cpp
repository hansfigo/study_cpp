#include <iostream>

int num[10] = {10, 30, 50, 20, 40, 70, 60, 80, 90, 100}, max, min;

int main(int argc, char const *argv[])
{

    max = num[0];
    min = num[0];

    for (int i = 0; i < 10; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }

        if (num[i] < min)
        {
            min = num[i];
        }
    }

    std::cout << "The biggest number is " << max << std::endl;
    std::cout << "The lowest number is " << min << std::endl;

    return 0;
}
