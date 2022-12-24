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

using namespace std;

int hp, copper, silver, gold, coin, med;
string user, userName, dif;

void mine();
void difficultyMenu();
void homeMenu();
void town();
void random();

int main(int argc, char const *argv[])
{

    copper = 0;
    silver = 0;
    hp = 0;
    coin = 0;
    med = 0;

    system("cls");

    cout << "Hello!!\nWelcome to our minigames\n";
    Sleep(600);
    cout << "Please input your name : ";
    getline(cin, userName);

    // Ask user difficulty
    difficultyMenu();

    homeMenu();

    return 0;
}

void difficultyMenu()
{
    system("cls");
    Sleep(400);

    cout << "Welcome to Mr " << userName << "'s Mine\nSelect Dificulty\n[1]Normal\n[2]hard" << endl;
    cin >> user;

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
    Sleep(400);

    while (user != "q")
    {
        user = " ";
        system("cls");
        cout << "Difficulty : " << dif <<  endl;
        cout << "Welcome Home " << userName << "\nSelect Actions\n[1]Mine\n[2]Town"<< endl;
        cout << "\n\n"<< "Copper :" << copper << "  Silver :" << silver << "  Gold :" << gold ;
        cin >> user;

        if (user == "1")
        {
            mine();
        }
        if (user == "2")
        {
            town();
        }
        // getch ();
    }
}
void mine()
{
    int isMining;
    do
    {
        while (!_kbhit())
        {
            system("cls");
            cout << "Mining." << endl;
            cout << "Press Q to Exit";
            Sleep(1000);
            system("cls");
            cout << "Mining.." << endl;
            cout << "Press Q to Exit";
            Sleep(1000);
            system("cls");
            cout << "Mining..." << endl;
            random();
            cout << "Press Q to Exit";

            Sleep(1000);
            system("cls");
        }
        int input = _getch();
        input = toupper(input);
        if (input == 'Q')
        {
            isMining = 'Q';
        }

    } while (isMining != 'Q');
}

void town()
{
    Sleep(400);
    system("cls");
    bool status = false;
    while (!status)
    {
        cout << "You're in Town\nSelect Action\n[1]Sell\n[2]Go Home" << endl;
        cin >> user;
        if (user == "1")
        {
            cout << " Alhadullilah Terjual";
        }
        if (user == "2")
        {
            status = true;
        }
    }
}

void random()
{
    int random;
    random = rand() % 150;
    if (random >= 0 && random <= 5)
    {
        cout << "Alhamdullilah Gusti Dapet Gold\n";
        gold += 1;
    }
    else if (random > 5 && random <= 15)
    {
        cout << "Ihiyyy Silver nih Cuyy\n";
        silver += 1;
    }
    else if (random > 15 && random <= 25)
    {
        cout << "Mayan Copper\n";
        copper += 1;
    }
    else
    {
        cout << "Huhu g dpet\n";
    }
}
