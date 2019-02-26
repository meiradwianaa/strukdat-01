/*
Nama Program	: swap
Nama 			: Meira Dwiana Anjani
NPM				: 140810180015
Tanggal Buat	: 26 Februari 2018
Deskripsi		: menukar angka
*/

#include<iostream>

using namespace std;

void swap (int& x, int& y){
	int temp;
	temp=x;
	x=y;
	y=temp;

}
main (){
	int x,y;
	cout <<"x : ";
	cin>>x;
	cout <<"y : ";
	cin>>y;
	
	swap(x,y);
	cout <<"\nSWAP\n"<<endl;
	cout <<"x : "<<x<<endl;
	cout <<"y : "<<y<<endl;
}

