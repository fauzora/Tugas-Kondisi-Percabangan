#include <iostream>
#include <string>

using namespace std;

string HitungTarifWahana(int umur, int tinggi_cm) {
    int tarif;

    if (umur <= 1) {
        return "Dilarang masuk";
    }

    if (umur <= 3) {
        tarif = 30000;
        if (tinggi_cm > 70)
            tarif += 10000;
    } else if (umur <= 7) {
        tarif = 40000;
        if (tinggi_cm > 120)
            tarif += 15000;
    } else if (umur <= 10) {
        tarif = 50000;
        if (tinggi_cm > 150)
            tarif += 20000;
    } else {
        tarif = 80000;
    }

    return "Tarif harga untuk anak umur " + to_string(umur) + " tahun dengan tinggi " + to_string(tinggi_cm) + " cm adalah: Rp " + to_string(tarif);
}

int main() {
    int umur, tinggi_cm;

    cout << "Masukkan umur anak: ";
    cin >> umur;

    cout << "Masukkan tinggi anak (cm): ";
    cin >> tinggi_cm;
    
    cout << endl;
    
    cout << HitungTarifWahana(umur, tinggi_cm) << endl;

    return 0;
}
