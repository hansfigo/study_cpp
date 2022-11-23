#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name[1000];
    int nameLenght =  sizeof(name) / sizeof(int);
    int nameIndex = 0;
    int jmlData;
    int x;
    int loop = 0;
    int mainMenu;
    int nameLengh;

    printf("MAIN");

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
                printf("Masukan Nama = ");
                cin >> name[nameIndex];
                nameIndex++;
            }
        }

        else if (mainMenu == 2)
        {
            printf("Output Data Data \n");
            for (int i = 0; i < nameLengh ; i++)
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
