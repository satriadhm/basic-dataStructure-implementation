#include "flight.h"
int main()
{
    ListJadwal L;
    int n;
    adr_jadwalP pointer;
    infotype type;
    string kode;
    string jenis;
    string tanggal;
    string waktu;
    string asal;
    string tujuan;
    int kapasitas;
    createListJadwal(L);
    cout << "Masukkan N: ";
    cin >> n;
    for (int i = 0; i < n ; i++ )
    {
        cout << "Masukkan data kode Penerbangan: ";
        cin >> kode;
        type.kode = kode;
        cout << "Masukkan data jenis Penerbangan: ";
        cin >> jenis;
        type.jenis = jenis;
        cout << "Masukkan data tanggal Penerbangan: ";
        cin >> tanggal;
        type.tanggal = tanggal;
        cout << "Masukkan data waktu Penerbangan: ";
        cin >> waktu;
        type.waktu = waktu;
        cout << "Masukkan data asal Penerbangan: ";
        cin >> asal;
        type.asal = asal;
        cout << "Masukkan data tujuan Penerbangan: ";
        cin >> tujuan;
        type.tujuan = tujuan;
        cout << "Masukkan data kapasitas Penerbangan: ";
        cin >> kapasitas;
        type.kapasitas = kapasitas;
        pointer = createElemenJadwal(type);
        InsertLastJ(L,pointer);
    }
    ShowJadwal(L);
    DeleteFirstJ(L,pointer);
    ShowJadwal(L);
    bool found;
    string asalPenerbangan, tujuanPenerbangan, tanggalPenerbangan;
    cout << "Masukkan asal penerbangan yang dicari: ";
    cin >> asalPenerbangan;
    cout << "Masukkan tujuan penerbangan yang dicari: ";
    cin >> tujuanPenerbangan;
    cout << "Masukkan tanggal penerbangan yang dicari: ";
    cin >> tanggalPenerbangan;
    found =false;
    found = SearchJ(L,asalPenerbangan,tujuanPenerbangan,tanggalPenerbangan);
    if(found)
    {
        cout <<"Terdapat penerbangan dari " << asalPenerbangan << " ke tujuan " << tujuanPenerbangan << " pada tanggal " << tanggalPenerbangan << endl;
    }
    return 0;
}
