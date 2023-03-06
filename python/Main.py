from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Prodi import Prodi
from Course import Course

arrMhs = []
arrDosen = []
arrProdi = []
arrCourse = []

arrCourse.append(Course("teknik_berbicara", "Toto"))

arrMhs.append(Mahasiswa(210776, "Dita", "Perempuan", "UPI", "dita@upi.edu"))

arrDosen.append(Dosen(1109876356, "Ilmu_Komunikasi", "sarjana2", "mengajar", "Toto", 568372304, "L", "UPI", "toto@upi.edu" ))

arrProdi.append(Prodi("ilmu_komunikasi", "LK21", arrCourse, arrDosen, arrMhs))

for Mahasiswa in arrMhs:
    print(Mahasiswa)

print("=================================")
print("========Data Program Studi=======")
  
i = 0
for data in arrProdi:
    print("Program Studi  : ", data.getNama_prodi())
    print("Kode           : ", data.getKode())
    print("Dosen pengampu : ", data.getDosen())
    print("Mata Kuliah    : ", data.getCourse())
    i+=1


print("=================================")
print("==========Data Course============")
j = 0
for data in arrCourse:
    print("Mata Kuliah : ", data.getNama_matkul())
    j+= 1
    
print("=================================")
print("==========Data Mahasiswa=========")
k = 0
for data in arrMhs:
    print("Nama     : ", data.get)