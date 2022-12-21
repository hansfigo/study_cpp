//Tugas No 2

// Claudio Hans Figo
//22.12.2321

#include<iostream>
int main() {
    //Deklarasi Variable
    const int a = 5;
    const int b = 10;
    const int c = 13;
    float jumlah;
    float rata_rata;

    //Masuk Operasi
    jumlah = a+b+c;
    rata_rata = jumlah/3;

    //tampilkan output rata rata
    std::cout<<"Rata-rata = "<<rata_rata;

    return 0;
}