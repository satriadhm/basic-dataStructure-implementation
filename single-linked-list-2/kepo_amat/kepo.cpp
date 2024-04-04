#include "kepo.h"

void createList (List &L)
{
    first(L) = nil;
}

adr newElement (infotype data)
{
    adr p;
    p = new elmlist;
    info(p) = data;
    next(p) = nil;
}

void insertFirst(List &L, adr p)
{
    if (first(L) == nil)
    {
        first(L) = p;
    }
    next(p) = first(L);
    first(L) = p;
}

void insertLast (List &L, adr p)
{
    adr q;
    if (first(L) == nil)
    {
        first(L) = p;
    }
    q = first(L);
    while (next(q) != nil)
    {
        q = next(q);
    }
    next(q) =p;
}
