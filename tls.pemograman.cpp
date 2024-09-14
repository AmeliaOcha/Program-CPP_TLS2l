#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "--Selamat datang di program sederhana untuk menentukan nilai modus terbesar--" <<endl;
	cout << "Masukkan berapa banyak angka atau data yang akan kamu tentukan nilai modusnya : ";
	cin >> n;
	cout << endl;
	cout << "Masukkan angka atau data : ";
	vector<int> arrn(n);
	map<int, int> modus;
	for(int a = 0; a < n; a++){
		cin >> arrn[a];
	}
	cout << endl;
	for(int a = 0; a < n; a++){
		modus[arrn[a]]++;
	}
	int terbesar = 0, hasil = 0;
	for(auto &m : modus){
		if(terbesar <= m.second){
			terbesar = m.second;
			hasil = m.first;
		}
	}
	cout << hasil; 
}
