#include <iostream>

using namespace std;

// Input
class Nilai {
  public:
  void input(){
  cout <<" +---------------------------------------+ "<< endl;
  cout <<" |          PROGRAM INPUT NILAI          | "<< endl;
  cout <<" +---------------------------------------+ "<< endl;
  cout <<" | Masukkan nama dosen       : "; getline(cin,a);
  cout <<" | Masukkan Matakuliah       : "; getline(cin,b);
  cout <<" | Masukkan jumlah mahasiswa : "; cin>>n;
  cout <<" +---------------------------------------+ "<< endl;
      
      for( i = 1; i <=n; i++ ){
        cout<<" Masukan nilai mahasiswa "<<" ke-"<<i<<" : "; cin>>nilai[i];
        }
      }

// Proses
float proses(){
  jumlah = 0;
  for ( i = 1; i <= n; i++ ){
    if ( i == 1){
      min = nilai[i];
      max = nilai[i];
}
    if ( min > nilai[i] ) {
      min = nilai[i];
}
    else if ( max < nilai[i]) {
      max = nilai[i];
}
    jumlah += nilai[i];
    rata = jumlah/n;
}

  cout<<endl;
  cout<<" Nilai minimal   = "<<min<<endl;
  cout<<" Nilai maksimal  = "<<max<<endl;
  cout<<" Nilai rata-rata = "<<rata<<endl;
    return rata;
  }

// Output
void output(){
  cout <<" +---------------------------------------+ "<< endl;
  cout <<" |           DAFTAR NILAI ALPRO          | "<< endl;
  cout <<" +---------------------------------------+ "<< endl;
  cout <<" | Nama Dosen : "<< a <<"                 | "<< endl;
  cout <<" | Banyaknya mahasiswa : "<< n <<"               | "<<endl;
  cout <<" +---------------------------------------+ "<< endl;
   
  for( i = 1; i <=n; i++ ){
  cout<<" | Nilai mahasiswa ke-"<<i<<" = "<<nilai[i]<<endl;
}
  cout <<" +---------------------------------------+ "<< endl;      
  cout <<" | Jumlah mahasiswa:"<<n<<"        | "<<endl;;
  cout <<" +---------------------------------------+ "<< endl;
        cout <<" | Rata-rata nilai mhs  : "<<rata<<" | "<<endl;
        cout <<" | Nilai minimal        : "<<min<<" | "<<endl;
        cout <<" | Nilai maksimal       : "<<max<<" | "<<endl;   
          }

  private:
  	int i, n, min, max;
    float nilai[100], jumlah, rata;
    string a, b, c;
};

int main(){
  Nilai awal;
  awal.input();
  awal.proses();
  awal.output();
}