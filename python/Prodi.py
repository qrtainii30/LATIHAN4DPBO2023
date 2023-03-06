from Course import Course
from Dosen import Dosen
from Mahasiswa import Mahasiswa

class Prodi: #prodi has a course
    
    #constructor
    def __init__(self, nama_prodi = "", kode = "", course = Course(), dosen = Dosen(), mahasiswa = Mahasiswa()):
        self.nama_prodi = nama_prodi
        self.kode = kode
        self.course = course
        self.dosen = dosen
        self.mahasiswa = mahasiswa
        
    #setter prodi, kode, dan course
    def setNama_prodi(self, nama_prodi):
        self.nama_prodi = nama_prodi
        
    def setKode(self, kode):
        self.kode = kode
    
    def setCourse(self, course):
        self.course = course
    
    def setCourse(self, course):
        self.course = course
    
    def setDosen(self, dosen):
        self.dosen = dosen
        
    def setMahasiswa(self, mahasiswa):
        self.mahasiswa = mahasiswa
    
    #getter prodi, kode, dan course
    def getNama_prodi(self):
        return self.nama_prodi
    
    def getKode(self):
        return self.kode
    
    def getCourse(self):
        return self.course
    
    def getDosen(self):
        return self.dosen
    
    def getMahasiswa(self):
        return self.mahasiswa