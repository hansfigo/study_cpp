#include <iostream>

int main()
{
    //deklarasi variabel
    float a,b,hasil;
    char operasi;

    std::cout<<"Kalkulator "<<'\n'<<'\n';

    std::cout<<"Input Angka Pertama : ";
    std::cin>>a;
    std::cout<<"Input Angka Kedua : ";
    std::cin>>b;
    std::cout<<"Masukan Operasi : ";
    std::cin>>operasi;

    
    switch (operasi)
    {
    case '-':
        hasil = a-b;
        std::cout << "hasil" << hasil << std::endl;
        break;
    
    default:
        break;
    }
    

    return 0;
}
