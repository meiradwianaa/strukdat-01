/*
Nama Program	: Fizz Buzz 
Nama 			: Meira Dwiana Anjani
NPM				: 140810180015
Tanggal Buat	: 26 Februari 2018
Deskripsi		: Fizz untuk angka kelipatan 3 Buzz untuk angka kelipatan 5
*/

#include<iostream>

using namespace std;

void fizzbuzz(){                    //looping fizzbuzz
    for(int i=1;i<=100;i++){
        if(i%15==0){
            cout << "fizzbuzz"<<endl;
        }
		else if(i%5==0){
            cout << "buzz"<<endl;   //angka bisa dibagi 5
        }
		else if(i%3==0){                 //angka bisa dibagi 3
            cout << "fizz"<<endl;    // angka bisa dibagi 3 dan 5
        }
		else cout<<i<<endl;
    }
}

int main()
{
    fizzbuzz();
    return 0;
}

