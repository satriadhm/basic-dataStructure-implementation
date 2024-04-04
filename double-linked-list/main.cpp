#include "dll.h"


int main()
{   // deklarasi tipe data
    string buku, yn;
    List L;
    adr p,Max;
    int jumlah,selectedMenu,ID, total;
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
                   cout << "Masukkan nama buku baru: ";
                   cin >> buku;
                   cout << "Masukkan ID_Faktur baru: ";
                   cin >> ID;
                   cout << "Masukkan jumlah penjualan buku tersebut:" ;
                   cin >> total;
                   input.namaBuku = buku;
                   input.ID_Faktur = ID;
                   input.TotalPenjualan = total;

                   p = newElement(input);
                   insertFirst(L,p);
                }
                break;
            case 2:
                show(L);
                break;
            case 3:
                Max = IDMax(L);
                cout << "ID Buku dengan penjualan terbesar adalah: "<< Max->info.ID_Faktur << endl;
                cout << "Jumlah penjualan terbesar adalah: "<< Max->info.TotalPenjualan << endl;
                cout << "Buku dengan penjualan terbesar adalah: "<< Max->info.namaBuku << endl;
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
