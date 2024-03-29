// Header untuk Class Orang
#ifndef ORANG_H
#define ORANG_H

#include <iostream>

class Orang {
    private :
        std::string nama;
        std::string angkatan;
        std::string idLine;
        std::string tglLahir;
    
    public :
        Orang();
        Orang(std::string nama,std::string angkatan,std::string idLine,std::string tanggal);
        void setNama(std::string);
        void setAngkatan(std::string);
        void setIdLine(std::string);
        void setTglLahir(std::string);
        std::string getNama() const;
        std::string getAngkatan() const;
        std::string getIdLine() const;
        std::string getTglLahir() const;
};

#endif