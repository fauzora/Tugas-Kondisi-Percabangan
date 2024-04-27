#include <iostream>

using namespace std;

string HasilNomorPunggung(int n_punggung) {
    string posisi;
    string hasil;
    
    if (n_punggung % 2 == 0) {
        posisi = "Target Attacker";
    }

    if (n_punggung % 2 == 0 && n_punggung >= 50 && n_punggung <= 100) {
        hasil = "Nomor punggung " + to_string(n_punggung) + " berhak dipilih menjadi: Captain Team";
        return hasil;
    }

    if (n_punggung % 2 != 0) {
        posisi = "Defender";
    }

    if (n_punggung % 2 != 0 && n_punggung > 90) {
        posisi = "Playmaker";
    }

    if (n_punggung % 2 != 0 && n_punggung % 3 == 0 && n_punggung % 5 == 0) {
        posisi = "Keeper";
    }
    
    hasil = "Nomor punggung " + to_string(n_punggung) + " menempati posisi sebagai: " + posisi;
    
    return hasil;
}

int main() {
    int nomor_punggung;
    
    cout << "Masukkan nomor punggung: ";
    cin >> nomor_punggung;

    cout << HasilNomorPunggung(nomor_punggung) << endl;

    return 0;
}
