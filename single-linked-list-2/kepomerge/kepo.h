#ifndef KEPO_H_INCLUDED
#define KEPO_H_INCLUDED
#include <iostream>

#define info(p)(p).info

using namespace std;

typedef int infotype;
typedef struct elemen *address;

struct elemen
{
    infotype info;
    address next;
};

struct List {
    address first;
};

createList (List &L);
address newElement (infotype data);
insertFirst (List &L, address p);
insertLast (List &L, address p);
mergeList ();


#endif // KEPO_H_INCLUDED
