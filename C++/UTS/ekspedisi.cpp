#include <iostream>
using namespace std;

int main(){
	
	string b = "J&T";
	string c = "J&E";
	int opsi,opsi1,total;
	int reg1=16000; int reg2 = 15000;
	int kar1=20000; int kar2 = 20000;
	int ex1=25000;  int ex2 = 25000;
	
	cout << " 1.J&T\n 2.JnE\n";
	cout << "pilih jasa pengirim \n";
	cin >> opsi;
	cout << endl;
	
	if (opsi==1){
		
		cout <<"1.Reguler	Rp16.000\n";
		cout <<"2.Kargo		Rp20.000\n";
		cout <<"3.Express	Rp25.000\n";
		cout <<"Pilih paket \n";
		cin >> opsi1;
		switch (opsi1){
			case 1:
				opsi1==reg1;
				total+=reg1;
				break;
			case 2:
				opsi1==kar1;
				total+=kar1;
				break;
			case 3:
				opsi1==ex1;
				total+=ex1;
			default:
				cout << "Paket tidak ditemukan";
		}
		cout << total;
	}else{
		cout <<"1.Reguler	Rp15.000\n";
		cout <<"2.Kargo		Rp20.000\n";
		cout <<"3.Express	Rp25.000\n";
		cout <<"Pilih paket \n";
		cin >> opsi1;
		switch (opsi1){
			case 1:
				opsi1==reg2;
				total+=reg2;
				break;
			case 2:
				opsi1==kar2;
				total+=kar2;
				break;
			case 3:
				opsi1==ex2;
				total+=ex2;
			default:
				cout << "Paket tidak ditemukan";
		}
		cout << total;
	}
	
}

