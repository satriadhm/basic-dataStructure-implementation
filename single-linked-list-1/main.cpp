#include "info.h"


int main()
{
    List L;
    adr p;
    int selectedMenu;
    int jumlah;
    char input;
    string yn;
    float persentase;
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
                   cout << "Masukkan data baru: ";
                   cin >> input;
                   p = newElement(input);
                   insertLast(L,p);
                }
                break;
            case 2:
                show(L);
                break;
            case 3:
                persentase = vocalPersentage(L);
                cout << "persentase huruf hidup adalah: " << persentase << "%" << endl;
                break;
            case 4:
                int n;
                cout << "Berapa K? :" ;
                cin >> n;
                cout << endl;
                p = showLastK(L, n);
                if (p != NULL){
                    cout << "Huruf ke-K adalah: " << p->info << endl;
                }else {
                    cout << "Tidak ditemukan" << endl;
                }
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
