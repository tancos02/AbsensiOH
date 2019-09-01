//Orang.cpp

#include "Orang.h"
#include <iostream>
using namespace std;

Orang::Orang(){
    nama = "jane";
    angkatan = 2019;
    idLine = "doe";
    tglLahir = "01/01/1999";
}
Orang::Orang(std::string nama,int angkatan,std::string idLine,std::string tanggal){
    this->nama = nama;
    this->angkatan = angkatan;
    this->idLine = idLine;
    this->tglLahir = tanggal;
}
void Orang::setNama(std::string x){
    nama = x;
}
void Orang::setAngkatan(int x){
    angkatan = x;
}
void Orang::setIdLine(std::string x){
    idLine = x;
}
void Orang::setTglLahir(std::string x){
    tglLahir = x;
}
std::string Orang::getNama() const{
    return(nama);
}
int Orang::getAngkatan() const{
    return(angkatan);
}
std::string Orang::getIdLine() const{
    return(idLine);
}
std::string Orang::getTglLahir() const{
    return(tglLahir);
}