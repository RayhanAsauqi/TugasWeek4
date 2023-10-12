#include <iostream>
using namespace std;

int main()
{
    cout << "Nama Programmer : 120103041 - Rayhan Alsauqi" << endl;
    cout << "Versi Program  : 02 " << endl;
    cout << "Tanggal Pembuatan : 11 Oktober 2023" << endl;
    cout << "Tanggal Revisi : 12 Oktober 2023" << endl;
    cout << "-----------------------------------------------" << endl;

    int nilai_siswa;

    cout << "Masukkan nilai siswa : ";
    cin >> nilai_siswa;

    if (nilai_siswa >= 90)
    {
        cout << "Peringkat 1";
    }
    else if (nilai_siswa >= 80)
    {
        cout << "Peringkat 2";
    }
    else if (nilai_siswa >= 70)
    {
        cout << "Peringkat 3";
    }
    else
    {
        cout << "Tidak mendapatkan peringkat";
    }
}