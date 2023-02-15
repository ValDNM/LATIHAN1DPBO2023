<?php
/*Saya Muhamad Naufal Daffa mengerjakan Latihan 1
	dalam mata kuliah DPBO untuk keberkahanNya maka 
	saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */
include "Mahasiswa.php"

//instansiasi objek mahasiswa
$Mhs_01 = new Mahasiswa();

//assign value ke atribut objek dengan menggunakan method set
$Mhs_01->setNama("Bob");
$Mhs_01->setNim("2000012");
$Mhs_01->setProdi("Ilmu Komunikasi");
$Mhs_01->setFakultas("FPBCDEFG");

//mengambil value atribut objek dengan method get
echo "Mhs_01: ".$Mhs_01->getNama()." ".$Mhs_01->getNim()." ".$Mhs_01->getProdi." ".$Mhs_01->getFakultas()."<br/>";

?>