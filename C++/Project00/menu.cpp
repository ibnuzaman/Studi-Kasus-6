#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <fstream>

using namespace std;

class barang //class yang memuat data data dari barang dan fungsi transaksi
{
public:
    struct produk //struct untuk data data barang
        {
            char kode[25];
            char nama[25];
            int harga;
            int stok;
        } prod[100]; //banyak barang yang bisa dimuat
    int sum; //variabel untuk menentukan perintah looping atau banyaknya barang
    void tulis();
    void baca();
    void daftarBarang(int n);
    void pilihan();
} item; //objek dari barang, maksimal menampung 100 item

struct belanja //digunakan untuk menampung data sementara pada opsi pembelian
{
    char kode[25];
    char nama[25];
    int harga;
    int jumlah;
}beli[100]; //onjek dari beli, maksimal menampung 100 item

//Fungsi pada menu 1
void barang::tulis() //fungsi dari class barang yang berfungsi untuk menulis data(tambah barang)
{
    int n=0,x=0,i;
    char lagi;
    ifstream dataBaca("stok.dat"); //pembuatan objek untuk pembacaan data
    dataBaca.read((char*)&item,sizeof(item)); //operasi file untuk proses pembacaan data

    cout<<"Pilih Opsi !\n1. Tambah Barang\n2. Ubah Stok\n3. Lihat Daftar Barang\n4. Reset Barang\n5. Keluar"<<endl;
    cout<<"pilihan: ";
    cin>>x;
    system("cls");
    switch(x)
    {
    case 1: //Submenu 1
        {
            n=sum;
            ofstream dataTulis("stok.dat"); //pembuatan objek untuk penulisan data
            do{
                daftarBarang(n);
                cout<<"Kode Barang: ";
                    cin>>prod[n].kode;
                cout<<"Nama Barang: "; fflush(stdin);
                    cin.get(prod[n].nama,25);
                cout<<"Harga Barang: ";
                    cin>>prod[n].harga;
                cout<<"Jumlah Stok: ";
                    cin>>prod[n].stok;
                cout<<"Tambah Lagi[Y/N]: ";
                cin>>lagi;
                n++;
                system("cls");
            }while(lagi=='y' ||lagi=='Y');
            sum=n;
            dataTulis.write((char*)&item,sizeof(item)); //operasi file untuk penulisan data
            dataBaca.close(); //memanggil fungsi penutupan file
            dataTulis.close(); //memanggil fungsi penutupan file
            item.pilihan();//memanggil fungsi pilihan dari object class barang
        }break;

    case 2: //Submenu 2
        {
            int banding,j,tambah;
            char kodeMasuk[10];
            ofstream dataTulis("stok.dat"); //pembuatan objek untuk penulisan data

            do{
                system("cls");
                daftarBarang(sum);

                cout<<"Piih Kode Barang: ";
                cin>>kodeMasuk; //kode diinputkan melalui keyboard

                for(i=0; i<sum; i++)
                {
                    //Proses pencocokan kode yang diinptkan dengan kode barang yang sudah terdaftar
                    banding=strcmpi(kodeMasuk,prod[i].kode); //jika kode sama maka nilai banding adalah 0
                    if(banding==0)
                        break; //jika nilai banding sudah bernilai nol maka looping akan berhenti

                }

                if(banding==0)
                {
                    cout<<"Nama Barang: "<<prod[i].nama<<endl;
                    cout<<"Tambah Stok: ";
                    cin>>tambah;
                    prod[i].stok+=tambah;
                }else cout<<"Kode Salah !"<<endl;

                cout<<"Ubah Stok Lagi[Y/N]: ";
                cin>>lagi;
            }while(lagi=='y' || lagi=='Y');

            system("cls"); //Menghapus layar

            dataTulis.write((char*)&item,sizeof(item)); //operasi file untuk penulisan data
            dataTulis.close(); //memanggil fungsi penutupan file
            dataBaca.close(); //memanggil fungsi penutupan file
            item.pilihan(); //memanggil fungsi pilihan dari object class barang

        }break;

    case 3: //Submenu 3
        {
            daftarBarang(sum);
            dataBaca.close(); //memanggil fungsi penutupan file
            item.pilihan();
        }break;

    case 4: //Submenu 4
        {
            ofstream dataTulis("stok.dat"); //pembuatan objek untuk penulisan data
            sum=0; //nilai sum direset ke nilao 0
            //bertujuan agar ketika data diinpukan data sebelumny ayang telah diisi akan ditimpa dengan data yang baru karena nilai array dimulai dari 0 lagi

            dataTulis.write((char*)&item,sizeof(item)); //operasi file untuk penulisan data
            item.pilihan();
        }break;

    case 5: //Submenu 5
        {
            exit(0);
            dataBaca.close();
        }break;

    default:
        cout<<"Pilihan Salah";
    }
}

//Fungsi pada menu 2
void barang::baca() //selain untuk membaca data,fungsi ini juga memuat prosens transaksi belanja
{
    int i,j=0,banding;
    int total=0;
    char kodeMasuk[10];
    char lagi;

    ifstream data("stok.dat");
    data.read((char*)&item,sizeof(item));
    do{
        cout<<"Kode\tNama Barang\tJumlah\tHarga"<<endl;
        cout<<"--------------------------------------"<<endl;
        for(i=0; i<j; i++)
        {
            cout<<beli[i].kode<<"\t"<<beli[i].nama<<"\t"<<beli[i].jumlah<<"\t"<<beli[i].harga<<endl;
        }

        cout<<"======================================"<<endl<<endl;
        cout<<"Masukan Kode Barang: ";
        cin>>kodeMasuk;
        for(i=0; i<sum; i++)
        {
            //Proses pencocokan kode yang diinptkan dengan kode barang yang sudah terdaftar
            banding=strcmpi(kodeMasuk,prod[i].kode);
            if(banding==0)
            {
                //proses copy data dari struct produk ke struct belanja
                strcpy(beli[j].kode,prod[i].kode);
                strcpy(beli[j].nama,prod[i].nama);
                beli[j].harga=prod[i].harga;

                if(banding==0)
                    break; //ketika nilai banding bernilai 0, maka akan keluar dari loop
            }
        }

        if(banding==0)
        {
            cout<<beli[j].kode<<"\t"<<beli[j].nama<<"\t"<<beli[j].harga<<endl;
            cout<<"Jumlah yang dibeli: ";
            cin>>beli[j].jumlah;
            beli[j].harga*=beli[j].jumlah; //harga dikalikan engan jumlah dan dimasukkan lagi kedalam harga
            ofstream dataTulis("stok.dat"); //pembuatan objek untuk penulisan data
            prod[i].stok-=beli[j].jumlah;
            dataTulis.write((char*)&item,sizeof(item)); //operasi file untuk penulisan data
            j++;
        } else cout<<"Kode Salah!"<<endl; //jika kode tidak terdaftar

        cout<<"Transaksi Lagi[Y/N]: ";
        cin>>lagi;
        system("cls");
    }while(lagi=='y'||lagi=='Y');

    cout<<"Kode\tNama Barang\tJumlah\tHarga"<<endl;
    cout<<"======================================"<<endl;
    for(i=0; i<j; i++)
    {
        cout<<beli[i].kode<<"\t"<<beli[i].nama<<"\t"<<beli[i].jumlah<<"\t"<<beli[i].harga<<endl;
        total+=beli[i].harga;
    }
    cout<<"--------------------------------------"<<endl;
    cout<<"Total Harga:\t\t\t"<<total;
    data.close();
}

void barang::daftarBarang(int n) //fungsi untuk menampilkan daftar barang yag sudah ditulis
{
    int i;
    if(n==0)
        cout<<"Barang Kosong!"<<endl<<endl;
    else
    {
        cout<<"Kode\tNama Barang\tHarga\tStok"<<endl;
        cout<<"============================="<<endl;
        for(i=0; i<n; i++)
        {
            cout<<prod[i].kode<<"\t"<<prod[i].nama<<"\t"<<prod[i].harga<<"\t"<<prod[i].stok<<endl;
        }
    cout<<"-----------------------------"<<endl<<endl;
    }
}

void barang::pilihan() //fungsi untuk memilih opsi yang akan dikerjakan
{
    int i;
    cout<<"Pilih opsi !\n1. Menu Barang\n2. Belanja\n3. Keluar"<<endl;
    cout<<"Pilihan: ";
    cin>>i;
    system("cls");
    switch(i)
    {
        case 1:
            item.tulis();
            break;
        case 2:
            item.baca();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout<<"Pilihan Salah!";
    }
}

main()
{
    system("cls");
    item.pilihan();
}