#include "stack.h"

// Primitif stack
void createStack(Stack &S) {
    /* I.S. -
     * F.S. Terbentuk stack kosong dengan top = 0
     */
    top(S) = 0;
}

bool isEmpty(Stack S) {
    /* Mengembalikan nilai true jika stack kosong */
    return (top(S) == 0);
}

bool isFull(Stack S) {
    /* Mengembalikan nilai true jika stack penuh */
    return (top(S) == nMax);
}

void push(Stack &S, infotype x) {
    /* I.S. Terdefinisi sebuah stack yang mungkin penuh
     * F.S. Jika stack tidak penuh, maka elemen x ditambahkan pada stack
     *      dan nilai top menjadi top + 1
     */
    if (!isFull(S)) {
        top(S)++;
        info(S)[top(S)] = x;
    }
}

infotype pop(Stack &S) {
    /* Jika stack tidak kosong, maka fungsi akan mengembalikan nilai infotype
     * yang ada pada indeks top dan nilai top menjadi top - 1
     */
    if (!isEmpty(S)) {
        infotype x = info(S)[top(S)];
        top(S)--;
        return x;
    }

    // Jika stack kosong, yang di-return adalah empty string
    return {};
}

void showData(Stack S) {
    /* I.S. Terdefinisi stack s yang mungkin kosong
     * F.S. Jika stack tidak kosong, maka menampilkan semua info yang ada pada
     *      stack
     */
    if (!isEmpty(S)) {
        for (int i = top(S); i > 0; i--) {
        cout << info(S)[i] << "\n";
        }
    } else {
        cout << "Stack kosong\n";
    }
}


// Subprogram untuk menu sederhana
int selectMenu() {
    /* Mengembalikan bilangan bulat input-an user yang akan menentukan aksi
     * program utama
     */
    cout << "======MENU======\n";
    cout << "1. Insert data\n";
    cout << "2. Delete data\n";
    cout << "3. Show data\n";
    cout << "4. Konversi notasi prefix ke postfix\n";
    cout << "0. Exit\n";
    cout << "Masukkan menu : ";

    int input = 0;
    cin >> input;

    return input;
}

void subMenuInsertData(Stack &S) {
    /* I.S. Terdefinsi sebuah Stack S
     * F.S. N buah data yang di-input-kan user di-insert/di-push ke stack S
     */
    int N;
    infotype dataBaru;

    cout << "Jumlah data yang ingin Anda masukkan ke Stack : "; cin >> N;
    for (int i = 1; i <= N; i++) {
        cout << "Data ke-" << i << " : "; cin >> dataBaru;
        push(S, dataBaru);
    }
}

void subMenuDeleteData(Stack &S) {
    /* I.S. Terdefinsi sebuah Stack S
     * F.S. N buah data teratas pada Stack S terhapus
     */
    int N;
    infotype dataPop;

    cout << "*atau ketik -1 jika ingin menghapus seluruh data pada stack\n";
    cout << "Jumlah data pada Stack yang ingin Anda hapus : "; cin >> N;
    if (N == -1) {
        N = top(S);
    }
    for (int i = 1; i <= N; i++) {
        dataPop = pop(S);
    }
}

char isValidInput() {
    /* Fungsi mengembalikan sebuah char valid (Y atau N) yang akan menentukan
     * apakah user akan kembali ke menu utama atau tidak
     */
    char subPilihan;

    cout << "Kembali ke menu utama? (Y/N) : "; cin >> subPilihan;

    // Looping terus hingga input-an user valid
    while ((subPilihan!='Y')&&(subPilihan!='N')&&(subPilihan!='y')&&(subPilihan!='n')) {
        cout << "\nInvalid input!\n";
        cout << "Kembali ke menu utama? (Y/N) : "; cin >> subPilihan;
    }
}
