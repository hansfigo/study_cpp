#include <iostream>
#include <string>

using namespace std;

string name[100];
string nim[100];
string namaMatkul[100][100];
int nilaiMatkul[100][100];
int banyakMatkul[200];
int mainIndex = 0;
int banyakData;
int loop = 0;
int mainMenu;

void addData(int banyakData);
void addMatkul(int banyakData);
void showData();

int main()
{

    while (loop == 0)
    {
        std::cout << "PILIH MENU : " << std::endl;
        std::cout << "1.Input Data " << std::endl;
        std::cout << "2.Output Data " << std::endl;
        std::cout << "3.Keluar " << std::endl;
        std::cin >> mainMenu;

        // USER INPUT DATA
        if (mainMenu == 1)
        {
            printf("Input Banyak Data = ");
            cin >> banyakData;
            addData(banyakData);
        }

        // USER SHOW DATA
        else if (mainMenu == 2)
        {
            showData();
        }

        // USER EXIT PROGRAM
        else if (mainMenu == 3)
        {
            return 0;
        }
        else
        {
            printf("error\n");
        }

        printf("Input 0 untuk kembali ke main menu\n");
        std::cin >> loop;
    }

    return 0;
}

void addData(int banyakData)
{
    for (size_t i = 0; i < banyakData; i++)
    {
        cin.ignore();
        cout << mainIndex + 1;
        printf(" Masukan Nama = ");
        getline(cin, name[mainIndex]);

        printf("Masukan NIM = ");
        getline(cin, nim[mainIndex]);

        printf("Masukan Banyak Matkul = ");
        cin >> banyakData;
        banyakMatkul[mainIndex] = banyakData;
        addMatkul(banyakData);
        mainIndex++;
    }
}

void addMatkul(int banyakData)
{
    for (size_t i = 0; i < banyakData; i++)
    {
        cin.ignore();
        printf("Nama Matkul = ");
        getline(cin, namaMatkul[mainIndex][i]);

        printf("Nilai = ");
        cin >> nilaiMatkul[mainIndex][i];
    }
}

void showData()
{
    // int nilaiTop  = 0;
    // string nameTop ;
    // printf("Output Data Data \n");
    // for (int i = 0; i < mainIndex; i++)
    // {
    //     cout << i + 1;
    //     std::cout << " Nama : " << name[i] << std::endl;
    //     std::cout << "NIM : " << nim[i] << std::endl
    //               << "\n";
    //     std::cout << " -------------------------------------------- " << std::endl;
    //     std::cout << " MATKUL" << std::endl;
    //     std::cout << " -------------------------------------------- " << std::endl;

    //     for (int j = 0; j < banyakMatkul[i]; j++)
    //     {
    //         std::cout << " Matkul : " << namaMatkul[i][j] << endl;
    //         std::cout << " Nilai : " << nilaiMatkul[i][j] << endl;

    //         if (nilaiMatkul[i][j] > nilaiTop)
    //         {
    //             nameTop = name[i];
    //             nilaiTop = nilaiMatkul[i][j];
    //         }
    //     }
    // }
    // std::cout << " -------------------------------------------- " << std::endl;
    // cout << "Nilai Tertinggi "  << endl;
    // cout << "Nama = " << nameTop << endl;
    // cout << "Nilai = " << nilaiTop << endl;
}