// 0118_intoOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class mahasiswa {
	public: // akses modifier
		string nama;
		int umur;
		string jurusan;

		void output() {
			cout << "nama:" << endl;
			cout << "umur:" << endl;
			cout << "jurusan:" << endl;
		}
};

class matakuliah {
	private:
		string kodeMK;
		string namaMK;
		int sks;
	public:
		void input() {
			cout << "kodeMK:";
			cin >> kodeMK;
			cout << "namaMK:";
			cin >> namaMK;
			cout << "sks:";
			cin >> sks;
		}

		void output() {
			cout << "kodeMK:" << kodeMK << endl;
			cout << "namaMK:" << namaMK << endl;
			cout << "sks:" << sks << endl;
		}

};

int main(){
	mahasiswa mhs;
	matakuliah mk;

	mhs.nama = "budi";
	mhs.umur = 20;
	mhs.jurusan = "teknik informatika";
	mhs.output();

	mk.input();
	mk.output();

	return 0;
}

#include <iostream>
using namespace std;

class bangunDatar {

	// akses modifier
	private:
		float panjang, lebar;
	public:
		float luas;

		void input(){// metode input persegi panjang
			cout << "masukkan panjangnya = ";
			cin >> panjang;
			cout << "masukkan lebarnya = ";
			cin >> lebar;
		}

		float hitungluas() {
			return panjang * lebar;
		}

		void display() {
			cout << "panjangnya=" << panjang << endl;
			cout << "lebarnya=" << lebar << endl;
			cout << "luasnya=" << luas << endl;
		}

};

int main() {
	bangunDatar pp; //deklarasi pp dari class bangundatar
	pp.input();
	pp.display();

	return 0;
}