#include"member.h"

void inputData(member &mb)
{
    int k;
    cout << "Tuliskan IDNumber: ";
    cin >> mb.IDnumber;

    k = 0 ;
    while (k < Max)
        {
            cout << "Poin Bulan Ke- " << k + 1 << ": ";
            cin >> mb.poin[k];
            k++;
        }
}

float ratarata(member mb)
{
    int counter = 0, sum = 0;
    float avg;
    for (int i = 0; i < Max; i++)
        {
            sum += mb.poin[i];
            counter++;
        }
        avg = float(sum) / float(counter);

}

void showData(member mb)
{
    cout << "Data Member: " << endl;
    cout << "IDNumber " << mb.IDnumber << endl;
    cout << "Poin: ";
    for (int i = 0; i < Max ; i++)
    {
        cout << mb.poin[i] << " ";
    }
    cout << endl;
}
