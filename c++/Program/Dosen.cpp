#include"Header.hh"

Dosen::Dosen(): Siak(){
}

Dosen::Dosen(int nik, string nama, string jenis_kelamin, string asal_univ, string email_edu) : Siak(nik, nama, jenis_kelamin, asal_univ, email_edu){
}

Dosen::Dosen(int nik, string nama, string jenis_kelamin, string asal_univ, string email_edu, int nip, string fakultas, string pend_terakhir, string keahlian) : Siak(nik, nama, jenis_kelamin, asal_univ, email_edu) {
    this->nip = nip;
    this->fakultas = fakultas;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}

void Dosen::setNip(int nip){
    this->nip = nip;
}
int Dosen::getNip(){
    return this->nip;
}

void Dosen::setFakultas(string fakultas){
    this->fakultas = fakultas;
}
string Dosen::getFakultas(){
    return this->fakultas;
}

void Dosen::setPendTerakhir(string pend_terakhir){
    this->pend_terakhir = pend_terakhir;
}
string Dosen::getPendTerakhir(){
    return this->pend_terakhir;
}

void Dosen::setKeahlian(string keahlian){
    this->keahlian = keahlian;
}
string Dosen::getKeahlian(){
    return this->keahlian;
}

Dosen::~Dosen(){

}