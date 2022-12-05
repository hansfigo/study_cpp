// Tugas No 2

// Claudio Hans Figo
// 22.12.2321

#include <iostream>

int penjumlahan(int a, int b)
{
    float x;
    x = a + b;
    return x;
}

int pengurangan(int a, int b)
{
    float x;
    x = a - b;
    return x;
}

int perkalian(int a, int b)
{
    float x;
    x = a * b;
    return x;
}

int pembagian(int a, int b)
{
    float x;
    x = a / b;
    return x;
}

int main()
{
    // deklarasi variabel
    float a, b;
    float hasil;
    char OP;
    char loop = 'y';

    while (loop == 'y')
    {
        std::cout << "Program Kalkulator Simple" << std::endl;
        std::cout << "---------------------------------------" << std::endl;
        std::cout << "Pilih Operator ( +, -, *, /)" << '\n';
        std::cin >> OP;

        std::cout << "Masukan Angka" << '\n';
        std::cin >> a >> b;

        switch (OP)
        {
        case '+':
            hasil = penjumlahan(a, b);
            std::cout << "Hasil Penjumlahan = " << hasil << std::endl;
            break;
        case '-':
            hasil = pengurangan(a, b);
            std::cout << "Hasil Pengurangan = " << hasil << std::endl;
            break;
        case '*':
            perkalian(a, b);
            std::cout << "Hasil Perkalian = " << hasil << std::endl;
            break;
        case '/':
            pembagian(a, b);
            std::cout << "Hasil Pembagian = " << hasil << std::endl;
            break;

        default:
            break;
        }
        std::cout << "Ulang? (Y/N)" << std::endl;
        std::cin >> loop;
    }
    return 0;
}
