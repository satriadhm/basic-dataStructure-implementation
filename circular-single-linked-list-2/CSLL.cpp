#include "CSLL.h"
void createPlaylist(playlistLagu &Q)
{
    Q.head = NULL;
    Q.tail = NULL;

};
void createElement( infotype laguBaru, adr &pLagu)
{
    pLagu = new element;
    pLagu->info = laguBaru;
    pLagu->next = NULL;
};
void enqueue (playlistLagu &Q, adr pLagu)
{
    if (Q.head == NULL)
    {
        Q.head = pLagu;
        Q.tail = pLagu;
    }else
    {
        Q.tail->next = pLagu;
        Q.tail = pLagu;
    }
};
void dequeue (playlistLagu &Q, adr &pLagu)
{
    if (Q.head == NULL)
    {
        cout << "Tidak ada data yang harus dihapus" << endl;
    }else if (Q.head == Q.tail)
    {
        pLagu = Q.head;
        Q.head = NULL;
        Q.tail = NULL;
    }else
    {
        pLagu = Q.head;
        Q.head = Q.head->next;
        pLagu->next = NULL;
    }
};
void showSemualagu (playlistLagu Q)
{
    adr antri;
    antri = Q.head;
    while (antri != NULL)
    {
        cout << "info artis: " << antri->info.artis << endl;
        cout << "info judul: " << antri->info.judul << endl;
        antri = antri->next;
    };
};
