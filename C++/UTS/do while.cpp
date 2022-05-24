#include <iostream>

using namespace std;

int main(){
	
	int max = 5;
	int top = -1;
	string keranjang[max];
	string temp;
	int no_index,pilihan,harga,total;
	
	menu2:
		cout << "1.SABUN  = Rp.7.000\n";
		cout << "2.BAJU   = Rp.8.000\n";
		cout << "3.KOPI   = Rp.9.000\n";
		cout << "4.TAS    = Rp.10.000\n";
		cout << "5.GALON  = Rp.11.000\n";
		cout << endl << endl;
	
	do{
		cout << "Pilihan\n 1.Tambah\n 2.Selesai\n";
		cout << "Pilihan : ";
		cin >> pilihan;
		
		switch (pilihan)
		{
		case 1:
			if(top==max-1){
			cout <<"Keranjang Penuh" << endl;
			} else{
			top++;
      		cout << "*Masukin nama barang dengan huruf kapital\n\n";
			cout << "Pilih barang = ";
			cin >> keranjang[top];
			
			for(int a=0; a<=top; a++)
			if(keranjang[a]=="SABUN")
			{
				harga=7000;
			}
			else if(keranjang[a]=="BAJU"){
				harga=8000;
			}
			else if(keranjang[a]=="KOPI"){
				harga=9000;
			}
			else if(keranjang[a]=="TAS"){
				harga=10000;
			}
			else if(keranjang[a]=="GALON"){
				harga=11000;
			}
			else{
				cout<<" Barang Tidak ada "<<endl;
				harga=0;
			}
			
			total=total+harga;
			
			cout << "Barang berhasil ditambah\n";
			break;
		}
		
		case 2:
			break;
		default:
			cout <<"Pilihan salah\n";
			system("pause");
			system("cls");
			goto menu2;
		}
		cout << endl << endl;
		cout << "Isi keranjang  "<< endl;
		for(int a = 0; a<=top;a++){
			cout <<a+1<<". "<<keranjang[a]<<endl;
		}
	}while(pilihan !=2);
	cout << "Silahkan bayar \n";
	cout<<total<<endl;
}
