#include "CSLL.h"

int main()
{
    listLagu L;
    adr p;
    create_List(L);
    infotype daftarLagu;
    string nama, judul, genre;
    int play;

    for (int i = 0 ; i < 6; i++){
        cout << "Nama artis: " ;
        cin >> nama;
        cout << "Judul Lagu: " ;
        cin >> judul;
        cout << "genre: " ;
        cin >> genre;
        cout << "playtime: " ;
        cin >> play;
        daftarLagu.artis = nama;
        daftarLagu.judul = judul;
        daftarLagu.genre = genre;
        daftarLagu.playtime = play;
        createElemen(daftarLagu, p);
        insertFirst(L,p);
    }
    showSemuaLagu(L);
    deleteLast(L,p);
    showSemuaLagu(L);

    return 0;
}
