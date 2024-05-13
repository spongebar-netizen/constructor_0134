#include<iostream>
#include<string>
using namespace std;

class mahasiswa {
private:
    static long int nim;
public:
    long int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) { nim = pNim; }
    static int getNim() { return nim; }
    mahasiswa(string pnama) {
        nama = pnama;
        setID();
    }

};

long int mahasiswa::nim = 20230140134;
void mahasiswa::setID() {
    id = ++nim;
}
void mahasiswa::printAll() {
    cout << "ID   = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main() {
    mahasiswa mhs1("Lalu Idrak Yadafi Fatan Nuraga");
    mahasiswa mhs2("Rafi Mino");
    mahasiswa::setNim(9);
    mahasiswa mhs3("Rifqi x bok");
    mahasiswa mhs4("Dito yz");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar object = " << mahasiswa::getNim() << endl;
}