#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int pilihan, jumlah;
    long long total = 0;
    char lagi;

    cout << "==================================\n";
    cout << "      MENU MAKANAN & MINUMAN\n";
    cout << "==================================\n";
    cout << "MAKANAN:\n";
    cout << "1. Soto       - Rp15.000\n";
    cout << "2. Rawon      - Rp20.000\n";
    cout << "3. Pecel      - Rp10.000\n";
    cout << "----------------------------------\n";
    cout << "MINUMAN:\n";
    cout << "4. Teh        - Rp 3.000\n";
    cout << "5. Kopi       - Rp 5.000\n";
    cout << "==================================\n";

    do {
        cout << "\nPilih menu (1-5): ";
        cin >> pilihan;

        if (pilihan < 1 || pilihan > 5) {
            cout << "Pilihan tidak valid!\n";
            continue;
        }

        cout << "Masukkan jumlah pesanan: ";
        cin >> jumlah;

        if (jumlah <= 0) {
            cout << "Jumlah harus lebih dari 0!\n";
            continue;
        }

        long long harga = 0;
        string nama;

        switch (pilihan) {
            case 1:
                nama = "Soto";
                harga = 15000;
                break;
            case 2:
                nama = "Rawon";
                harga = 20000;
                break;
            case 3:
                nama = "Pecel";
                harga = 10000;
                break;
            case 4:
                nama = "Teh";
                harga = 3000;
                break;
            case 5:
                nama = "Kopi";
                harga = 5000;
                break;
        }

        long long subtotal = harga * jumlah;
        total += subtotal;

        cout << nama << " x " << jumlah
             << " = Rp" << subtotal << '\n';

        cout << "Tambah pesanan lagi? (y/n): ";
        cin >> lagi;

    } while (lagi == 'y' || lagi == 'Y');

    cout << "\n==================================\n";
    cout << "          STRUK PEMBELIAN\n";
    cout << "==================================\n";
    cout << "Total pembayaran: Rp"
         << total << '\n';
    cout << "Terima kasih telah berbelanja!\n";
    cout << "==================================\n";

    return 0;
}
