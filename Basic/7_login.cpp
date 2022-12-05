#include <iostream>
#include <string>

// using namespace std;

std::string username[100][100], password[100][100], name;
char isTrueSignUp, isLogin = 'f', isRepeat = 'y';
int x, mainIndex = 1;

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
        while (isLogin == 't')
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
                isLogin = 'f';
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
            }else{
                printf("Masuk Login \n");
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
    isLogin = 't';
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
bool checkEmpty(){
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(username[i][j] != ""){
                return false;
            }
        }
        
    }
    return true;
}
void login(){
    std::string loginUsername, loginPassword;

    std::cin.ignore();
    printf("Username :  \n");
    getline(std::cin, loginUsername);
    printf("Password :  \n");
    getline(std::cin, loginPassword);

    for (int i = 1; i <= mainIndex; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // if (/* condition */)
            // {
            //     /* code */
            // }
            
        }
        
    }
    
}