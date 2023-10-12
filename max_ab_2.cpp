#include <iostream>
using namespace std;

int a, b;

int main()
{

    cout << "Nama Programmer : 120103041 - Rayhan Alsauqi" << endl;
    cout << "Versi Program  : 02 " << endl;
    cout << "Tanggal Pembuatan : 11 Oktober 2023" << endl;
    cout << "Tanggal Revisi : 12 Oktober 2023" << endl;
    cout << "-----------------------------------------------" << endl;

    cout << "Ketikan dua nilai integer  a dan b : " << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    if (a >= b)
    {
        cout << a;
    }
    else
    {
        cout << b;
    }

    return 0;
}