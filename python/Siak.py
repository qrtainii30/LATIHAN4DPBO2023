#import data dari file Human
from Human import Human
#Siak yang merupakan anak dari Human
class Siak(Human):
    
    #constructor
    def __init__(self, asalUniv = "", emailEdu = "", nik = 0, nama = "", jenisKelamin = ""):
        #untuk mengakses variabel dan metode pada parent
        super().__init__(nik, nama, jenisKelamin)
        self.asalUniv = asalUniv
        self.emailEdu = emailEdu
    
    #setter untuk asal universitas dan email edu
    def setAsalUniv(self, asalUniv):
        self.asalUniv = asalUniv
    
    def setEmailEdu(self, emailEdu):
        self.emailEdu = emailEdu
    
    #getter untuk asal universitas dan email edu
    def getAsalUniv(self):
        return self.asalUniv
    
    def getEmailEdu(self):
        return self.emailEdu