#Import class file
from Mahasiswa import Mahasiswa

# array/list untuk menampung objek
listMhs = []

#meminta input jumlah mahasiswa
n = int(input('Jumlah Mahasiswa: '))

#meminta input data mahasiswa dan append ke listMhs
for i in range(n):
	print('Mahasiswa ' + str(i + 1))
	temp_nama = input('Nama    : ')
	temp_nim = input('Nim     : ')
	temp_prodi = input('Prodi   : ')
	temp_fakultas = input('Fakultas: ')
	#instansiasi objek
	listMhs.append(Mahasiswa(temp_nama, temp_nim, temp_prodi, temp_fakultas))

#output data mahasiswa
print('============ DATA MAHASISWA ============')
i = 0
for mhs in listMhs:
	print('Mahasiswa ' + str(i + 1))
	print('Nama    : ' + mhs.getNama())
	print('Nim     : ' + mhs.getNim())
	print('Prodi   : ' + mhs.getProdi())
	print('Fakultas: ' + mhs.getFakultas())
	i += 1