#include<conio.h>
#include<iostream>

using namespace std;

struct mahasiswa{
  char nim[15];
  char nama[30];
  char alamat[50];
};

int main(){
   mahasiswa mhs;
   cout<<"Nama   : "; cin>>mhs.nama;
   cout<<"Nim    : "; cin>>mhs.nim;
   cout<<"Alamat : "; cin>>mhs.alamat;

   cout<<endl<<endl;

   cout<<"Nim Anda    : "<<mhs.nim<<endl;
   cout<<"Nama Anda   : "<<mhs.nama<<endl;
   cout<<"Alamat Anda : "<<mhs.alamat<<endl;
return 0;
getch(); 
}