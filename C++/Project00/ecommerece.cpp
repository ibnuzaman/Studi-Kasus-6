#include <iostream>
#include <fstream>

using namespace std;

class UTS{
public:
  void input();
  float proses();
  void output();

private:
  string nama, alamat;
  int pass;
  float saldo, asuransi;
};

// Input
  void UTS::input(){
ulang:
  cout <<" +---------------------------------------+ "<< endl;
  cout <<" |        PROGRAM PEMBELIAN BARANG       | "<< endl;
  cout <<" +---------------------------------------+ "<< endl;
  cout <<"  Username       : "; getline(cin,nama);
  cout <<"  Password       : "; cin>>pass;
  cin.ignore();
  cout <<" +---------------------------------------+ "<< endl;

    if(nama=="Ibnu")
    {
      if(pass==150)
      {
        saldo = 23;
        alamat = "sad";
        system("cls");
        goto menu;
      }
      else
      {
        cout << "Username atau Password salah \n";
        system("cls");
		goto ulang;
      }
    }
    else if(nama=="Faris")
    {
      if(pass==169)
      {
        saldo = 300000;
        alamat = "Karawang";
        system("cls");
        goto menu;
      }
      else
        {
        cout<<" Username atau Password salah \n";
        system("cls");
		goto ulang;
        }
    }
    else if(nama=="Arisandi")
    {
      if(pass==160){
        saldo = 231;
        alamat = "das";
        system("cls");
        goto menu;
      }
      else
      {
        cout << "Username atau Password salah \n";
        system("cls");
		goto ulang;
      }
    }

menu:
	cout <<" +---------------------------------------+ "<< endl;
	cout <<" |        PROGRAM PEMBELIAN BARANG       | "<< endl;
	cout <<" +---------------------------------------+ "<< endl;
	cout <<"  Nama 	 : "<<nama<<endl;
	cout <<"  Alamat : "<<alamat<<endl;
 	cout <<"  Saldo  : "<<saldo<<endl;
	cout <<" +---------------------------------------+ "<< endl;
    }
    
// Proses
  float UTS::proses(){
    
  }

// Output
  void UTS::output(){
    
  }
 
int main() {
  
  UTS a;
  a.input();
  a.proses();
  a.output();


}