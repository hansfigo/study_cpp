#include <iostream>
#include <string>

// using namespace std;

std::string username[100][100], password[100][100], name;
char isTrueSignUp = 'f', isLogin = 'f', isRepeat = 'y';
int x, mainIndex = 1;

void signUp();
void showData();

int main()
{
    int inputMenu;

    printf("Choose Menu");
    while (isRepeat = 'y')
    {
        while (isLogin = 't')
        {
            printf("1.Show Data");
            printf("2. Logout");
            std::cin >> inputMenu;

            if (inputMenu == 1)
            {
                showData();
            }
            else
            {
                isLogin = 'f';
            }
        }

        printf("1.Sign Up");
        printf("2.Sign In");
        std::cin >> inputMenu;

        if (inputMenu == 1)
        {
            signUp();
        }
        else
        {
            showData();
        }
    }
}

void signUp()
{
    for (int i = 1; i <= mainIndex; i++)
        do
        {
            {
                printf("Input Username : ");
                std::getline(std::cin, username[mainIndex][i]);

                printf("Input Password : ");
                std::getline(std::cin, password[mainIndex][i]);

                printf("is the data above correct? (y/n)");
                std::getline(std::cin, password[mainIndex][i]);
            }
        } while (isTrueSignUp == 'f' || 'F');
}
void showData()
{
    for (int i = 1; i <= mainIndex; i++)
    {
        std::cout << username[i][mainIndex] << std::endl;
        std::cout << password[i][mainIndex] << std::endl;
    }
}