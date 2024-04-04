#ifndef CSLL_H_INCLUDED
#define CSLL_H_INCLUDED
#include <iostream>

using namespace std;


struct infotype {
    string artis;
    string judul;
    string genre;
    int playtime;
};

typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct listLagu {
    adr first;
};

void create_List(listLagu &L);
void createElemen (infotype laguBaru, adr &pLagu);
void insertFirst (listLagu &L, adr pLagu);
void deleteLast (listLagu &L, adr &pLagu);
void showSemuaLagu (listLagu L);
#endif // CSLL_H_INCLUDED
