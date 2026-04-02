#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;

    cout << "Silakan masukkan nama Anda: ";
    getline(cin, nama);

    if (nama.empty()) {
        cout << "Nama tidak boleh kosong!" << endl;
    } else {
        cout << "Hello, " << nama << "!" << endl;
    }

    return 0;
}
