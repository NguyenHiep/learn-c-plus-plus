

#include <iostream>
#include <ostream>
using namespace std;

class NhanVien {
    string manv, hoten;
    int namsinh;
    float diemtb;

    public:
        void nhap();
        void hienthi();
        friend void nhapMang(NhanVien *nv, int n);
        friend void xuatMang(NhanVien *nv, int n);
        friend int timKiem(NhanVien *nv, int n, string manv);
        friend float timDiemLonNhat(NhanVien *nv, int n);
        friend void lietKeNhanVienCoDiemLonNhat(NhanVien *nv, int n);
};

void NhanVien::nhap() {
    cout<<"\nNhap ma so nhan vien: ";
    fflush(stdin);
    cin>>this->manv;

    cout<<"\nNhap ho ten nhan vien: ";
    fflush(stdin);
    getline(cin, this->hoten);

    cout<<"\nNhap nam sinh: ";
    cin>>this->namsinh;

    cout<<"\nNhap diem trung binh: ";
    cin>>this->diemtb;
}

void NhanVien::hienthi() {
    cout<<this->manv<<"\t"<<this->hoten<<"\t"<<this->namsinh<<"\t"<<this->diemtb<<endl;
}

void nhapMang(NhanVien *nv, int n) {
    int i = 0;
    while (i < n) {
        cout<<"\nNhap ho ten nhan vien thu " <<i<< ":";
        (nv+i)->nhap();
        i++;
    }
}

void xuatMang(NhanVien *nv, int n) {
    int i = 0;
    while (i < n) {
        (nv+i)->hienthi();
        i++;
    }
}

int timKiem(NhanVien *nv, int n, string manv) {
    int i = 0;
    while (i < n) {
        if ((nv+i)->manv == manv) {
            return i;
        }
        i++;
    }

    return -1; // If not found
}

float timDiemLonNhat(NhanVien *nv, int n) {
    int i = 0;
    float maxScore = (nv+0)->diemtb;
    while (i < n) {
        if (maxScore < (nv+i)->diemtb) {
            maxScore = (nv+i)->diemtb;
        }
        i++;
    }
    return maxScore;
}

void lietKeNhanVienCoDiemLonNhat(NhanVien *nv, int n) {
    int i = 0;
    float maxScore = timDiemLonNhat(nv,n);
    while (i < n) {
        if ((nv+i)->diemtb == maxScore) {
            (nv+i)->hienthi();
        }
        i++;
    }
}


int main() {
    NhanVien *nv;
    nv = new NhanVien[3];
    nhapMang(nv,3);
    xuatMang(nv,3);
    int result = timKiem(nv,3,"100");

    if (result == -1) {
        cout<< "\nKhong tim thay NV";
    } else {
        cout<<"\nThong tin nhan vien tim kiem:"<<endl;
        (nv+result)->hienthi();
    }

    // Hien thi danh sach nhan vien co diem cao nhat
    cout<<"\nDanh sach nhan vien co diem thi cao nhat:"<<endl;
    lietKeNhanVienCoDiemLonNhat(nv,3);
    delete(nv);
    return 0;
}