#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>

using namespace std;

#define top(s) (s).top
#define info(s) (s).info

// ADT Stack
typedef string infotype;
const int nMax = 25;

struct stack {
    infotype info[nMax];
    int top;
};

// Primitif stack
void createStack(stack &s);
bool isEmpty(stack s);
bool isFull(stack s);
void push(stack &s, infotype x);
infotype pop(stack &s);
void showData(stack s);

#endif // STACK_H_INCLUDED
