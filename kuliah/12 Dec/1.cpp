// Tugas Logika Algoritma 
// Slide 19
// Claudio Hans Figo
// 22.12.2321

#include <iostream>

int num, sum;

int main()
{
    do
    {
        std::cout << "Input number : ";
        std::cin >> num;
        sum = sum + num;
    } while (num != 0);

    std::cout << "Sum :" << sum;

    return 0;
}
