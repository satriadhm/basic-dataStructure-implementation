#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED
#include <iostream>
using namespace std;
struct jadwalPenerbangan
{
    string kode;
    string jenis;
    string tanggal;
    string waktu;
    string asal;
    string tujSuan;
    int kapasitas;
};
typedef jadwalPenerbangan infotype;
typedef struct elemenJadwal *adr_jadwalP;
struct elemenJadwal
{
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal
{
    adr_jadwalP first;
};
void createListJadwal(ListJadwal &L);
adr_jadwalP createElemenJadwal(infotype x);
void InsertLastJ(ListJadwal &L, adr_jadwalP p);
void ShowJadwal(ListJadwal L);
void DeleteFirstJ(ListJadwal &L, adr_jadwalP &p);
bool SearchJ (ListJadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
