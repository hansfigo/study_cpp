#include <iostream>
#include <string>

// using namespace std;

std::string username[100][100], password[100][100], name;
char isTrueSignUp, isRepeat = 'y';
int x, mainIndex = 1;
bool login;
bool isLogin();

void signUp();
void showData();
bool checkEmpty();

int main()
{

    int inputMenu;
    // login = isLogin();
    // std::cout << login;

    while (isRepeat == 'y')
    {
        std::cout << mainIndex;
        printf("Choose Menu \n");
        while (login == true)
        {
            printf("1.Show Data \n");
            printf("2.Logout \n");
            std::cin >> inputMenu;

            if (inputMenu == 1)
            {
                showData();
            }
            else
            {
                login = false;
            }
        }

        printf("1.Sign Up \n");
        printf("2.Sign In \n");
        std::cin >> inputMenu;

        if (inputMenu == 1)
        {
            signUp();
        }
        else // Sign In
        {
            if (checkEmpty())
            {
                printf("Empty Data \n");
            }
            else
            {
                printf("Masuk Login \n");
                login = isLogin();

                if (login == true)
                {
                    printf("Access Granted \n");
                }
                else
                {
                    printf("Access Denied \n");
                }
            }
        }
    }
}

void signUp()
{
    do
    {
        std::cin.ignore();
        printf("Input Username : \n");
        std::getline(std::cin, username[mainIndex][1]);

        printf("Input Password : \n");
        std::getline(std::cin, password[mainIndex][1]);

        printf("is the data above correct? (y/n)");
        std::cin >> isTrueSignUp;
    } while (isTrueSignUp == 'n');
    mainIndex++;
    // isLogin = true;
}
void showData()
{
    for (int i = 1; i <= mainIndex; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << i << " - " << username[i][j];
        }
        printf("\n");
    }
}
bool checkEmpty()
{
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (username[i][j] != "")
            {
                return false;
            }
        }
    }
    return true;
}

bool isLogin()
{
    std::string loginUsername, loginPassword;
    // bool loginLoop = true;

    printf("Username :  \n");
    std::cin >> loginUsername;

    printf("Password :  \n");
    std::cin >> loginPassword;
    ;

    for (int i = 1; i <= mainIndex; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (loginUsername == username[i][j] && loginPassword == password[i][j])
            {
                return true;
                // loginLoop = false;
            }
        }
    }
    return false;
}

// bool isLogin()
// {
//     std::string loginUsername, loginPassword;

//     printf("Username :  \n");
//     getline(std::cin, loginUsername);

//     printf("Password : \n");
//     getline(std::cin, loginPassword);

//     return false;
// }