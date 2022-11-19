#include <iostream>
using namespace std;

int main(int argc, const char** argv) {
    int a;
    int b;
    int hasil;

    std::cout << "Masukan Angka Pertama" << std::endl;
    cin >> a;

    std::cout << "Masukan Angka Kedua" << std::endl;
    cin >> b;

    hasil = a+b;
    std::cout << "Hasil = " << hasil << std::endl;
    return 0;
}