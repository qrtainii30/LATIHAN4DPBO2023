#include "header.hh"

Course::Course(){
    nama_matkul = "";
}

Course::Course(string nama_matkul){
    this->nama_matkul = nama_matkul;
}

void Course::setNamaMatkul(string nama_matkul){
    this->nama_matkul = nama_matkul;
}
string Course::getNamaMatkul(){
    return this->nama_matkul;
}

Course::~Course(){

}