#include "info.h"

void createList (List &L)
{
    L.first = NULL;
    L.length = 0;
}

adr newElement (infotype data)
{
    adr p;
    p = new elemen;
    p ->info = data;
    p -> next = NULL;
    return p;
}

void insertLast (List &L, adr &p)
{
    adr q;
    L.length++;
    if (L.first == NULL)
    {
        L.first = p;
        return;
    }
    q = L.first;
    while (q->next != NULL)
        {
            q = q->next;

        }
    q->next = p;

}

void show (List L)
{
    adr p;
    p = L.first;
    while (p != NULL)
        {
            cout << p->info <<" "<< endl;
            p = p->next;
        }
}
float vocalPersentage (List L)
{
    adr p;
    float countVocal;
    float sum;
    char currentChar;
    p = L.first;
    if (p == NULL) {
        return 0;
    }
    while (p != NULL)
        {
            currentChar = tolower(p->info);
            if (currentChar == 'a' || currentChar == 'i' || currentChar == 'u' || currentChar == 'e' || currentChar == 'o')
                {
                    countVocal++;
                }
            p = p->next;
            sum++;
        }
    return countVocal/sum * 100.0;
}

adr showLastK(List &L, int k)
{
    adr p;
    char output;

    if (k - 1  > L.length){
        return NULL;
    }
    p = L.first;
    for (int i = 0 ; i < L.length - k ; i++ ){
            p = p->next;
    }
    return p;
}

int selectMenu (){
    cout << "======MENU======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan persentase huruf vokal" << endl;
    cout << "4. Menampilkan karakter ke-sekian " << endl;
    cout << "Masukkan menu: ";

    int input = 0;
    cin >> input;
    return input;
}
