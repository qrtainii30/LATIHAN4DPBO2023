#include"Header.hh"

Mahasiswa::Mahasiswa() : Siak(){
}

Mahasiswa::Mahasiswa(int nik, string nama, string jenis_kelamin, string asal_univ, string email_edu) : Siak(nik, nama, jenis_kelamin, asal_univ, email_edu) {
}

Mahasiswa::Mahasiswa(int nik, string nama, string jenis_kelamin, string asal_univ, string email_edu, int nim, string fakultas) : Siak(nik, nama, jenis_kelamin, asal_univ, email_edu){
    this->nim = nim;
    this->fakultas = fakultas;
}

void Mahasiswa::setNim(int nim){
    this->nim = nim;
}
int Mahasiswa::getNim(){
    return this->nim;
}

void Mahasiswa::setFakultas(string fakultas){
    this->fakultas = fakultas;
}
string Mahasiswa::getFakultas(){
    return this->fakultas;
}

Mahasiswa::~Mahasiswa(){
}