#ifndef INFO_H_INCLUDED
#define INFO_H_INCLUDED
#include <iostream>
#include <cctype>

#define nil NULL


using namespace std;

struct buku {
    string namaBuku;
    int ID_Faktur;
    int TotalPenjualan;
    };

typedef buku infotype;

typedef struct elemen *adr;

struct elemen
{
    infotype info;
    adr next;
	adr prev;
};

struct List
{
     adr first;
     adr last;
};

void createList (List &L);
adr newElement (infotype data);
void insertFirst (List &L, adr p);
adr IDMax (List L);
void show (List L);
int selectMenu ();

#endif // INFO_H_INCLUDED
