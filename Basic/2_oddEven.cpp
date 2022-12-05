#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Input Number" << endl;
    cin >> num;

    // if num mod 2 == 0, then print even
    if (num % 2 == 0)
    {
        cout << num << " Even";
    }
    else
    {
        cout << num << " Odd";
    }

    return 0;
}
