#include <iostream>
#include <string>
using namespace std;

string item[100][100];
char isLoop;
int itemsIndex = 0;
float itemPrice[100][100], quantitiy[100][100], total[100][100], finalTotal, pay;

int main()
{
    do
    {
        cout << "Input the goods name : ";
       getline (cin, item[itemsIndex][0]);
        cout << "Quantitiy : ";
        cin >> quantitiy[itemsIndex][0];
        cout << "Price per item : ";
        cin >> itemPrice[itemsIndex][0];
        total[itemsIndex][1] = itemPrice[itemsIndex][0] * quantitiy[itemsIndex][1];
        cout << "Total Price : " << total;
        cout << endl;

        finalTotal = finalTotal + total[itemsIndex][0];
        cout << endl;

        cout << "Wanna input more data? ";
        cin >> isLoop;

    } while (isLoop == 'y' || isLoop == 'Y');

    itemsIndex++;

    cout<<quantitiy[0][0]<<endl;

    for (int i = 0; i <= itemsIndex; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<item[i][j];
        } 
        printf("\n");
    }
    

    // cout << "Total : " << finalTotal << endl;
    // cout << "Cash : ";
    // cin >> pay;
    // cout << endl;
    // cout << "Change : " << finalTotal - pay;

    return 0;
}
