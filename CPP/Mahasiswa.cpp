#include <iostream>
#include <string>


class Mahasiswa{
	private:
		//Atribut Mahasiswa
		std::string nama;
		std::string nim;
		std::string prodi;
		std::string fakultas;
	public:
		//constructor kosong
		Mahasiswa(){}
		//constructor langsung isi
		Mahasiswa(std::string p_nama, std::string p_nim, std::string p_prodi, std::string p_fakultas): nama(p_nama), nim(p_nim), prodi(p_prodi), fakultas(p_fakultas){}

		//getter methods
		std::string getNama(){
			return nama;
		}

		std::string getNim(){
			return nim;
		}

		std::string getProdi(){
			return prodi;
		}

		std::string getFakultas(){
			return fakultas;
		}


		//setter methods
		void setNama(std::string p_nama){
			nama = p_nama;
		}

		void setNim(std::string p_nim){
			nim = p_nim;
		}

		void setProdi(std::string p_prodi){
			prodi = p_prodi;
		}

		void setFakultas(std::string p_fakultas){
			fakultas = p_fakultas;
		}


		//destructor
		~Mahasiswa(){}

};