#include <iostream>
using namespace std;

// variabel global
int angka;
int pilihan;

// cek bilangan prima
bool cekPrima() {
    if (angka < 2) return false;
    int i = 2;
    while (i * i <= angka) {
        if (angka % i == 0) return false;
        i++;
    }
    return true;
}

// cek bilangan fibonacci
bool cekFibonacci() {
    int a = 0, b = 1;
    while (b < angka) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return (b == angka || angka == 0);
}

// prosedur input angka
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}

// prosedur tampil hasil prima
void tampilHasilPrima() {
    if (cekPrima())
        cout << angka << " adalah bilangan prima." << endl;
    else
        cout << angka << " bukan bilangan prima." << endl;
}

// prosedur tampil hasil fibonacci
void tampilHasilFibonacci() {
    if (cekFibonacci())
        cout << angka << " adalah bilangan fibonacci." << endl;
    else
        cout << angka << " bukan bilangan fibonacci." << endl;
}

// function tampil menu
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
            case 2:
                inputAngka();
                tampilHasilFibonacci();
                break;
            case 0:
                cout << "Program selesai." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid, silakan coba lagi." << endl;
        }
    }
    return 0;
}