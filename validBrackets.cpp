#include "stack.h"

bool isValidBrackets(infotype exp) {
    infotype openingBracket;
    Stack S;
    createStack(S);
    int expLength = exp.length();

    for(int i = 0; i< expLength; i++) {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(S, string(1, exp[i]));
        } else if (exp[i] == ')') {
            openingBracket = pop(S);
            if (openingBracket != "(") {
                return false;
            }
        } else if (exp[i] == '}') {
            openingBracket = pop(S);
            if (openingBracket != "{") {
                return false;
            }
        } else if (exp[i] == ']') {
            openingBracket = pop(S);
            if (openingBracket != "[") {
                return false;
            }
        }
    }

    if (isEmpty(S)) {
        return true;
    } else {
        return false;
    }
}
