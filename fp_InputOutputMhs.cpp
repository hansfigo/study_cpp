#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

string name[100];
string nim[100];
string prodi[100];
int mainIndex = 0; //untuk mengetahui jumlah total data Mhs yang dimasukan 
int banyakData;
int user;

void addData();
void showData();

int main()
{

    while (user != '3')//Selama input user tidak = 3 maka akan menjalankan kode blok berikut
    {
        user = ' ';
        system("cls");//clear Screen

        cout << "PROGRAM DATA MAHASISWA" << endl;
        cout << "\nPILIH MENU : " << endl;
        cout << "1.Input Data " << endl;
        cout << "2.Output Data " << endl;
        cout << "3.Keluar " << endl;
        user = _getch();// getch merupakan fungsi untuk menangkap character input dari keyboard

        // Jika input user 1 maka menambahkan Data
        if (user == '1')
        {
            addData();// Panggil Fungsi addData, untuk menambahkan data mahasiswa
        }
        // Jika input user 2 maka menampilkan Data
        else if (user == '2')
        {
            showData();// Panggil Fungsi showData, untuk menampilkan data mahasiswa
        }
        else
        {
            system("cls");
        }
    }

    return 0;
}

void addData()
{
    system("cls");
           
    cout << "Input Banyak Data : ";
    cin >> banyakData; // User Menginputkan jumlah data

    cin.ignore();

    system("cls");
    cout << "Masukan Data\n";

    for (int i = 0; i < banyakData; i++)// for loop sebanyak banyakData
    {
        cout << "\nData ke\t:" << mainIndex + 1 << endl;
        cout << "Masukan Nama\t:";
        getline(cin, name[mainIndex]);

        cout << "Masukan NIM\t:";
        getline(cin, nim[mainIndex]);

        cout << "Masukan Prodi\t:";
        getline(cin, prodi[mainIndex]);

        cout << "\n\n";

        mainIndex++;
    }
    system("cls");
    cout << "+"<<banyakData<<" Data telah ditambahkan !!";
    Sleep(2000);
}

void showData()
{

    while (user != 'Q')
    {
        user = ' ';
        system("cls");
        for (int i = 0; i < banyakData; i++)
        {

            cout << "Data ke\t:" << i + 1 << endl;
            cout << "  Nama\t:" << name[i];
            cout << "\n  NIM\t:" << nim[i];
            cout << "\n  Prodi\t:" << prodi[i] << "\n\n";
        }
        cout << "Tekan 'Q' untuk kembali ke Menu Utama";

        user = _getch();// tangkap input keyboard
        user = toupper(user);// tconvert input ke uppercase
    }
}