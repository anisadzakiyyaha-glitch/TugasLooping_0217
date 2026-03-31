#include <iostream>
using namespace std;

// variabel global
int angka;
int pilihan;

bool cekPrima() {
    if (angka < 2) return false;
    int i = 2;
    while (i * i <= angka) {
        if (angka % i == 0) return false;
        i++;
    }
    return true;
}
bool cekFibonacci() {
    int a = 0, b = 1;
    while (b < angka) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return (b == angka || angka == 0);
}
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}
void tampilHasilPrima() {
    if (cekPrima())
        cout << angka << " adalah bilangan prima." << endl;
    else
        cout << angka << " bukan bilangan prima." << endl;
}
void tampilHasilFibonacci() {
    if (cekFibonacci())
        cout << angka << " adalah bilangan fibonacci." << endl;
    else
        cout << angka << " bukan bilangan fibonacci." << endl;
}
void tampilHasilFibonacci() {
    if (cekFibonacci())
        cout << angka << " adalah bilangan fibonacci." << endl;
    else
        cout << angka << " bukan bilangan fibonacci." << endl;
}
void tampilMenu() {
    cout << "\n=== MENU ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;
}

int main() {
    while (true) {
        tampilMenu();
        switch (pilihan) {
            case 1:
                inputAngka();
                tampilHasilPrima();
                break;
        }
    }
    return 0;
}