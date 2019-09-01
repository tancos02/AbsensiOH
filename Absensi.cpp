// Absensi.cpp
// Merupakan main file dari kumpulan program untuk absensi

#include <iostream>
#include <fstream>
#include "Orang.h"

using namespace std;

int main() {
    Orang ListOrang[200];
    bool isExit = false;
    int count = 0;
    std::cout << "Selamat datang di absensi OH\n";
    std::string n,iL,tglLhr,exit,ang,data;
    //cout << "Masukkan nama file yang akan menyimpan data : ";
    //cin >> fname;
    ofstream outf;
    outf.open("trial.txt");
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
    outf.close();
}