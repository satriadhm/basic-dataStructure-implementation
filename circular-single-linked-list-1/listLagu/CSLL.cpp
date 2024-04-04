#include "CSLL.h"

void create_List(listLagu &L)
{
    L.first = NULL;
}
void createElemen (infotype laguBaru, adr &pLagu)
{
    pLagu = new element;
    pLagu->info = laguBaru;
    pLagu->next = NULL;
};
void insertFirst (listLagu &L, adr pLagu){
    if (L.first == NULL){
        L.first = pLagu;
        L.first->next = pLagu;
    }else{
        adr q;
        q = L.first;
        while (q->next != L.first)
        {
            q = q->next;
        };
        q->next = pLagu;
        pLagu->next = L.first;
        L.first = pLagu;
    };
};
void deleteLast (listLagu &L, adr &pLagu)
{
    if (L.first->next == NULL)
    {
        cout << "Data kosong" << endl;
    }
    else if (L.first->next == L.first)
    {
        L.first->next = NULL;
    }
    else
    {
        adr q;
        if (q != NULL)
        {
            do
            {
                pLagu = q;
                q = q->next;
            }
            while (q->next != L.first);
        }
        pLagu->next = L.first;
    }
};

void showSemuaLagu (listLagu L)
{
    adr p;
    p = L.first;
    do
    {
        cout << p->info.artis << endl;
        cout << p->info.genre << endl;
        cout << p->info.judul << endl;
        cout << p->info.playtime << endl;
        cout << endl;
        p = p->next;

    }
    while (p != L.first) ;
};
