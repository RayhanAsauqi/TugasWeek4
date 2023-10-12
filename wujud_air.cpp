#include <iostream>
using namespace std;

int main()
{
     cout << "Nama Programmer : 120103041 - Rayhan Alsauqi" << endl;
    cout << "Versi Program  : 02 " << endl;
    cout << "Tanggal Pembuatan : 11 Oktober 2023" << endl;
    cout << "Tanggal Revisi : 12 Oktober 2023" << endl;
    cout << "-----------------------------------------------" << endl;

    double suhu_air;
    cout << "Masukkann suhu air dalam derajat celcius : ";
    cin >> suhu_air;

    if (suhu_air < 0)
    {
        cout << "Air berwujud padat" << endl;
    }
    else if (suhu_air > 0 && suhu_air < 100)
    {
        cout << "Air berwujud cair" << endl;
    }
    else
    {
        cout << "Air berwujud gas" << endl;
    }

    return 0;
}