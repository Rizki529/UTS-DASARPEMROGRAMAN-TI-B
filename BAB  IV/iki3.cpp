#include <iostream>
using namespace std;

int main()

{
    cout << " Nama    : Muhamad Rizki Saeful Rohman \n";
    cout << " Kelas   : TI - B                      \n";
    cout << " Nim     : A2.1900101                  \n";
    cout << " Jurusan : TI ( Teknik Informatika)    \n";
    cout << " Blog    : www.rizkisry.blogspot.com   \n";
    cout << " ||=======================================||\n";


    cout << " LATIHAN INPUT OUTPUT                  \n";
    cout << " ||=======================================||\n";

    char tampilkan[1];
    char  nama[50], alamat[50], tl[30], jk[50], status[50], email[40], blog[30] ;

    cout << " DAFTAR RIWAYAT HIDUP                  \n";
    cout << " ||=======================================||\n";


    cout << " Nama : ";
    cin.getline(nama,50);
    cout << " Alamat :";
    cin.getline(alamat,50);
    cout << " Tanggal Lahir: ";
    cin.getline(tl,30);
    cout << " Jenis Kelamin: ";
    cin.getline (jk,50);
    cout << " Status: ";
    cin.getline (status,(50));
    cout << " E-mail: ";
    cin.getline(email,40);
    cout << " Blog: ";
    cin.getline (blog,30);


    return 0;



}
