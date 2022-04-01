#include<iostream>
#include<fstream>


using namespace std;
int main (){


int harga,pilih,pilih_menu,jarak,total,bayar,kembalian;
float diskon;


    cout << "================MENU=================\n";
    cout << "1. Ayam Geprek   Rp. 21000  \n";
    cout << "2. Ayam Goreng   Rp. 17000  \n";
    cout << "3. Udang Goreng  Rp. 19000  \n";
    cout << "4. Cumi Goreng   Rp. 20000  \n";
    cout << "5. Ayam Bakar    Rp. 25000  \n";



    cout << "Masukan Banyak Pesananmu : ";
    cin >> pilih_menu;
    for (int i= 1; i<= pilih_menu; i++){
        
        cout << "Masukan Menu Apa saja yang kamu inginkan : ";
        cin >> pilih;

      if (pilih == 1){
        cout << "Kamu Memilih Ayam Geprek\n";
        harga = harga + 21000;
    } else if (pilih == 2){
        cout << "Kamu Memilih Ayam Goreng\n";
        harga = harga + 17000;
    } else if(pilih == 3){
        cout << "Kamu Memilih Udang Goreng\n";
        harga = harga + 19000;
    } else if (pilih == 4){
        cout << "Kamu Memilih Cumi Bakar\n";
        harga = harga + 20000;
    } else if(pilih == 5){
        cout << "Kamu Memilih Ayam Bakar\n";
        harga = harga + 25000;
    } else{
        cout << " Pilihanmu Tidak Tersedia ";
    }
    }
    



    cout << "Ayo Masukan Jarak Rumahmu *Dalam Km\n";
    cin >> jarak;
    cout << "Jarak Rumahmu Sejauh " << jarak << " Km\n";
if (jarak <= 3){
        if(harga <= 25000 ){
            cout << "Kamu Dibebani Ongkir 15000 nih\n";
            harga = harga + 15000; 
        }
        else if(harga > 25000 ){
            cout << "Selamat kamu mendapatkan Potongan Ongkir Sebesar Rp. 3000\n";
            total = harga + 12000;

        } else if(harga  > 50000){
            cout << "Selamat kamu mendapatkan Potongan Ongkir Sebesar Rp. 5000 dan Diskon sebesar 15%\n";
            diskon = harga * 0.15;
            total = harga - diskon + 10000;  

        } else if(harga > 150000){
            cout << "Selamat kamu mendapatkan Potongan Ongkir Sebesar Rp. 8000 dan Diskon Sebesar 35%\n";
            diskon = harga * 0.35;
            total = harga - diskon + 7000;
        }
    }
else if (jarak > 3){
        if(harga <= 25000){
            cout << "Kamu Dibebani Ongkir 25000 nih\n";
            harga = harga + 25000; 
        }
        else if((harga > 25000) && (harga <= 50000)){
            cout << "Selamat kamu mendapatkan Potongan Ongkir Sebesar Rp. 3000\n";
            total = harga + 22000;

        } else if((harga  > 50000) && (harga <= 150000)){
            cout << "Selamat kamu mendapatkan Potongan Ongkir Sebesar Rp. 5000 dan Diskon sebesar 15%\n";
            diskon = harga *0.15;
            total = harga - diskon + 20000;  

        } else if (harga > 150000){
            cout << "Selamat kamu mendapatkan Potongan Ongkir Sebesar Rp. 8000 dan Diskon Sebesar 35%\n";
            diskon = harga * 0.35;
            total = harga - diskon + 17000;
        }
    }

    cout << "Total Harga : " << total << endl;
    cout << "Masukan Jumlah Uang Anda Rp. ";
    cin >> bayar;
    cout << "Kembalian " << bayar - total;
}