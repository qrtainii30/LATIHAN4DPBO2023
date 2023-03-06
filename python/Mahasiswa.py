#import data dari file siak
from Siak import Siak
#Mahasiswa yang merupakan anak dari Siak
class Mahasiswa(Siak):
    
    #constructor
    def __init__(self, nim = 0, fakultas = "", nama ="", nik = 0, jenisKelamin = "", asalUniv = "", emailEdu = ""):
        #untuk mengakses variabel dan metode pada parent
        super().__init__(asalUniv, emailEdu, nik, nama, jenisKelamin)
        self.nim = nim
        self.fakultas = fakultas
        
    #setter nim dan fakultas mahasiswa
    def setNim(self, nim):
        self.nim = nim
    
    def setFakultas(self, fakultas):
        self.fakultas = fakultas
        
    #getter untuk nim dan fakultas mahasiswa
    def getNim(self):
        return self.nim
    
    def getFakultas(self):
        return self.fakultas