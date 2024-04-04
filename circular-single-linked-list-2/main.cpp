#include "CSLL.h"

int main()
{
    //Inisialisasi tipe data
    playlistLagu antrian;
    string namaArtis, judul;
    infotype dataBaru;
    adr p;
    // create Playlist
    createPlaylist(antrian);
    for (int i = 0; i < 10; i++)
    {
        cout << "Nama Artis adalah: " ;
        cin >> namaArtis;
        dataBaru.artis = namaArtis;
        cout << "Judul lagunya adalah: " ;
        cin >> judul;
        dataBaru.judul = judul;
        createElement(dataBaru,p);
        enqueue(antrian,p);
    }
    cout << endl;
    cout << "----Playlist terkini----" << endl;
    cout << endl;
    showSemualagu(antrian);
    cout << endl;
    dequeue(antrian,p);
    cout << endl;
    cout << "----Playlist terkini----" << endl;
    cout << endl;
    showSemualagu(antrian);
    return 0;
}
