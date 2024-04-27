#include <iostream>
#include <string>

using namespace std;

string AnalisisMafia(string nama, int umur, string tempat_tinggal, int uang_tabungan) {
    if (umur > 40 && (tempat_tinggal == "Nevada" || tempat_tinggal == "New York" || tempat_tinggal == "Havana") && uang_tabungan > 10000000) {
        return nama + " kemungkinan adalah seorang anggota mafia dengan " + "Don";
    } else if((umur >= 25 && umur <= 40) && (tempat_tinggal == "New Jersey" || tempat_tinggal == "Manhattan" || tempat_tinggal == "Nevada") && (uang_tabungan >= 1000000 && uang_tabungan <= 2000000)) {
        return nama + " kemungkinan adalah seorang anggota mafia dengan " + "Underboss";
    } else if((umur >= 18 && umur <= 24) && (tempat_tinggal == "California" || tempat_tinggal == "Detroit" || tempat_tinggal == "Boston") && uang_tabungan < 1000000) {
        return nama + " kemungkinan adalah seorang anggota mafia dengan " + "Capo";
    } else {
        return nama + " tidak mencurigakan";
    }
}

int main() {
    string nama, tempat_tinggal;
    int umur, uang_tabungan;
    
    cout << "Masukkan nama: ";
    getline(cin, nama);
    cout << "Masukkan umur: ";
    cin >> umur;
    cin.ignore();
    cout << "Masukkan tempat tinggal: ";
    getline(cin, tempat_tinggal);
    cout << "Masukkan uang tabungan dalam dollar: ";
    cin >> uang_tabungan;

    cout << endl;
    cout << AnalisisMafia(nama, umur, tempat_tinggal, uang_tabungan) << endl;

    return 0;
}
