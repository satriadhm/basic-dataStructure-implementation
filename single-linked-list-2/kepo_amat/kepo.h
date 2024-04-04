#ifndef KEPO_H_INCLUDED
#define KEPO_H_INCLUDED

#define nil NULL
#define info(p) (p)->info
#define next(p) (p)->next
#define first(L) ((L).first)
#include <iostream>


using namespace std;

struct nilaiMhs {
    int uts;
    int uas;
    int praktikum;
    };

typedef nilaiMhs infotype;

typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List{
    address first;
};

void createList (List &L);
adr newElement (infotype data);
void insertFirst (List &L, adr p);
void insertLast (List &L, adr p);
void insertAfter (List &L, adr prec, adr p);
adr deleteFirst (List &L);
adr deleteLast (List &L);
adr deleteAfter (List &L, adr prec);
void Show (List L);


#endif // KEPO_H_INCLUDED
