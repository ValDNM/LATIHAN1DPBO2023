/*Saya Muhamad Naufal Daffa mengerjakan Latihan 1
	dalam mata kuliah DPBO untuk keberkahanNya maka 
	saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

#include "Mahasiswa.cpp"

int main(){

	//Meminta input jumlah mahasiswa
	int n = 0;
	std::cout << "Jumlah Mahasiswa: ";
	std::cin >> n;

	//Array of object Mahasiswa / Instansiasi array of obj
	Mahasiswa mhs[n];

	//Meminta input data tiap mahasiswa dan memasukan data ke objek Mahasiswa yang sudah di instansiasi
	int i = 0;
	std::string temp_str;			//variable temporary untuk menampung string masukan
	for(i=0;i<n;i++){
		std::cout << "Mahasiswa " << i+1 << ":" << std::endl;
		std::cout << "Nama    : " ;
		std::cin >> temp_str;
		mhs[i].setNama(temp_str);
		std::cout << "Nim     : " ;
		std::cin >> temp_str;
		mhs[i].setNim(temp_str);
		std::cout << "Prodi   : " ;
		std::cin >> temp_str;
		mhs[i].setProdi(temp_str);
		std::cout << "Fakultas: ";
		std::cin >> temp_str;
		mhs[i].setFakultas(temp_str);
	}

	//Menampilkan data Mahasiswa hasil input
	std::cout << std::endl << "============ DATA MAHASISWA ============" << std::endl;

	for(i=0;i<n;i++){
		std::cout << "Mahasiswa " << i+1 << std::endl;
		std::cout << "Nama    : " << mhs[i].getNama() << std::endl;
		std::cout << "Nim     : " << mhs[i].getNim() << std::endl;
		std::cout << "Prodi   : " << mhs[i].getProdi() << std::endl;
		std::cout << "Fakultas: " << mhs[i].getFakultas() << std::endl;
	}


	return 0;
}