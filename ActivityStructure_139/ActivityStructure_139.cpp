// ActivityStructure_139.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
    int umur;
};


int main()
{
    mahasiswa mhs1, mhs2;

    mhs1.nim = "20210140019";
    mhs1.nama = "Ardian Mulya";
    mhs1.alamat = "Wonosobo";
    mhs1.umur = 20;

    cout << "Masukan nim : ";
    cin >> mhs2.nim;
    cout << "Masukan Nama : ";
    cin >> mhs2.nama;
    cout << "Masukan Alamat : ";
    cin >> mhs2.alamat;
    cout << "Masukan Umur :";
    cin >> mhs2.umur;

    cout << "\nim = " << mhs1.nim;
    cout << "\nNama = " << mhs1.nama;
    cout << "\nAlamat = " << mhs1.alamat;
    cout << "\nUmur = " << mhs1.umur;

    cout << "\n\nnim = " << mhs2.nim;
    cout << "\nNama = " << mhs2.nama;
    cout << "\nAlamat = " << mhs2.alamat;
    cout << "\nUmur = " << mhs2.umur;

};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
