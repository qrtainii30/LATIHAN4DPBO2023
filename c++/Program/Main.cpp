#include"Header.hh"

int main(int argc, char const *argv[])
{
    //hardcore
    Dosen dosen(123456, "Mutia", "Perempuan", "UPI", "mut@upi.edu", 56743284, "FPMIPA", "S1", "Ngoding");
    Mahasiswa mhs(567894, "Riki", "Laki-laki", "UPI", "kii@upi.edu", 2102234, "FPMIPA");
    Course matkul("Atom_dan_Molekul");
    Prodi prodi("Kimia", "K12", matkul, mhs, dosen);

    //output
    cout << "===========Data Lengkap "<< prodi.getDosen().getFakultas() << "============" << endl;
    cout << "1. " << prodi.getNamaProdi() << endl;
    cout << "    Kode Prodi  : " << prodi.getKode() << endl;
    cout << "    Nama Matkul : " << prodi.getCourse().getNamaMatkul() << endl;
    cout << "    --------------Data Dosen--------------" << endl;
    cout << "    | Nama : " << prodi.getDosen().getNama() << endl;
    cout << "    |    NIK           : " << prodi.getDosen().getNik() << endl;
    cout << "    |    NIP           : " << prodi.getDosen().getNip() << endl;
    cout << "    |    Jenis Kelamin : " << prodi.getDosen().getJenisKelamin() << endl;
    cout << "    |    E-mail        : " << prodi.getDosen().getEmailEdu() << endl;
    cout << "    |    Pendidikan    : " << prodi.getDosen().getPendTerakhir() << endl;
    cout << "    |    Keahlian      : " << prodi.getDosen().getKeahlian() << endl;
    cout << "    |    Asal Univ     : " << prodi.getDosen().getAsalUniv() << endl;
    cout << "    |_____________________________________" << endl;
    cout << "    --------------Data Mahasiswa----------" << endl;
    cout << "    |Nama : " << prodi.getMhs().getNama() << endl;
    cout << "    |   NIK            : " << prodi.getMhs().getNik() << endl;
    cout << "    |   NIM            : " << prodi.getMhs().getNim() << endl;
    cout << "    |   E-mail         : " << prodi.getMhs().getEmailEdu() << endl;
    cout << "    |   Jenis Kelamin  : " << prodi.getMhs().getJenisKelamin() << endl;
    cout << "    |_____________________________________" << endl;
    
    return 0;
}
