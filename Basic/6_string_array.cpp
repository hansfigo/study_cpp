#include <iostream>
#include <string>


int main()
{
    std::string nama;
    int nameIndex = 0;
    int x;
    int loop = 0;
    int mainMenu;

    while (loop == 0)
    {
        std::cout << "PILIH MENU : " << std::endl;
        std::cout << "1.Input Data " << std::endl;
        std::cout << "2.Output Data " << std::endl;
        std::cin >> mainMenu;

        if (mainMenu == 1)
        {
            printf("Input Data\n");
            printf("Nama = \n");
            // std::cin >> name[0];
        }

        else if (mainMenu == 2)
        {
            printf("Output Data Data \n");
            // std::cout << name << std::endl;
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
