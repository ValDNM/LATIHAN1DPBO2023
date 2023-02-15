/*Saya Muhamad Naufal Daffa mengerjakan Latihan 1
	dalam mata kuliah DPBO untuk keberkahanNya maka 
	saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

public class Mahasiswa{
	//atribut mahasiswa
	private String nama;
	private String nim;
	private String prodi;
	private String fakultas;

	//constructors
	Mahasiswa(){}		//konstruktor kosong

	Mahasiswa(String p_nama, String p_nim, String p_prodi, String p_fakultas){		//konstrutor langsung isi
		nama = p_nama;
		nim = p_nim;
		prodi = p_prodi;
		fakultas = p_fakultas;
	}

	//Getter & Setter Methods
	public String getNama(){
		return nama;
	}

	public String getNim(){
		return nim;
	}

	public String getProdi(){
		return prodi;
	}

	public String getFakultas(){
		return fakultas;
	}

	public void setNama(String p_nama){
		nama = p_nama;
	}

	public void setNim(String p_nim){
		nim = p_nim;
	}

	public void setProdi(String p_prodi){
		prodi = p_prodi;
	}

	public void setFakultas(String p_fakultas){
		fakultas = p_fakultas;
	}
}