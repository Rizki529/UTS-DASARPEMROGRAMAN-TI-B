#include <iostream>
using namespace std;

int main()
{
    int bilangan;

    cout << " Masukan Sebuah Nilai Bilangan Bulat (1-4: ";
    cin >> bilangan;

    switch (bilangan) {
        case 1:
        cout << "one " <<endl;
        break;
        case 2:
        cout << "two" << endl;
        break;
        case 3:
        cout << "three" << endl;
        break;
        case 4:
        cout << "for " << endl;
        break;
    default:
        cout << " Saya Hanya Bilangan 1, 2, 3, 4, Saja " <<endl;
    }
    return 0;

}
