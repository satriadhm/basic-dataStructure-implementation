#include "dll.h"



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

void show (List L)
{
    adr p;
    p = L.first;
    while (p != NULL){
            cout << "Buku:" << p->info.namaBuku << endl;
            cout << "ID:" << p->info.ID_Faktur << endl;
            cout << "Total:" << p->info.TotalPenjualan << endl;
            p = p->next;
        }
}

adr IDMax (List L){
    adr addressMax, p;
    addressMax = L.first;
    p = L.first;
    while (p == NULL){
        if (p->info.TotalPenjualan > addressMax->info.TotalPenjualan){
            addressMax = p;
        }
        p = p->next;
    }
    return addressMax;
}


int selectMenu (){
    cout << "======MENU======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan buku dengan penjualan terbesar" << endl;
    cout << "Masukkan menu: ";

    int input = 0;
    cin >> input;
    return input;
}
