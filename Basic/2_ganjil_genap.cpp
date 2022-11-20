#include <iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Masukan Angka beb"<<endl;
    cin>>num;

    if (num%2 == 0){
        cout<<num <<" adalah Bilangan Genap";
    }else{
        cout<<num <<" adalah Bilangan Ganjil";
    }
    
    return 0;
}
