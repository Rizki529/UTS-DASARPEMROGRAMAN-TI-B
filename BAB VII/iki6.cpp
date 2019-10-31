#include <iostream>
using namespace std;

int main()
{
    typedef int matriks [3] [2];
    matriks A, B, C;
    int j, k;
    //nilai elemen A
    cout << " matrik A :" << endl;
    for ( j=0; j<3; j++)
    {

        for ( k=0; k<2; k++)
        {

            cout << "A ["<< j<<"] ["<< k <<"] ="; // menampilkan hasil input matriks
            cin >> A [j] [k]; //inputan dari matrik A
        }
    }
    cout << endl;
    // nilai pada elemen B
    cout <<"matriks B : " << endl;
    for ( j=0; j<3; j++)
    {
        for ( k=0; k<2; k++)
        {
            cout << "B [" << j << "] [" << k << "] = ";
            cin >> B [j] [k];

        }
    }
    cout << endl;
    cout << endl;

    //program penjumlahan A dan B
    for ( j=0; k<3; j++)
    {
        for ( k=0; k<2; k++)
        {
            C [j] [k] = A[j] [k] + B [j] [k];
        }
    }
    // menampilkan hasil penjumlahan

    cout << "Hasil Penjumlahan Matriks" <<endl;
    for (j=0; j<3; j++)
    {
        for (k=0; k<2; k++)
        {
            cout << " C [ "<< j <<"] [ "<< k <<"] = " << C [j] [k] <<endl;

        }
    }
    cout << endl;
    return 0;

}
