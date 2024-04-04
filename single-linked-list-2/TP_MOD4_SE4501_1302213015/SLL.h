#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(p) (p)->info
#define next(p) (p)->next
#define first(gi) ((gi).first)
#define nil NULL

typedef int infotype;
typedef struct element *adr;


struct element {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

void createList (List &gi);

adr newElement (infotype x);

void insertFirst (List &gi, adr p);

void show (List gi);

adr deleteLast (List &gi);

void insertLast (List &gi, adr p);

#endif // SLL_H_INCLUDED
