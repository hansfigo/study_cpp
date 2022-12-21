// Tugas Logika Algoritma Slide 21
// Claudio Hans Figo
// 22.12.2321

#include <iostream>

int main()
{
    int i = 0, sum = 0, amountData = 0;

    while (i <= 10)
    {
        std::cout << "num : " << i << std::endl;
        sum = sum + i;
        i += 2;
        amountData++;
    }
    std::cout << "sum is : " << sum << std::endl;
    std::cout << "The amount of data : " << amountData;

    return 0;
}
