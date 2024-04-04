#include "flight.h"

void createListJadwal(ListJadwal &L)
{
    L.first= NULL;
};

adr_jadwalP createElemenJadwal(infotype x)
{
    adr_jadwalP address;

    address = new elemenJadwal;
    address->info.asal = x.asal;
    address->info.jenis = x.jenis;
    address->info.kapasitas = x.kapasitas;
    address->info.kode = x.kode;
    address->info.tanggal = x.tanggal;
    address->info.tujuan = x.tujuan;
    address->info.waktu = x.waktu;
    address->next = NULL;

    return address;
};
void InsertLastJ(ListJadwal &L, adr_jadwalP p)
{
    if(L.first == NULL)
    {
        L.first = p;

    }else
    {
        adr_jadwalP patrolAdr;
        patrolAdr = L.first;
        while (patrolAdr->next != NULL)
        {
            patrolAdr = patrolAdr->next;
        }
        patrolAdr->next = p;
    }
};
void ShowJadwal(ListJadwal L)
{
    if (L.first == NULL)
    {
        cout << "Tidak ada data penerbangan tersedia." << endl;
    }else
    {
        adr_jadwalP printAddress;
        printAddress = L.first;
        while (printAddress != NULL)
        {
            cout << "Asal keberangkatan : " << printAddress->info.asal << endl;
            cout << "Jenis keberangkatan : " << printAddress->info.jenis << endl;
            cout << "Kapasitas penumpang : " << printAddress->info.kapasitas << endl;
            cout << "Kode keberangkatan : " << printAddress->info.kode << endl;
            cout << "tanggal keberangkatan : " << printAddress->info.tanggal << endl;
            cout << "tujuan keberangkatan : " << printAddress->info.tujuan << endl;
            cout << "waktu keberangkatan : " << printAddress->info.waktu << endl;
            printAddress = printAddress->next;
        }
    }
};
void DeleteFirstJ(ListJadwal &L, adr_jadwalP &p)
{
    if (L.first == NULL)
    {
        p = L.first;
        L.first = NULL;
    }else
    {
        p = L.first;
        L.first = p->next;
        p -> next = NULL;
    }
};
bool SearchJ (ListJadwal L, string dari, string ke, string tanggal)
{
    if (L.first == NULL)
    {
        cout << "Tidak ada data keberangkatan." S<< endl;
    }else
    {
        adr_jadwalP pointerCari;
        pointerCari = L.first;
        while (pointerCari != NULL)
        {
            if ((pointerCari->info.asal == dari) && (pointerCari->info.tujuan == ke ) && (pointerCari ->info.tanggal == tanggal))
            {
                return true;
            };
            pointerCari = pointerCari->next;
        }
        return false;
    }
};
