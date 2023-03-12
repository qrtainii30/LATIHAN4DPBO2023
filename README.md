# LATIHAN4DPBO2023
## Janji
Saya Qurrotu Ainii NIM 2105885 mengerjakan soal Latihan 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahannya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Desain Program

## Soal
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas tersebut: <br>
● Mahasiswa: NIM, nama, jenis_kelamin, fakultas <br>
● Human: NIK, nama, jenis_kelamin <br>
● SivitasAkademik: asal_universitas, email_edu <br>
● Dosen: NIP, nama, jenis_kelamin, fakultas, pend_terakhir, keahlian <br>
● Course: nama_matakuliah <br>
● Program Studi: nama_prodi, kode, course <br>

## UML-Class Diagram
![UML DPBO drawio](https://user-images.githubusercontent.com/119904110/224531144-a06776de-1012-4113-9bdb-657072c5ca47.png) <br>

## Penjelasan
● Kelas Human menjadi parent untuk kelas Siak dan memiliki cucu Mahasiswa dan Dosen. Kedua kelas tersebut mewarisi atribut milik Siak(parent) dan Human (grand parent) <br>
● Kelas Prodi composite dengan kelas Course, Dosen, dan Mahasiswa karena setiap Prodi memiliki Course, Dosen, dan juga Mahasiswa. Sehingga prodi dapat memanggil kelas tersebut secara langsung.

# Dokumentasi
