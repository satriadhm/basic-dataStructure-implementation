#ifndef CSLL_H_INCLUDED
#define CSLL_H_INCLUDED
#include <iostream>
using namespace std;
struct infotype
{
    string artis;
    string judul;
};
typedef struct element *adr;
struct element
{
    infotype info;
    adr next;
};
struct playlistLagu
{
    adr head;
    adr tail;
};

void createPlaylist(playlistLagu &Q);

void createElement( infotype laguBaru, adr &pLagu);

void enqueue (playlistLagu &Q, adr pLagu);

void dequeue (playlistLagu &Q, adr &pLagu);

void showSemualagu (playlistLagu Q);
#endif // CSLL_H_INCLUDED
