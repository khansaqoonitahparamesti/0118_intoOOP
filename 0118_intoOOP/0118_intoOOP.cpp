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

};