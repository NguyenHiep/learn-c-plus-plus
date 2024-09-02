#include <iostream>
#include <string>

using namespace std;

class SinhVien {
    string hoten;
    int namsinh;
    float dtb;

    public:
        SinhVien();
        SinhVien(string hoten, int namsinh, float dtb);
        void setHoten(string hoten);
        void setNamsinh(int namsinh);
        void setDtb(float dtb);
        string getHoten();
        int getNamsinh();
        float getDtb();
        void thongtinSV();

    friend void trungTuyen(SinhVien);
};


SinhVien::SinhVien() {
    this->hoten = "";
    this->namsinh = 0;
    this->dtb = 0;
}

SinhVien::SinhVien(string hoten, int namsinh, float dtb) {
    this->setHoten(hoten);
    this->setNamsinh(namsinh);
    this->setDtb(dtb);
}

inline void SinhVien::setHoten(string hoten) {
    this->hoten = hoten;
}

inline void SinhVien::setNamsinh(int namsinh) {
    this->namsinh = namsinh;
}

inline void SinhVien::setDtb(float dtb) {
    this->dtb = dtb;
}

inline string SinhVien::getHoten() {
    return this->hoten;
}

inline int SinhVien::getNamsinh() {
    return this->namsinh;
}

inline float SinhVien::getDtb() {
    return this->dtb;
}

inline void SinhVien::thongtinSV() {
    cout << this->hoten << " " << this->namsinh << " " << this->dtb << endl;
}

void trungTuyen(SinhVien sv) {
    if (sv.getDtb() >= 5) {
        cout << "Chao, "+ sv.getHoten() +" Chuc mung ban da trung Tuyen!" << endl;
    } else {
        cout << "Rat tuyet ban da khong trung tuyen" << endl;
    }
}

int main() {
    SinhVien sv1("Nguyen Minh Hiep", 1993, 8.5);
    SinhVien sv2("Tuyen Vo", 1993, 4.5);

    sv1.thongtinSV();
    trungTuyen(sv1);

    sv2.thongtinSV();
    trungTuyen(sv2);
    return 0;
}
