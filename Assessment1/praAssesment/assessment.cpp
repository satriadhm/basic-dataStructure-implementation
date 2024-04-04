#include "assessment.h"

void createList(ListMhs L)
{
    first(L) = nil;
    last(L) = nil;
};


void createElement(string NIM, string nama, int nilaiUTS, int nilaiUAS, int praktikum, address &p)
{
    p = new elemen;
    info(p).NIM = NIM;
    info(p).nama = nama;
    info(p).nilaiUTS = nilaiUTS;
    info(p).nilaiUAs = nilaiUAS;
    info(p).praktikum = praktikum;
    info(p).beasiswa = false;

};

void insertFirst(ListMhs L, address p)
{
    if (first(L) == nil)
    {
        first(L) = p;
        last(L) = p;
    }
    else
    {
        prev(next(first(L))) = p;
        next(p) = first(L);
        first(L) = p;
    }


};
void insertLast(ListMhs L, address p)
{
    if (first(L)==nil)
    {
        first(L) = p;
        last(L) = p;
    }
    else
    {
        next(last(L)) = p;
        prev(p) = last(L);
        last(L) = p;
    }

};
void insertAfter(ListMhs L, address p, address prec)
{
    if (prec == last(L))
    {
        next(prec) = p;
        prev(p) = prec;
        last(L) = p;
    }
    else
    {
        next(p) = next(prec);
        prev(p) = prec;
        prev(next(prec)) = p;
        next(prec) = p;
    }

};
void deleteFirst(ListMhs L, address &p)
{
    if (first(L)==nil)
    {
        cout << "Tidak ada list" << endl;
    }
    else if (first(L)==last(L))
    {
        p = first(L);
        first(L) = nil;
        last(L) = nil;
    }
    else
    {
        p = first(L);
        first(L) = next(first(L));
        prev(first(L)) = nil;
        next(p) = nil;
    }

};
void deleteLast(ListMhs L, address &p)
{
    if(first(L)==nil)
    {
        cout << "Tidak ada list" << endl;
    }
    else if (first(L)==last(L))
    {
        p = first(L);
        first(L) = nil;
        last(L) = nil;
    }
};
void deleteAfter(ListMhs L, address &p, address prec)
{

    if (prec == last(l))
    {
        cout << "Tidak bisa menghapus data." << endl;
    }
    else
    {
        p = next(prec);
        next(prec) = next(p);
        prev(next(p)) = prec;
        next(p) = nil;
        prev(p) = nil;

    }

};
