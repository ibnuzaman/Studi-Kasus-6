#include <iostream>
using namespace std;

class Hitung{
    public:
    void input(){
    cout << "Masukkan jumlah data "; cin >> d;
    for (int i = 0; i < d ; i++)
    {
        cout << "Masukkan nilai "; cin >> a;
        if(i==0){
            min=a;
            maks=a;
        }else{
            if(a>maks){
                maks = a;
            }
            if(a<min){
                min = a;
            }
        }
    }

    }
   void output(){
    cout << "Nilai maksimal : " << maks << endl;
    cout << "Nilai minimum  : " << min << endl;
    
   }
   private:
   int a,maks,min,d;
};
int main(){
    Hitung x;
    x.input();
    x.output();
}