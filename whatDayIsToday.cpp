#include <iostream>
using namespace std;

int tanggal,bulan,tahun,isKabisat,jumlahHari;
string hari[] = {"Jumat","Sabtu","Minggu","Senin","Selasa","Rabu","Kamis"};
int year[] = {31,28,31,30,31,30,31,31,30,31,30,31};
int now = 0;

int main(){
	cout<<"Input Tanggal : ";
	cin >>tanggal;
	cout<<"Input Bulan : ";
	cin >> bulan;
	cout<<"Input Bulan : ";
	cin >> tahun;
	cout<<tanggal<<"-"<<bulan<<"-"<<tahun;
	cout<<"\n";
	
	isKabisat = tahun%4;
	cout<<"Sisa tahun dibagi 4 : "<<isKabisat<<"\n";
	if(isKabisat == 0){
		year[1] = 29;
	}else{
		year[1] = 28;
	}
	
	cout<<"bulan februari : "<<year[1]<<"\n";
	
	for(int x=0;x<12;x++){
		jumlahHari = jumlahHari + year[x];
	}
	cout<<"Jumlah Hari : "<<jumlahHari<<"\n";
	
	int h = 0;
	for(int i=0;i<bulan-1;i++){
		h = h + year[i];
	}
	
	h = h + tanggal;
	cout<<"h : "<<h<<" \n";
	int k = (tahun-1)/4;
	cout<<"k : "<<k<<"\n";
	int S = (tahun + h + k ) % 7;
	cout<<"S :"<<S<<"\n";
	cout<<"Hari : "<<hari[S];
	
	return 0;
}


