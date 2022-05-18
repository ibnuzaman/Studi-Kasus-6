#include <iostream>
using namespace std;

int main (){
    int a,maks,min,d;
    
    cout << "Masukkan jumlah data "; cin >> d;
    for (int i = 1; i <= d ; i++)
    {
        cout << "Masukkan nilai "; cin >> a;
        if(a==1){
            a=min;
            a=maks;
        }
        else{
            if(a>maks){
                maks = a;
            }
            if(a<min){
                min = a;
            }

        }
    }
    cout << "Nilai maks " << maks << endl;
    cout << "Nilai min " << min;
}