#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>

using namespace std;

// ADT Stack
typedef string infotype;
const int IDXMAX = 25;

struct Stack {
    infotype info[IDXMAX];
    int top;
};

// Primitif stack
void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void push(Stack &S, infotype x);
infotype pop(Stack &S);
void showData(Stack S);

// Subprogram terkait stack untuk menu sederhana
int selectMenu();
void subMenuInsertData(Stack &S);
void subMenuDeleteData(Stack &S);
char isValidInput();

#endif // STACK_H_INCLUDED
