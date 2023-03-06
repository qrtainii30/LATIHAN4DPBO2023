class Course(): 
    
    def __init__(self, nama_matkul = ""):
        self.nama_matkul = nama_matkul
    
    def setNama_matkul(self, nama_matkul):
        self.nama_matkul = nama_matkul
    
    def getNama_matkul(self):
        return self.nama_matkul