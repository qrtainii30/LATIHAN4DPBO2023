#import data dari file Siak
from Siak import Siak
#Dosen 
class Dosen(Siak):
    
    #constructor
    def __init__(self, nip = 0, fakultas = "", pend_terakhir = "", keahlian = "", nama ="", nik = 0, jenisKelamin = "", asalUniv = "", emailEdu = ""):
        #untuk mengakses variabel dan metode pada parent
        super().__init__(asalUniv, emailEdu, nama, nik, jenisKelamin)
        self.nip = nip
        self.fakultas = fakultas
        self.pend_terakhir = pend_terakhir
        self.keahlian = keahlian
       
    #setter 
    def setNip(self, nip):
        self.nip = nip
    
    def setFakultas(self, fakultas):
        self.fakultas = fakultas
        
    def setPend_terakhir(self, pend_terakhir):
        self.pend_terakhir = pend_terakhir
        
    def setKeahlian(self, keahlian):
        self.keahlian = keahlian
        
    #getter 
    def getNip(self):
        return self.nip
    
    def getFakultas(self):
        return self.fakultas
    
    def getPend_terakhir(self):
        return self.pend_terakhir
    
    def getKeahlian(self):
        return self.keahlian