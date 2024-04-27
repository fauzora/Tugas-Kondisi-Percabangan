#include <iostream>
#include <string>

using namespace std;

string HitungCoding(int n_coding) {
    if(n_coding > 80) {
        return "LOLOS";
    } else if(n_coding >= 60 && n_coding <= 80){
        return "DIPERTIMBANGKAN";
    } else {
        return "GAGAL";
    }
}

string HitungInterview(string n_interview) {
    if(n_interview == "A" || n_interview == "B") {
        return "LOLOS";
    } else {
        return "GAGAL";
    }
}

string HitungHasil(int n_coding, string n_interview) {
    string hasil_coding = HitungCoding(n_coding);
    string hasil_interview = HitungInterview(n_interview);
    
    if((hasil_coding == "LOLOS" || hasil_coding == "DIPERTIMBANGKAN") && hasil_interview == "LOLOS") {
        return "Selamat Kamu Berhasil Menjadi Calon Programmer";
    } else {
        return "Maaf Kamu Belum Berhasil Menjadi Calon Programmer";
    }
}

int main() {
    int nilai_coding;
    string nilai_interview;
    
    cout << "Masukkan nilai coding: ";
    cin >> nilai_coding;
    cin.ignore();
    cout << "Masukkan nilai interview: ";
    getline(cin, nilai_interview);

    cout << endl;
    
    cout << "Hasil Coding : " << HitungCoding(nilai_coding) << endl;
    cout << "Hasil Interview : " << HitungInterview(nilai_interview) << endl;
    
    cout << endl;
    
    cout << HitungHasil(nilai_coding, nilai_interview) << endl;

    return 0;
}
