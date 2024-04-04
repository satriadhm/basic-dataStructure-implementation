#include "SLL.h"
void createList (List &gi)
{
    first(gi) = nil;
}
adr newElement (infotype x )
{
    adr p = new element;
    info(p) = x;
    next(p) = nil;
    return p;
}
void insertFirst (List &gi, adr p)
{
    if (first(gi) == nil)
    {
        first(gi) = p;
        return;
    }
    next(p) = first(gi);
    first(gi) = p;

}
void show (List gi)
{
    adr p;
    if (first(gi) == nil)
    {
        cout << "List Kosong." << endl;
        return;
    }
    p = first(gi);
    while ( p != nil)
    {
        cout << info(p) << " ";
        p = next(p);
    }
    cout << endl;
}
adr deleteLast (List &gi)
{
    adr p, q;
    if ( first(gi) == nil )
    {
        p = nil;
        cout << "List Kosong.";
        return p;
    }
    if (next(first(gi)) == nil)
    {
        p = first(gi);
        first(gi) = nil;
        return p;
    }
    q = first(gi);
    p = first(gi);
    while ( next(p) != nil)
    {
        q = p;
        p = next(p);
    }
    next(q) = nil;
    return p;
}

void insertLast (List &gi, adr p)
{
    adr q;
    if (first(gi) == nil)
    {
        first(gi) = p;
        return;
    }

    q = first(gi);
    while (next(p) != nil)
    {
        q = next(p);
    }
    next(q) = p;

}
