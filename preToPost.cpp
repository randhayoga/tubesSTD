#include "preToPost.h"

bool isOperator(char x) {
    /* Mengembalikan true apabila karakter x merupakan sebuah operator
     * (+, -, *, /, %, ^); false jika sebaliknya.
     */
    switch(x) {
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case '^':
        return true;
    }

    return false;

}

infotype preToPost(infotype prefix) {
    /* Mengembalikan ekspresi postfix yang merupakan hasil konversi dari sebuah
     * ekspresi prefix yang valid
     */
    infotype operand1, operand2;
    Stack S;
    createStack(S);

    // Iterasi tiap karakter pada ekspresi prefix dari kanan ke kiri
    for (int i = prefix.length()-1; i >= 0; i--) {
        if (isOperator(prefix[i])) {
            operand1 = pop(S);
            operand2 = pop(S);
            push(S, operand1+operand2+prefix[i]);
        } else {
            push(S, string(1, prefix[i]));
        }
    }

    return pop(S);
}
