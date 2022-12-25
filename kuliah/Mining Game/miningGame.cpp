// 24 December 2022
// Claudio Hans Figo aka Ryo-senpai
// 22.12.2321

// Simple terminal Based Game using C++
// Mining Game

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include <fstream>

using namespace std;

int hp, copper, silver, gold, coin, med;
int isGameOver;
string user, userName, dif;

void mine();
void difficultyMenu();
void homeMenu();
void town();
void random();
void sell();
void saveGame();
void loadGame();

int main(int argc, char const *argv[])
{

    copper = 0;
    silver = 0;
    gold = 0;
    hp = 0;
    coin = 0;
    med = 0;

    do
    {
        system("cls");

        cout << "Hello!!\nWelcome to our minigames\n";
        Sleep(600);
        cout << "Please input your name : ";
        getline(cin, userName);

        // Ask user difficulty
        difficultyMenu();

        homeMenu();

        system("cls");
        cout << "Game Over !! \nContinue? (y/n)";
        isGameOver = _getch();
        isGameOver = toupper(isGameOver);
        system("cls");
    } while (isGameOver != 'N');

    return 0;
}

void difficultyMenu()
{
    system("cls");
    Sleep(400);

    cout << "Select Dificulty\n[1]Normal\n[2]Hard" << endl;
    user = _getch();

    if (user == "1")
    {
        hp = 5, coin = 5;
        dif = "Normal";
    }

    if (user == "2")
    {
        hp = 3, coin = 0;
        dif = "Hard";
    }
}

void homeMenu()
{
    system("cls");
    Sleep(200);
    user = " ";
    system("cls");

    while (user != "q")
    {
        cout << "Difficulty : " << dif << endl;
        cout << "Welcome Home " << userName << "\nSelect Actions\n[1]Mine\n[2]Town\n[3]Save" << endl;
        cout << "\n\n\n\n\n"
             << "Copper :" << copper << "  Silver :" << silver << "  Gold :" << gold << "\nCoin : " << coin << endl;
        cout << "\nPress Q to Exit Game " << endl;
        user = _getch();

        if (user == "1")
        {
            mine();
            if (isGameOver == 'N')
            {
                user = "q";
                break;
            }
        }
        else if (user == "2")
        {
            town();
        }
        else if (user == "3")
        {
            saveGame();
        }
    }

    cout << "log";
}
void mine()
{

    int isMining;
    int isGameOverMine;
    do
    {
        do
        {

            /* code */

            while (!_kbhit())
            {
                system("cls");
                cout << "Mining." << endl;
                cout << "\n\n\nHp : " << hp << "     Press Q to Exit";
                cout << "\nMedkit : " << med << "     Press H to use Medkit" << endl;
                Sleep(1000);
                system("cls");
                cout << "Mining.." << endl;
                cout << "\n\n\nHp : " << hp << "     Press Q to Exit";
                cout << "\nMedkit : " << med << "     Press H to use Medkit" << endl;
                Sleep(1000);
                system("cls");
                cout << "Mining..." << endl;
                random();
                if (hp <= 0)
                {
                    isGameOverMine = 'N';
                    break;
                    _kbhit;
                }
                cout << "\n\n\nHp : " << hp << "     Press Q to Exit";
                cout << "\nMedkit : " << med << "     Press H to use Medkit" << endl;

                Sleep(1000);
                system("cls");
            }
            cout << isGameOverMine;

            if (isGameOverMine == 'N')
            {
                isGameOver = isGameOverMine;
                system("cls");
                break;
            }
            else
            {
                int input = _getch();
                input = toupper(input);
                if (input == 'Q')
                {
                    isMining = 'Q';
                    break;
                }
                else if (input == 'H')
                {
                    if (med > 0)
                    {
                        med -= 1;
                        hp += 2;
                        cout << "-1 Med";

                        if (hp >= 5)
                        {
                            hp = 5;
                        }
                    }
                    else
                    {
                        cout << "You Have No Medkit :(";
                        Sleep(600);
                    }
                }
            }

        } while (hp <= 0);

        break;
    } while (isMining != 'Q');
}

void town()
{
    system("cls");
    Sleep(200);
    bool status = false;
    while (!status)
    {
        user = " ";
        cout << "You're in Town\nSelect Action\n[1]Sell\n[2]Buy Med\n[3]Go Home" << endl;
        user = _getch();
        if (user == "1")
        {
            sell();
        }
        if (user == "2")
        {
            cout << "Buy one med for 3 coins? (y/n) ";

            string isBuy;
            while (isBuy != "N")
            {
                if (coin <= 2)
                {
                    system("cls");

                    cout << "Not Enough Coins !!";
                    Sleep(600);
                    isBuy = "N";

                    system("cls");
                }
                else
                {
                    system("cls");

                    cout << "Success !!";
                    Sleep(600);
                    med += 1;
                    coin -= 2;
                    isBuy = "N";

                    system("cls");
                }
            }
        }
        if (user == "3")
        {
            status = true;
        }
    }
}

void random()
{
    int random;
    random = rand() % 100;
    if (random >= 0 && random <= 5)
    {
        cout << "Alhamdullilah Gusti Dapet Gold\n";
        Sleep(200);
        gold += 1;
    }
    else if (random > 5 && random <= 15)
    {
        cout << "Ihiyyy Silver nih Cuyy\n";
        Sleep(200);
        silver += 1;
    }
    else if (random > 15 && random <= 25)
    {
        cout << "Mayan Copper\n";
        Sleep(200);
        copper += 1;
    }
    else if (random > 26 && random <= 90)
    {
        cout << "You've Encountered an Enemy !!";
        Sleep(400);
        hp -= 6;

        if (hp <= 0)
        {
            hp = 0;
        }
    }
    else
    {
        cout << "Huhu g dpet\n";
        Sleep(200);
    }
}

void sell()
{
    system("cls");
    int oldCoin = coin;
    coin += (gold * 5) + (silver * 3) + (copper * 1);
    cout << "Alhamdullilah dapet +" << coin - oldCoin << endl;
    Sleep(1000);
    copper = 0;
    silver = 0;
    gold = 0;
    system("cls");
}

void saveGame()
{
    system("cls");
    cout << "Saving." << endl;
    Sleep(800);
    system("cls");
    cout << "Saving.." << endl;
    Sleep(800);
    system("cls");
    cout << "Saving..." << endl;
    Sleep(800);
    ofstream SaveFile("saveGames.txt");
    SaveFile << userName << endl;
    SaveFile << copper << endl;
    SaveFile << silver << endl;
    SaveFile << gold << endl;
    SaveFile << coin << endl;
    SaveFile << endl;
    SaveFile.close();

    system("cls");
    cout << "Game Saved !!" << endl;
    Sleep(800);
    system("cls");
}