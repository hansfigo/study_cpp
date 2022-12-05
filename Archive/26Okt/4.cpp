// Tugas No 4

// Claudio Hans Figo
// 22.12.2321

#include <iostream>

int diskon(double total_belanja, double jml_diskon)
{
    double x = total_belanja * jml_diskon;
    double final = total_belanja - x;
    return final;
}

int main()
{
    double hasil;
    float total_belanja;
    char loop = 'y';

    while (loop == 'y')
    {
        std::cout << "Program Kalkulator Diskon" << std::endl;
        std::cout << "---------------------------------------" << std::endl;
        std::cout << "Masukan total belanja anda: " << '\n';
        std::cin >> total_belanja;

        if (total_belanja >= 150000 && total_belanja <= 300000)
        {
            double jml_diskon = 0.1;
            hasil = diskon(total_belanja, jml_diskon);
            std::cout << "Anda mendapat diskon 10%" << '\n';
            std::cout << "Total belanja anda =" << hasil << std::endl;
        }
        else if (total_belanja >= 300000)
        {
            double jml_diskon = 0.2;
            hasil = diskon(total_belanja, jml_diskon);
            std::cout << "Anda mendapat diskon 20%" << '\n';
            std::cout << "Total belanja anda =" << hasil << std::endl;
        }
        else
        {
            float total_akhir = total_belanja;
            std::cout << "Anda tidak mendapatkan diskon" << '\n';
            std::cout << "Total belanja anda =" << total_akhir << std::endl;
        }

        std::cout << "Ulang? (Y/N)" << std::endl;
        std::cin >> loop;
    }
    return 0;
}
