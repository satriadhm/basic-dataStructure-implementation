#ifndef INFO_H_INCLUDED
#define INFO_H_INCLUDED
#include <iostream>
#include <cctype>

#define nil NULL


using namespace std;

typedef char infotype;

typedef struct elemen *adr;

struct elemen
{
    infotype info;
    adr next;
};

struct List
{
     adr first;
     int length;
};

void createList (List &L);
adr newElement (infotype data);
void insertLast (List &L, adr &p);
void show (List L);
float vocalPersentage (List L);
adr showLastK(List &L, int k);
int selectMenu ();

#endif // INFO_H_INCLUDED
