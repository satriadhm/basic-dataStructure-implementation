#include "stack.h"

int main()
{
    Stack S;
    createStack(S);
    push(S,'A');
    push(S,'T');
    push(S,'A');
    push(S,'D');
    push(S,'R');
    push(S,'U');
    push(S,'T');
    push(S,'K');
    push(S,'U');
    push(S,'R');
    push(S,'T');
    push(S,'S');

    printinfo(S);

    pop(S);
    pop(S);
    pop(S);
    pop(S);
    pop(S);
    pop(S);
    pop(S);
    pop(S);

    printinfo(S);
    return 0;
}
