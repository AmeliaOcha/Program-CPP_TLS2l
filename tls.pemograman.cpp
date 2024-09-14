#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> arrn(n);
	map<int, int> modus;
	for(int a = 0; a < n; a++){
		cin >> arrn[a];
	}
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
