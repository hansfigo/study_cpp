// Tugas No 3

// Claudio Hans Figo
// 22.12.2321

#include <iostream>

int qs_Finalscore(float as, float qs, float fes)
{
    float x;
    x = (0.4 * qs) + (0.4 * fes) + (0.2 * as);
    return x;
}

int fes_Finalscore(float as, float qs, float fes)
{
    float x;
    x = (0.3 * qs) + (0.5 * fes) + (0.2 * as);
    return x;
}

void rating(int input)
{

    if (input >= 85 && input <= 100)
    {
        std::cout << "Excelent" << std::endl;
        std::cout << "Nilai Akhir Anda = " << input << std::endl;
    }
    else if (input >= 75 && input <= 84)
    {
        std::cout << "Good" << std::endl;
        std::cout << "Nilai Akhir Anda = " << input << std::endl;
    }
    else if (input >= 65 && input <= 74)
    {
        std::cout << "Fair" << std::endl;
        std::cout << "Nilai Akhir Anda = " << input << std::endl;
    }
    else if (input >= 50 && input <= 64)
    {
        std::cout << "Poor" << std::endl;
        std::cout << "Nilai Akhir Anda = " << input << std::endl;
    }
    else
    {
        std::cout << "Very Poor" << std::endl;
        std::cout << "Nilai Akhir Anda = " << input << std::endl;
    }
}

int main()
{
    // deklarasi variable
    float as, qs, fes;
    int final_score;
    char loop = 'y';

    while (loop == 'y')
    {
        std::cout << "Program Penghitung Nilai Akhir" << std::endl;
        std::cout << "---------------------------------------" << std::endl;
        std::cout << "Masukan Nilai Anda " << std::endl;
        std::cout << "Assigement Score (AS) : ";
        std::cin >> as;
        std::cout << "Quiz Score (QS) : ";
        std::cin >> qs;
        std::cout << "Final Exam Score (FES) : ";
        std::cin >> fes;

        if (qs > fes)
        {
            final_score = qs_Finalscore(as, qs, fes);
            rating(final_score);
        }
        else
        {
            final_score = fes_Finalscore(as, qs, fes);
            rating(final_score);
        }
        std::cout << "Ulang ? (Y/N)" << std::endl;
        std::cin >> loop;
    }

    return 0;
}