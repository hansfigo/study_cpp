// Tugas PTI 14 Desember
// Claudio Hans Figo
// 22.12.2321

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>

using namespace std;

int input;

int main()
{
    system("cls");

    do
    {
        printf("Hello \n");
        input = _getch();
        input = toupper(input);
    } while (input != 'Y');

    cout << input;
    // printf("\nKey struck was '%c'\n", _getch());
    // while (input != "q" || input != "Q")
    // {
    //     printf("Input Pesan :");
    //     cin >> input;
    // }

    return 0;
}
