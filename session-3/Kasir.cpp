//program tugas ke 2
#include <iostream>
using namespace std;

int main() {
    int harga = 15000;
    int jumlah = 3;
    int total = harga * jumlah;
    int diskon = total * 10 / 100; //(10% diskon)
    int bayar = total - diskon;
    
    cout << "Total  : Rp " << total << endl;
    cout << "Diskon : Rp " << diskon << endl;
    cout << "Bayar  : Rp " << bayar << endl;
    
    return 0;
}