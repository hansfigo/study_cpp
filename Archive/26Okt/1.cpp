// Tugas No 1

// Claudio Hans Figo
// 22.12.2321

#include <iostream>

int lingkaran(float r)
{
    double x;
    x = 3.14 * r * r;
    return x;
}

int persegiPanjang(float p, float l)
{
    float x;
    x = p * l;
    return x;
}

int persegi(float s)
{
    float x;
    x = s * s;
    return x;
}

int segitiga(float a, float t)
{
    float x;
    x = 0.5 * a * t;
    return x;
}

int main()
{
    // deklarasi Variable
    int n;
    double luas_lingkaran, luas_persegiPanjang;
    double luas_persegi, luas_segitiga;
    float r, p, l, s;
    float a, t;
    char loop = 'y';

    while (loop == 'y')
    {
        std::cout << "Program Rumus Bangun Ruang" << std::endl;
        std::cout << "Masukan Nomor (1, 2, 3, 4) ";
        std::cin >> n;
        switch (n)
        {
        case 1:
            std::cout << "Masukan Jari-Jari" << std::endl;
            std::cin >> r;
            luas_lingkaran = lingkaran(r);
            std::cout << "Luas Lingkaran = " << luas_lingkaran << std::endl;
            break;
        case 2:
            std::cout << "Masukan Panjang dan Lebar" << std::endl;
            std::cin >> p >> l;
            luas_persegiPanjang = persegiPanjang(p, l);
            std::cout << "Luas Persegi Panjang = " << luas_persegiPanjang << std::endl;
            break;
        case 3:
            std::cout << "Masukan sisi" << std::endl;
            std::cin >> s;
            luas_persegi = persegi(s);
            std::cout << "Luas Persegi = " << luas_persegi << std::endl;
            break;
        case 4:
            std::cout << "Masukan Alas dan Tinggi" << std::endl;
            std::cin >> a >> t;
            luas_segitiga = segitiga(a, t);
            std::cout << "Luas Segitiga = " << luas_segitiga << std::endl;
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
