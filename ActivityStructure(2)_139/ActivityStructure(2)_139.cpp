// ActivityStructure(2)_139.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct AlamatDetail
{
    string desa;
    string kota;
};

struct Mahasiswa
{
    string nim;
    string nama;
    AlamatDetail alamat;
    int umur;

};

int main()
{
    Mahasiswa mhs;

    cout << "Masukan nim :";
    cin >> mhs.nim;
    cout << "Masukan Nama :";
    cin >> mhs.nama;
    cout << "Alamat :";
    cout << "\n\tMasukan Desa :";
    cin >> mhs.alamat.desa;
    cout << "\tMasukan Kota :";
    cin >> mhs.alamat.kota;
    cout << "Masukan Umur :";
    cin >> mhs.umur;

    cout << "\n\nnim = " << mhs.nim;
    cout << "\nNama = " << mhs.nama;
    cout << "\nDesa = " << mhs.alamat.desa;
    cout << "\nKota = " << mhs.alamat.kota;
    cout << "\nUmur = " << mhs.umur;
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
