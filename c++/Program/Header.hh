//library yang digunakan
#include<iostream>
#include<string>

using namespace std;

//----------deklarasi semua kelas-------//
class Human{
    private:
        int nik;
        string nama, jenis_kelamin;
    
    public: 
        //cosntructor
        Human();
        Human(int nik, string nama, string jenis_kelamin);

        //getter and setter
        void setNik(int nik);
        int getNik();
        void setNama(string nama);
        string getNama();
        void setJenisKelamin(string jenis_kelamin);
        string getJenisKelamin();

        //destructor
        ~Human();
};

//kelas Siak yang merupaka child dari human
class Siak : public Human{
    private:
        string asal_univ, email_edu;

    public:
        //construktor
        Siak();
        Siak(int nik, string nama, string jenis_kelamin);
        Siak(int nik, string nama, string jenis_kelamin, string asal_univ, string email_edu);

        //setter and getter
        void setAsalUniv(string asal_univ);
        string getAsalUniv();
        void setEmailEdu(string email_edu);
        string getEmailEdu();

        //destructor
        ~Siak();
};

//kelas mahasiswa yang merupakan child dari siak dan cucu dari human
class Mahasiswa : public Siak{
    private:
        int nim;
        string fakultas;

    public:
        Mahasiswa();
        Mahasiswa(int nik, string nama, string jenis_kelamin, string asal_univ, string email_edu);
        Mahasiswa(int nik, string nama, string jenis_kelamin, string asal_univ, string email_edu, int nim, string fakultas);

        void setNim(int nim);
        int getNim();
        void setFakultas(string fakultas);
        string getFakultas();

        ~Mahasiswa();
};

//kelas dosen yang merupakan child dari siak dan cucu dari human
class Dosen : public Siak{
    private:
        int nip;
        string fakultas, pend_terakhir, keahlian;
    
    public:
        Dosen();
        Dosen(int nik, string nama, string jenis_kelamin, string asal_univ, string email_edu);
        Dosen(int nik, string nama, string jenis_kelamin, string asal_univ, string email_edu, int nip, string fakultas, string pend_terakhir, string keahlian);

        void setNip(int nip);
        int getNip();
        void setFakultas(string fakultas);
        string getFakultas();
        void setPendTerakhir(string pend_terakhir);
        string getPendTerakhir();
        void setKeahlian(string keahlian);
        string getKeahlian();

        ~Dosen();
};

class Course{
    private:
        string nama_matkul;
    
    public:
        Course();
        Course(string nama_matkul);

        void setNamaMatkul(string nama_matkul);
        string getNamaMatkul();

        ~Course();
};

//kelas prodi yang composite dengan kelas course, mahasiswa, dan dosen
class Prodi{
    private:
        string nama_prodi, kode;
        Course course;
        Mahasiswa mhs;
        Dosen dosen;
    
    public:
        Prodi();
        Prodi(string nama_prodi, string kode, Course course, Mahasiswa mhs, Dosen dosen);

        void setNamaProdi(string nama_prodi);
        string getNamaProdi();
        void setKode(string kode);
        string getKode();
        void setCourse(Course course);
        Course getCourse();
        void setMhs(Mahasiswa mhs);
        Mahasiswa getMhs();
        void setDosen(Dosen dosen);
        Dosen getDosen();

        ~Prodi();
};