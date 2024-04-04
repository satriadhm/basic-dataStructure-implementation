#include <iostream>

using namespace std;

const int nMax = 10;

struct Himpunan {
    int anggota[nMax-1];
    int panjang;
};

bool anggotaHimpunan(Himpunan himp, int bil);

void inputAnggotaHimpunan (Himpunan &himp);

Himpunan irisan (Himpunan himp1, Himpunan himp2);

void printHimp(Himpunan himp);


int main()
{

    return 0;
}

bool anggotaHimpunan(Himpunan himp, int bil)
{
    bool found;
    int i;
    found = false;
    i = 0;
    while (i <= himp.panjang && !found)
    {
        found = bil == himp.anggota[i];
        i++;
    }
    return found;
};
void inputAnggotaHimpunan (Himpunan &himp)
{
    int bilangan;
    himp.panjang = -1;
    cin >> bilangan;
    while (himp.panjang < nMax-1 && ! anggotaHimpunan(himp, bilangan))
        {
            himp.panjang = himp.panjang + 1;
            himp.anggota[himp.panjang] = bilangan;
            cin >> bilangan;
        };
};

Himpunan irisan (Himpunan himp1, Himpunan himp2)
{
    Himpunan intersect;
    int i, j;
    intersect.panjang = -1;
    i = 0;
    do {
            j = 0;
        do {
            if (himp1.anggota[i] = himp2.anggota[j]) {
                intersect.panjang ++;
                intersect.anggota[intersect.panjang] = himp1.anggota[i];
            }
            j++;
        }
        while (j <= himp2.panjang);
        i++;
    }
    while (i <= himp1.panjang);
    return intersect;
}
void printHimp(Himpunan himp)
{
    int i;
    i = 0;
    do
    {
        cout >> himp.anggota[i];
    }
    while (i <= himp.panjang);
}
