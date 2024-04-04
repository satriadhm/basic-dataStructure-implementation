#include "stack.h"

void createStack(Stack &S)
{
    S.top = 0;
};

bool isEmpty(Stack S)
{
    if (S.top == 0)
    {
        return true;
    }else
    {
        return false;
    }
};

bool isFull(Stack S)
{
    if (S.top == 15)
    {
        return true;
    }else
    {
        return false;
    }
};

void push (Stack &S, infotype x)
{
    if (isFull(S) == false)
    {
        S.top++;
        S.info[S.top] = x;
    }
};

void pop (Stack &S)
{
    infotype x;
    x = S.info[S.top];
    S.top--;
};

void printinfo(Stack S)
{
    for (int i = S.top; i>0;i--){
        cout << S.info[i] << " ";
    }
    cout << endl;
};
