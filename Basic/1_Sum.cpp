#include <iostream>

int main(int argc, const char **argv)
{
    int a;
    int b;
    int result;

    std::cout << "Enter First Number" << std::endl;
    std::cin >> a;

    std::cout << "Enter Second Number" << std::endl;
    std::cin >> b;

    // Result Operation
    // Sum a and b
    result = a + b;
    std::cout << "Hasil = " << result << std::endl;
    return 0;
}