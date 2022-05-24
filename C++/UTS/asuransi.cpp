#include <iostream>
using namespace std;

int main(){
    string asuransi = "y";
    cout << "Apakah anda ingin menambahkan asuransi <y/t>?\n";
    cin >> asuransi;
    if(asuransi=="y"){
        cout << "Dikenakan biaya sebesar Rp.500\n";
    }else{
        cout << "yaudah gajadi";
    }
}