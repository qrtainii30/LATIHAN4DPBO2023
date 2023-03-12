#include"Header.hh"

Prodi::Prodi(){
    nama_prodi = "";
    kode = "";
}

Prodi::Prodi(string nama_prodi, string kode, Course course, Mahasiswa mhs, Dosen dosen){
    this->nama_prodi = nama_prodi;
    this->kode = kode;
    this->course = course;
    this->mhs = mhs;
    this->dosen = dosen;
}

void Prodi::setNamaProdi(string nama_prodi){
    this->nama_prodi = nama_prodi;
}
string Prodi::getNamaProdi(){
    return this->nama_prodi;
}

void Prodi::setKode(string kode){
    this->kode = kode;
}
string Prodi::getKode(){
    return this->kode;
}

void Prodi::setCourse(Course course){
    this->course = course;
}
Course Prodi::getCourse(){
    return this->course;
}

void Prodi::setMhs(Mahasiswa mhs){
    this->mhs = mhs;
}
Mahasiswa Prodi::getMhs(){
    return this->mhs;
}

void Prodi::setDosen(Dosen dosen){
    this->dosen = dosen;
}
Dosen Prodi::getDosen(){
    return this->dosen;
}

Prodi::~Prodi(){
    
}