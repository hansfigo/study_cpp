#include <stdio.h>

char kodeMatkul[50][20], matkul[50][20], bobotNilai;
int nilaiAngka[50], totalNilai[50], jmlMatkul, jmlSks[50];

void addData();
void showData();

int main(int argc, char const *argv[])
{
    printf("Program Penghitung IPK\n");
    printf("Input banyak matakuliah yang diambil ");
    scanf("%d", &jmlMatkul);
    addData();
    showData();
    return 0;
}

void addData()
{
    for (int i = 0; i < jmlMatkul; i++)
    {
        printf("Data ke =  ");
        printf("%d\n", i + 1);
        printf("Kode Matkul ");
        scanf("%s", &kodeMatkul[i]);
        printf("Mata Kuliah ");
        scanf("%s", &matkul[i]);
        printf("Nilai Angka ");
        scanf("%d", &nilaiAngka[i]);
        printf("Jumlah SKS ");
        scanf("%d", &jmlSks[i]);
    }
}

void showData()
{
    for (int i = 0; i < jmlMatkul; i++)
    {
        printf("%s\n", kodeMatkul[i]);
    }
}

char nilaiHuruf(int nilai)
{
    char nilaiHuruf;

    if (nilai >= 80)
    {
        nilaiHuruf = 'A';
    }
    else if (nilai >= 65 && nilai <= 79)
    {
        nilaiHuruf = 'B';
    }

    return nilaiHuruf;
}