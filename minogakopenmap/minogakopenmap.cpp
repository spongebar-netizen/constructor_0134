#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printALL();
	mahasiswa(string pnama)
	{
		nama = pnama;
		setID();

	}
};

int mahasiswa::nim = 10;

void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printALL()
{
	cout << "ID =" << id << endl;
	cout << "Nama =" << nama << endl;
	cout << endl;
}

int main()
{
	mahasiswa mhs1("barats kecil");
	mahasiswa mhs2("mino gak open map");
	mahasiswa mhs3("yz kalah lawan terizla");
	mahasiswa mhs4("faramis telat ulti");

	mhs1.printALL();
	mhs2.printALL();
	mhs3.printALL();
	mhs4.printALL();
	return 0;
}