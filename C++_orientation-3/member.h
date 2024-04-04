#ifndef MEMBER_H_INCLUDED
#define MEMBER_H_INCLUDED
#include <iostream>

using namespace std;


const int Max = 6;

struct member {
    string IDnumber;
    float poin[Max];
};

void inputData (member &mb);
float ratarata (member mb);
void showData (member mb);


#endif // MEMBER_H_INCLUDED
