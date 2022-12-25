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

string username;
int input;

int main()
{
    system("cls");

    while (input != 'N')
    {
        cout << "Masukan Input ";
        input = _getch();
        input = toupper(input);
        cout << input << endl;
    }
    
    return 0;
}
