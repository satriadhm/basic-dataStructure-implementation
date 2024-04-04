#include "nasabah.h"


int main()
{   // deklarasi tipe data
    string yn, namaBarang;
    List L;
    adr p;
    float rentang;
    int jumlah,selectedMenu,ID, biaya;
    infotype input;

    //Program
    createList(L);
    selectedMenu = selectMenu();
    while (selectedMenu != 0)
        {
            switch (selectedMenu)
            {
            case 1:
                cout << "Jumlah data yang akan ditambahkan: ";
                cin >> jumlah;
                for (int i = 1 ; i <= jumlah ; i ++ ) {
                   cout << "Masukkan nama barang baru: ";
                   cin >> namaBarang;
                   cout << "Masukkan ID Asuransi baru: ";
                   cin >> ID;
                   cout << "Masukkan biaya asuransi tersebut:" ;
                   cin >> biaya;
                   input.namaBarang = namaBarang;
                   input.IDBukuTabungan = ID;
                   input.biayaAsuransi = biaya;

                   p = newElement(input);
                   insertFirst(L,p);
                }
                break;
            case 2:
                show(L);
                break;
            case 3:
                reverseList(L);
                show(L);
                break;
            case 4:
                rentang = range(L);
                cout << "Selisih biaya terbesar dan terkecil adalah: "<< rentang << endl;
                break;

            default :
                cout << "Pilihan menu tidak sesuai" <<endl;
            }
            cout << "Kembali ke laman utama? : Y/N ";
            cin >> yn;
            if (yn == "N") {
                break;
            }
            selectedMenu = selectMenu();
        }

    return 0;
}
