#include <iostream>
#include <string>

using namespace std;

string HitungKalori(int lari_menit, int pushup_menit, int plank_menit) {
    double kalori_lari = (lari_menit / 5.0) * 60;
    double kalori_pushup = (pushup_menit / 30.0) * 200;
    double kalori_plank = plank_menit * 5.0;
    
    double total_kalori = kalori_lari + kalori_pushup + kalori_plank;
    
    return "Jumlah kalori yang terbakar: " + to_string(total_kalori) + " kalori";
}

int main() {
    int lari_menit, pushup_menit, plank_menit;

    cout << "Masukkan lama waktu berlari (menit): ";
    cin >> lari_menit;

    cout << "Masukkan lama waktu push-up (menit): ";
    cin >> pushup_menit;

    cout << "Masukkan lama waktu plank (menit): ";
    cin >> plank_menit;

    cout << endl;
    cout << HitungKalori(lari_menit, pushup_menit, plank_menit) << endl;

    return 0;
}
