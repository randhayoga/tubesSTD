#include "stack.h"
#include "preToPost.h"
#include "validBrackets.h"

int main() {
    cout << "HALO, SELAMAT DATANG DI DEMO TUBES KELOMPOK 5!\n\n";

    Stack S;
    createStack(S);

    int pilihan = 0;
    char subpilihan;
    infotype prefix, exp;
    pilihan = selectMenu();

    // Looping menu sederhana
    while (pilihan != 0) {
        cout << "\n";
        switch(pilihan) {
        case 1:
            // 1. Insert data
            subMenuInsertData(S);
            break;
        case 2:
            // 2. Delete data
            subMenuDeleteData(S);
            break;
        case 3:
            // 3. Show data
            showData(S);
            break;
        case 4:
            // 4. Mengubah notasi prefix menjadi postfix
            cout << "Masukkan ekspresi bernotasi prefix yang valid : ";
            cin >> prefix;
            cout << "Hasil konversi postfix : " << preToPost(prefix) << "\n";
        case 5:
            cout << "Masukkan ekspresi yang ingin dicek : ";
            cin >> exp;
            if (isValidBrackets(exp)) {
                cout << "Ekspresi di atas memiliki kurung yang valid\n";
            } else {
                cout << "Ekspresi di atas memiliki kurung yang tidak valid\n";
            }
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

    return 0;
}
