#include "stack.h"
#include "preToPost.h"
#include "validBrackets.h"

using namespace std;

int main() {
    cout << "HALO, SELAMAT DATANG DI DEMO TUBES KELOMPOK 5!\n\n";

    Stack S;
    createStack(S);

    int pilihan = 0;
    char subpilihan;
    pilihan = selectMenu();

    // Looping menu sederhana
    while (pilihan != 0) {
        switch(pilihan) {
        case 1:
            // 1. Insert data
            cout << "\n";
            subMenuInsertData(S);
            break;
        case 2:
            // 2. Delete data
            cout << "\n";
            subMenuDeleteData(S);
            break;
        case 3:
            // 3. Show data
            cout << "\n";
            showData(S);
            break;
        }

        // Penentuan apakah kembali ke menu atau tidak
        subpilihan = isValidInput();
        if ((subpilihan == 'N') || (subpilihan == 'n')) {
            break;
        }

        cout << "\n";
        pilihan = selectMenu();
    }

    cout << "\nANDA TELAH KELUAR DARI PROGRAM";
    cout << "\nTERIMA KASIH!";
}
