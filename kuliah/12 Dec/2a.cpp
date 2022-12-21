#include <iostream>
using namespace std;

int main()
{

    float height, weight, lolos;
    char gender;

    for (int i = 0; i < 3; i++)
    {
        cout << "Gender : ";
        cin >> gender;
        cout << "Height : ";
        cin >> height;
        cout << "Weight : ";
        cin >> weight;
        cout << endl;

        if (gender == 'm' || gender == 'M')
        {
            if (height >= 165 && weight <= 80)
            {
                lolos++;
            }
        }
        else if (gender == 'w' || gender == 'W')
        {
            if (height >= 160 && weight <= 65)
            {
                lolos++;
            }
        }
        else
        {
            printf("error");
        }
    }

    cout << "Passed Aplicant : " << lolos;
    return 0;
}
