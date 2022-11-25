#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name[1000];
    int nameLenght = sizeof(name) / sizeof(int);
    int nameIndex = 0;
    int jmlData;
    int loop = 0;
    int mainMenu;

    while (loop == 0)
    {
        std::cout << "PILIH MENU : " << std::endl;
        std::cout << "1.Input Data " << std::endl;
        std::cout << "2.Output Data " << std::endl;
        std::cout << "3.Keluar " << std::endl;
        std::cin >> mainMenu;

        if (mainMenu == 1)
        {
            printf("Input Data Banyak Data = ");
            cin >> jmlData;
            for (size_t i = 0; i < jmlData; i++)
            {
                cout << nameIndex;
                printf("Masukan Nama = ");
                cin.ignore();
                getline(cin, name[nameIndex]);
                nameIndex++;
            }
        }

        else if (mainMenu == 2)
        {
            printf("Output Data Data \n");
            for (int i = 0; i < nameIndex; i++)
            {
                std::cout << name[i] << std::endl;
            }
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
