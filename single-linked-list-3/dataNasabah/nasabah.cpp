#include "nasabah.h"

void createList (List &L)
{
    L.first = NULL;
    L.last = NULL;
}

adr newElement (infotype data)
{
    adr p;
    p = new elemen;
    p ->info = data;
    p -> next = NULL;
    p ->prev =NULL;
    return p;
}

void insertFirst (List &L, adr p){
    if (L.first == NULL) {
        L.first = p;
        L.last = p;
    }
    else{
        p->next = L.first;
        L.first->prev = p;
        L.first = p;
    }
}

void reverseList (List &L){
    adr head;
    adr prev;
    adr current;
    adr next;
    head = L.first;
    while (current = NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;


}

float range(List L){
    adr p;
    adr q;
    p = L.first;
    q = L.first;
    int Maks ;
    Maks =  q->info.biayaAsuransi;
    int Min ;
    Min =  q->info.biayaAsuransi;
    float selisih;
    while (p != NULL){
        if (p->info.biayaAsuransi > Maks){
            Maks = p->info.biayaAsuransi ;
        }

        if (p->info.biayaAsuransi < Min) {
            Min = p->info.biayaAsuransi ;
        }
        p = p->next;
    }
    selisih = float(Maks) - float(Min);
    return selisih;
}

void show (List L)
{
    adr p;
    p = L.first;
    while (p != NULL){
            cout << "Nama Barang:" << p->info.namaBarang << endl;
            cout << "Biaya Asuransi:" << p->info.biayaAsuransi << endl;
            cout << "ID Buku Tabungan:" << p->info.IDBukuTabungan << endl;
            p = p->next;
        }
}

int selectMenu (){
    cout << "======MENU======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Membalik List" << endl;
    cout << "4. Menampilkan selisih biaya terbesar dan terkecil." << endl;
    cout << "Masukkan menu: ";

    int input = 0;
    cin >> input;
    return input;
}
