#include"Header.hh"

//construktor
Human::Human(){
    nik = 0;
    nama = "";
    jenis_kelamin = "";
}

Human::Human(int nik, string nama, string jenis_kelamin){
    this->nik = nik;
    this->nama = nama;
    this->jenis_kelamin = jenis_kelamin;
}

//getter and setter
void Human::setNik(int nik){
     this->nik = nik;
}
int Human::getNik(){
    return this->nik;
}

void Human::setNama(string nama){
    this->nama = nama;
}
string Human::getNama(){
    return this->nama;
}

void Human::setJenisKelamin(string jenis_kelamin){
    this->jenis_kelamin = jenis_kelamin;
}
string Human::getJenisKelamin(){
    return this->jenis_kelamin;
}

Human::~Human(){
}
