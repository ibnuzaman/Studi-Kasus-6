#include <iostream>
using namespace std;

int main(){
	
	int max = 5;
	int top = -1;
	string keranjang[max];
	string temp;
	int no_index,pilihan;
		cout << "- SABUN\n";
		cout << "- BAJU\n";
		cout << "- KOPI\n";
		cout << "- TAS\n";
		cout << "- GALON\n";
		cout << endl << endl;
	do{
		cout << endl;
		cout << "Pilihan\n1.Tambah\n2.Ubah\n3.Selesai\n";
		cout << endl;
		cout << "Pilihan : ";
		cin >> pilihan;
		switch (pilihan)
		{
		case 1:
			if(top==max-1){
			cout <<"Keranjang Penuh" << endl;
			} else{
			top++;
			cout << "Pilih barang = ";
			cin >> keranjang[top];
			cout << "Barang berhasil ditambah\n";
			break;
		}
		case 2:
			cout << "Data yang diubah : ";
			cin >> no_index;
			cout << "Barang pertama "<<keranjang[no_index-1];
			cout << endl;
			cout << "index baru : ";
			cin >> temp;
			keranjang[no_index-1] = temp;
			break;
		case 3:
		pilihan = 3;
		default:
			cout <<"Pilihan salah\n";
			break;

		}
		cout << endl << endl;
		cout << "Isi keranjang  "<< endl << endl;
		for(int a = 0; a<=top;a++){
			cout <<a+1<<". "<<keranjang[a]<<endl;
		}
	}while(pilihan !=3);
	cout << "Silahkan bayar \n";
}