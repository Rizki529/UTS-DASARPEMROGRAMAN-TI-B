#include <iostream>

using namespace std;

int main()
{
    cout << "Kelulusan Siswa \n \n";

    double Nilai_Ujian;

    cout << "Masukan Nilai Ujian: ";
    cin >> Nilai_Ujian;
    cout << endl;
    if (Nilai_Ujian >= 60)
    {
        cout << ("Hasil_Ujian =Lulus ");
        cout << endl <<endl;
    }else{
        cout << ("Hasil_Ujian = Tidak Lulus");
        cout << endl << endl;
    }

        return 0;

    }
