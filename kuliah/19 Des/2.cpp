#include <iostream>

int num[5];

int main(int argc, char const *argv[])
{

    // INPUT DATA TO NUM ARR
    printf("Input 5 Numbers \n");
    for (int i = 0; i < 5; i++)
    {
        std::cin >> num[i];
    }

    printf("\n");

    // OUTPUT NUM ARR
    printf("Input 5 Numbers \n");
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << ":" << num[i] << std::endl;
    }

    printf("\n");

    // REVERSE DATA FROM NUM ARR
    printf("The Reverse Number \n");
    for (int i = 4; i >= 0; i--)
    {
        std::cout << i << ":" << num[i] << std::endl;
    }

    return 0;
}
