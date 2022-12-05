#include <iostream>
#include <string>

// using namespace std;

std::string username[100][100], password[100][100], name;
char isTrueSignUp, isRepeat = 'y';
int x, mainIndex = 1;
bool isLogin;

void signUp();
void showData();
bool checkEmpty();
void login();

int main()
{
    int inputMenu;

    while (isRepeat = 'y')
    {
        printf("Choose Menu \n");
        while (isLogin == true)
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
                isLogin = false;
            }
        }

        printf("1.Sign Up \n");
        printf("2.Sign In \n");
        std::cin >> inputMenu;

        if (inputMenu == 1)
        {
            signUp();
        }
        else
        {
            if (checkEmpty())
            {
                printf("Empty Data \n");
            }
            else
            {
                printf("Masuk Login \n");
                login();
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
            std::cout << username[i][j];
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
void login()
{
    std::string loginUsername, loginPassword;
    bool loginLoop = true;
    while (loginLoop == true)
    {
        std::cin.ignore();
        printf("Username :  \n");
        getline(std::cin, loginUsername);
        printf("Password :  \n");
        getline(std::cin, loginPassword);

        for (int i = 1; i <= mainIndex; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (loginUsername == username[i][j])
                {
                    if (loginPassword == password[i][j])
                    {
                        printf("login succesfull \n");
                        isLogin = true;
                        loginLoop = false;
                    }
                    else
                    {
                        printf("Incorrect password \n");
                        break;
                    }
                }
                else
                {
                    printf("Incorrect username \n");
                    break;
                }
            }
        }
    }
}