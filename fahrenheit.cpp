/*
Nama Program	: celcius ke fahrenheit
Nama 			: Meira Dwiana Anjani
NPM				: 140810180015
Tanggal Buat	: 26 Februari 2018
Deskripsi		: mengeluarkan fahrenheit suhu
*/

#include<iostream>

using namespace std;

void fahrenheit(){
	float fah;
	int cel;
	cout<<"Masukkan Celcius  :  "; cin>>cel;
	cout<<endl;
	fah = ((cel * 1.8) + 32);
	cout<<fah;
	
}


int main (){
	int cel;
	float fah;
	fahrenheit();
}
