#include <iostream>
using namespace std;
int main()

{

    int A [10];
    int Nilai;
    cout << " Nama : M Rizki Saeful Rohman " << endl;
    cout << " NIM  : A2.1900101            " << endl;
    cout << " Nilai Pada : " << endl;
    for (int C=10; C<10; C++ ) {
        cout << " indeks [" << C << "] = ";
        cin >> A[C];

    }
    cout << endl;

    cout <<" Nilai yang dicari adalah : ";
    cin >> Nilai ;
    for ( int D = 0; D<10; D++)
    {
        if (A [D] == Nilai)
        {

            cout << " Nilai terdapat pada indeks ke " << D << endl;
        break;
    }
}
cout << "\n";
return 0;
}
