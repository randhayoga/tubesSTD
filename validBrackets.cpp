#include "stack.h"

bool isOpeningBracket(char x) {
    switch(x) {
    case '(':
    case '{':
    case '[':
        return true;
    }

    return false;
}

bool isClosingBracket(char x) {
    switch(x) {
    case ')':
    case '}':
    case ']':
        return true;
    }

    return false;
}

bool validBrackets(infotype exp) {
    // pass
}
