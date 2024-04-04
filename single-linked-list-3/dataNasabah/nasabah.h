#ifndef NASABAH_H_INCLUDED
#define NASABAH_H_INCLUDED
#include <iostream>
#include <cctype>
#include <bits/stdc++.h>

#define nil NULL


using namespace std;

struct nasabah {
    string namaBarang;
    int biayaAsuransi;
    int IDBukuTabungan;
    };

typedef nasabah infotype;

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
void reverseList (List &L);
float range (List L);
void show (List L);
int selectMenu ();



#endif // NASABAH_H_INCLUDED
