// Tugas Logika Algoritma Slide 21
// Claudio Hans Figo
// 22.12.2321

#include <iostream>

char item[20];
char isLoop;
float itemPrice, quantitiy, total, finalTotal, pay;

int main()
{
    do
    {
        printf("Input the goods name : ");
        std::cin >> item;
        printf("Quantitiy : ");
        std::cin >> quantitiy;
        printf("Price per item :  ");
        std::cin >> itemPrice;
        total = itemPrice * quantitiy;
        std::cout << "Total Price : " << total;
        std::cout << std::endl;

        finalTotal = finalTotal + total;
        std::cout << std::endl;

        std::cout << "Wanna input more data? ";
        std::cin >> isLoop;

    } while (isLoop == 'y' || isLoop == 'Y');

    std::cout << "Total : " << finalTotal << std::endl;
    std::cout << "Cash : ";
    std::cin >> pay;
    std::cout << std::endl;
    std::cout << "Change : " << finalTotal - pay;

    return 0;
}
