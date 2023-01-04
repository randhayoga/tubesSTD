#include "stack.h"

void createStack(stack &s) {
    /* I.S. -
     * F.S. Terbentuk stack kosong dengan top = 0
     */
    top(s) = 0;
}

bool isEmpty(stack s) {
    /* Mengembalikan nilai true jika stack kosong */
    return (top(s) == 0);
}

bool isFull(stack s) {
    /* Mengembalikan nilai true jika stack penuh */
    return (top(s) == nMax);
}

void push(stack &s, infotype x) {
    /* I.S. Terdefinisi sebuah stack yang mungkin penuh
     * F.S. Jika stack tidak penuh, maka elemen x ditambahkan pada stack
     *      dan nilai top menjadi top + 1
     */
    if (!isFull(s)) {
        top(s)++;
        info(s)[top(s)] = x;
    }
}

infotype pop(stack &s) {
    /* Jika stack tidak kosong, maka fungsi akan mengembalikan nilai infotype
     * yang ada pada indeks top dan nilai top menjadi top - 1
     */
    if (!isEmpty(s)) {
        infotype x = info(s)[top(s)];
        top(s)--;
        return x;
    }

    // Jika stack kosong, yang di-return adalah empty string
    return {};
}

void showData(stack s) {
    /* I.S. Terdefinisi stack s yang mungkin kosong
     * F.S. Jika stack tidak kosong, maka menampilkan semua info yang ada pada
     *      stack
     */
    for (int i = top(s); i > 0; i--) {
        cout << info(s)[i] << " ";
    }
    cout << "\n";
}
