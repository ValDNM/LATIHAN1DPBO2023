import java.util.Scanner;

public class Main{
	public static void main(String[] args){

		//meminta input jumlah mahasiswa
		int n = 0;
		System.out.print("Jumlah Mahasiswa:");
		Scanner sc = new Scanner(System.in);

		try{
			n = sc.nextInt();
		}catch(Exception e){}

		//array of objek mahasiswa
		Mahasiswa[] arrMhs = new Mahasiswa[n];

		//meminta input
		int i = 0;			//iterator

		//variable-variable temporary untuk menampung input untuk dipakai instansiasi objek
		String nama = "";
		String nim = "";
		String prodi = "";
		String fakultas = "";

		//for loop utama
		for(i=0;i<n;i++){
			System.out.println("Mahasiswa " + (i+1));
			System.out.print("Nama    : ");
			try{
				nama = sc.next();
			}catch(Exception e){}

			System.out.print("Nim     : ");
			try{
				nim = sc.next();
			}catch(Exception e){}

			System.out.print("Prodi   : ");
			try{
				prodi = sc.next();
			}catch(Exception e){}

			System.out.print("Fakultas: ");
			try{
				fakultas = sc.next();
			}catch(Exception e){}

			arrMhs[i] = new Mahasiswa(nama, nim, prodi, fakultas);		//instansiasi individual objek mahasiswa
		}
		
		//output data mahasiswa
		System.out.println("============ DATA MAHASISWA ============");
		
		for(i=0;i<n;i++){
			System.out.println("Mahasiswa " + (i+1));
			System.out.println("Nama    : " + arrMhs[i].getNama());
			System.out.println("Nim     : " + arrMhs[i].getNim());
			System.out.println("Prodi   : " + arrMhs[i].getProdi());
			System.out.println("Fakultas: " + arrMhs[i].getFakultas());
		}
		
	}
}