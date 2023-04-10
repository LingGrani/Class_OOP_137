#include <iostream>
using namespace std;

class Mahasiswa
{
public:
	string nim;
	string nama;
public: 
	void cetak() {
		cout << "\nNIM" << nim;
		cout << "\nNama" << nama;
	}
	void input() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cout << "Masukan Nama : ";
		cin >> nama;
	}
};

class Matakuliah
{
private:
	string kode;
	string namaM;
	int sks;
public:
	void input() {
		cout << "\nMasukan Kode Matakuliah ";
		cin >> kode;
		cout << "Masukan Nama Matakuliah ";
		cin >> namaM;
		cout << "Jumlah SKS ";
		cin >> sks;
	}
	void tampil() {
		cout << "\nKode Matakuliah : " << kode;
		cout << "\nNama Matakuliah : " << namaM;
		cout << "\nSKS : " << sks;
	}
};

int main()
{
	Mahasiswa mhs1;
	Matakuliah mk;

	mhs1.input();
	mhs1.cetak();

	mk.input();
	mk.tampil();
};