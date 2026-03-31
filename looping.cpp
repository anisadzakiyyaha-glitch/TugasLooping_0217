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
void tampilHasilFibonacci() {}
void tampilMenu() {}

int main() {
    return 0;
}