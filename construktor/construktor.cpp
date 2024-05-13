#include<iostream>
#include<string>
using namespace std;

class Mahasiswa
{
public:
	long int nim;
	string nama;

public:
	Mahasiswa()
	{
		nim = 20230140134;
		nama = "Lalu Idrak Yadafi Fatan Nuraga";

	};
	Mahasiswa(int iNim) {
		nim = iNim;
	}
	Mahasiswa(string iNama) {
		nama = iNama;
	}
	Mahasiswa(int iNim, string iNama) {
		nim = iNim;
		nama = iNama;
	}

	void cetak() {
		cout << "NIM =" << nim << endl;
		cout << "Nama = " << nama << endl;
		cout << endl;
	}
};

int main() {
	Mahasiswa mhs1;
	Mahasiswa mhs2(20);
	Mahasiswa mhs3("bayam");
	Mahasiswa mhs4(30,"fikar");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();
	return 0;
}