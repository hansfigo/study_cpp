// Tugas No 1

// Claudio Hans Figo
// 22.12.2321

#include<iostream>

int main()
{
    // deklarasi Variable
    int n;
    char loop = 'y';

    while (loop == 'y')
    {
        std::cout << "Program Rumus Bangun Ruang" << std::endl;
        std::cout << "Masukan Nomor (1, 2, 3, 4) ";
        std::cin >> n;
        switch (n)
        {
        case 1:
            std::cout << "L = 3,14 x r x r" << std::endl;
            break;
        case 2:
            std::cout << "L = p x l" << std::endl;
            break;
        case 3:
            std::cout << "L = s x s" << std::endl;
            break;
        case 4:
            std::cout << "L = 1/2 x a x t" << std::endl;
            break;
        default:
            std::cout << "error" << std::endl;
            break;
        }
        std::cout << "Ulang ? (Y/N)" << std::endl;
        std::cin >> loop;
    }
    return 0;
}
