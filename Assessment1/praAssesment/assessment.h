#ifndef ASSESSMENT_H_INCLUDED
#define ASSESSMENT_H_INCLUDED
#include <iostream>

#define nil NULL
#define info(p) (p)->info
#define next(p) (p)->next
#define prev(p) (p)->prev
#define first(L) ((L).first)
#define last(L) ((L).first)

using namespace std;

struct mahasiswa
{
    string NIM;
    string nama;
    int nilaiUTS;
    int nilaiUAS;
    int praktikum;
    bool beasiswa;
};

typedef mahasiswa infotype;

typedef struct elemen *address;
struct elemen
{
    infotype info;
    next address;
    prev address;
};

struct ListMhs
{
    address first;
    address last;
};

void createList(ListMhs L);
void createElement(string NIM, string nama, int nilaiUTS, int nilaiUAS, int praktikum, address &p);
void insertFirst(ListMhs L, address p);
void insertLast(ListMhs L, address p);
void insertAfter(ListMhs L, address p, address prec);
void deleteFirst(ListMhs L, address &p);
void deleteLast(ListMhs L, address &p);
void deleteAfter(ListMhs L, address &p, address prec);



#endif // ASSESSMENT_H_INCLUDED
