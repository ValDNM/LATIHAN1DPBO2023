<?php
class Mahasiswa{
	private $nama = "";
	private $nim = "";
	private $prodi = "";
	private $fakultas = "";

	//method constructor
	public function __construct(){}

	//methods setter
	public function setNama($p_nama){
		$this->nama = $p_nama;
	}

	public function setNim($p_nim){
		$this->nim = $p_nim;
	}

	public function setProdi($p_prodi){
		$this->prodi = $prodi;
	}

	public function setFakultas($p_fakultas){
		$this->fakultas = $p_fakultas;
	}

	//methods getter
	public function getNama(){
		return $this->nama;
	}

	public function getNim(){
		return $this->nim;
	}

	public function getProdi(){
		return $this->prodi;
	}

	public function getFakultas(){
		return $this->fakultas;
	}
}

?>