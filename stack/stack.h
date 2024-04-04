#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>

using namespace std;

typedef char infotype;

struct Stack {
    infotype info[15];
    int top;
};

void createStack(Stack &S);

bool isEmpty(Stack S);

bool isFull(Stack S);

void push (Stack &S, infotype x);

void pop (Stack &S);

void printinfo(Stack S);

#endif // STACK_H_INCLUDED
