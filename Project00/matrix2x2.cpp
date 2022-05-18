#include <conio.h>
#include <iostream>

using namespace std;
int main(){
    int A[2][2], B[2][2], C[2][2];

    cout<<"Masukan Matriks A\n"<<endl;
    for(int i=1;i<3;i++)
    {
       for(int j=1;j<3;j++)
       {
          cout<<"A["<<i<<"]["<<j<<"]: ";
          cin>>A[i][j];
       }
    }
   cout<<"\n\n";

   cout<<"Matriks\n";
   for(int i=1;i<3;i++)
   {
      for(int j=1;j<3;j++)
      {
         cout<<" "<<A[i][j];
      }
      cout<<"\n"<<endl;
   }

    cout<<"transpose matrik"<<endl;
    for(int i=1;i<3;i++)
    {
       for(int j=1;j<3;j++)
       {
           B[j][i]=A[i][j];
       }
    }
    for(int i=1;i<3;i++)
    {
       for(int j=1;j<3;j++)
       {
            cout<<" "<<B[i][j];
       }
         cout<<"\n"<<endl;
    }

 cout<<"jumlah A + B : "<<endl;
 for(int i=1;i<3;i++)
    {
       for(int j=1;j<3;j++)
       {
            C[i][j]=B[i][j]+A[i][j];
       }
    }

 for(int i=1;i<3;i++)
    {
       for(int j=1;j<3;j++)
       {
            cout<<" "<<C[i][j];
       }
         cout<<"\n"<<endl;
    }
return 0;
getch();
}