#include "SLL.h"
int main(){
// createList
    List gi;
    cout << "first(gi) sebelum createList: " << first(gi) << endl;
    createList(gi);
    cout << "first(gi) setelah createList: " << first(gi) << endl;
// newElement
    adr p;
    p = newElement(100);
    cout << "info(P): " << info(p) << endl;
    cout << "next(p): " << next(p) << endl;
    cout << endl;
// insertFirst
    cout << "first(gi) sebelum insertFirst : " << first(gi) << endl;
    insertFirst(gi, p);
    cout << "first(gi) sesudah insertFirst : " << first(gi) << endl;
    cout << "info first(gi): " << info(first(gi)) << endl;
    p = newElement(15);
    insertFirst(gi, p);
    cout << "info first(gi): " << info(first(gi)) << endl;
    cout << endl;
// show
    show(gi);
    p = newElement(250);
    insertFirst(gi,p);
    show(gi);
    deleteLast(gi);
    show(gi);
    p = newElement(400);
    insertLast(gi,p);
    show(gi);
    return 0;
}

