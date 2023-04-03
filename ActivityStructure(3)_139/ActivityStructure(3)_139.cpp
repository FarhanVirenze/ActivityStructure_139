// ActivityStructure(3)_139.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct AlamatDetail
{
    char desa[20];
    char kota[20];
};

struct Mahasiswa
{
    char nim[12];
    char nama[25];
    AlamatDetail alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs[3];

    for (int i = 0; i < 3; i++) {
        cout << "Masukan nim :";
        cin.getline(mhs[i].nim,12);
        cout << "Masukan Nama :";
        cin.getline(mhs[i].nama,25);
        cout << "Alamat :";
        cout << "\n\tMasukan Desa :";
        cin.getline(mhs[i].alamat.desa,20);
        cout << "\tMasukan Kota :";
        cin.getline(mhs[i].alamat.kota,20);
        cout << "Masukan Umur :";
        cin.ignore(1, '\n');
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "\n\nnim = " << mhs[1].nim;
        cout << "\nNama = " << mhs[1].nama;
        cout << "\nDesa = " << mhs[i].alamat.desa;
        cout << "\nUmur = " << mhs[i].umur;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
