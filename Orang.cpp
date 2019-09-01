//Orang.cpp

#include "Orang.h"
#include <iostream>
using namespace std;

Orang::Orang(){
    nama = "jane";
    angkatan = "2019";
    idLine = "doe";
    tglLahir = "01/01/1999";
}
Orang::Orang(std::string nama,std::string angkatan,std::string idLine,std::string tanggal){
    this->nama = nama;
    this->angkatan = angkatan;
    this->idLine = idLine;
    this->tglLahir = tanggal;
}
void Orang::setNama(std::string x){
    nama = x;
}
void Orang::setAngkatan(std::string x){
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
std::string Orang::getAngkatan() const{
    return(angkatan);
}
std::string Orang::getIdLine() const{
    return(idLine);
}
std::string Orang::getTglLahir() const{
    return(tglLahir);
}
//dora 18 siapaya921/082272152564 9 des 2000