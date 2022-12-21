#include <iostream>
#include <iomanip>

using namespace std;

double nilai[100][100], totalNilai, rataRata;

int jumlahTugas;

int main()
{
    printf("Masukan Banyak tugas : ");
    cin >> jumlahTugas;
    printf("DATA NILAI MATKUL \n \n");

    for (int i = 0; i < jumlahTugas; i++)
    {
        cout << "NILAI TUGAS KE " << i + 1 << " ASD DAN PDA \n";
        for (int j = 0; j < 2; j++)
        {
            cout << "BARIS KE " << i + 1 << " KOLOM " << j + 1 << " ";
            cin >> nilai[i][j];
        }
        printf("\n");
    }

    printf("Tampil Data Lulus \n \n");
    cout << setw(20) << "ASD" << setw(8) << "PDA \n";

    for (int i = 0; i < jumlahTugas; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout << "Tugas ke- " << i + 1 << setw(8) << nilai[i][j] << setw(6) << nilai[i][j + 1];
            totalNilai = totalNilai + nilai[i][j] + nilai[i][j + 1];
            rataRata = totalNilai / (jumlahTugas * 2);
        }
        printf("\n");
    }
    printf("\n");
    cout << "Jumlah Nilai" << setw(6) << "= " << totalNilai << endl;
    cout << "Rata-rata" << setw(9) << "= " << rataRata << endl;

    return 0;
}
