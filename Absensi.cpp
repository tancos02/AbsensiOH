// Absensi.cpp
// Merupakan main file dari kumpulan program untuk absensi

#include <iostream>
#include <fstream>
#include "Orang.h"

using namespace std;

int main() {
    Orang ListOrang[200];  // Array yang menyimpan semua data, masih bisa diubah, tidak harus array
    bool isExit = false;  // Boolean yang menandakan jika input data selesai
    int count = 0; // Total jemaat yang hadir
    std::cout << "Selamat datang di absensi OH\n";
    std::string n,iL,tglLhr,exit,ang,data,fname; // Variabel sementara
    cout << "Masukkan nama file yang akan menyimpan data : ";
    cin >> fname;
    // Kedua line di atas merupakan tugas yang harus diperbaiki
    ofstream outf;
    outf.open(fname.c_str());
    while(isExit == false){
        std::cout << "Nama : ";
        std::cin >> n;
        std::cout << "Angkatan : ";
        std::cin >> ang;
        std::cout << "id Line/No. Hp : ";
        std::cin >> iL;
        std::cout << "Tanggal Lahir(dd/mm/yyyy) : ";
        std::cin >> tglLhr;
        data = n + " " + ang + " " + iL + " " + tglLhr;
        outf << data << endl;
        ListOrang[count].setNama(n);
        ListOrang[count].setAngkatan(ang);
        ListOrang[count].setIdLine(iL);
        ListOrang[count].setTglLahir(tglLhr);
        count++;
        std::cout << "Ingin keluar ?(yes/no)\n";
        std::cin >> exit;
        if(exit == "yes"){
            isExit = true;
        }
    }
    for(int i=0;i<count;i++){
        std::cout << ListOrang[i].getNama() << " " << ListOrang[i].getAngkatan() << " " << ListOrang[i].getIdLine() << " " << ListOrang[i].getTglLahir() << std::endl; 
    }
    cout << "Total jemaat yang hadir : " << count << endl;
    outf.close();
}