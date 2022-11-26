#include <iostream>
#include <string>

using namespace std;

string name[1000];
string nim[1000];
int mainIndex = 0;
int banyakData;
int loop = 0;
int mainMenu;

void addData(int banyakData);
void OutputData();

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
            printf("Input Data Banyak Data = ");
            cin >> banyakData;
            addData(banyakData);
        }

        // USER SHOW DATA
        else if (mainMenu == 2)
        {
            showData();
        }
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
        cout << mainIndex;
        printf("Masukan Nama = ");
        getline(cin, name[mainIndex]);

        printf("Masukan NIM = ");
        getline(cin, nim[mainIndex]);
        mainIndex++;

    }
}

void showData()
{
    int num;
    printf("Output Data Data \n");
    for (int i = 0; i < mainIndex; i++)
    {
        cout << i + 1;
        std::cout << " Nama : " << name[i] << std::endl;
        std::cout << "Nama : " << nim[i] << std::endl
                  << "\n";
    }
}