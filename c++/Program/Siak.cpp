#include "Header.hh"

//construktor
Siak::Siak() : Human(){
    email_edu = "";
    asal_univ = "";
}

Siak::Siak(int nik, string nama, string jenis_kelamin){
}

Siak::Siak(int nik, string nama, string jenis_kelamin, string asal_univ, string email_edu) : Human (nik, nama, jenis_kelamin){
    this->email_edu = email_edu;
    this->asal_univ = asal_univ;
}

//getter and setter
void Siak::setAsalUniv(string asal_univ){
    this->asal_univ = asal_univ;
}
string Siak::getAsalUniv(){
    return this->asal_univ;
}

void Siak::setEmailEdu(string email_edu){
    this->email_edu = email_edu;
}
string Siak::getEmailEdu(){
    return this->email_edu;
}

//destructor
Siak::~Siak(){

}