#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Lớp Nguoi
class Nguoi {
protected:
    string cmnd;    // Số chứng minh nhân dân
    string hoten;   // Họ tên
    int namsinh;    // Năm sinh

public:
    // Phương thức khởi tạo mặc định
    Nguoi() : cmnd(""), hoten(""), namsinh(0) {}

    // Phương thức khởi tạo có tham số
    Nguoi(const string &cmndInput, const string &hotenInput, int namsinhInput)
        : cmnd(cmndInput), hoten(hotenInput), namsinh(namsinhInput) {}

    // Phương thức hủy ảo
    virtual ~Nguoi() {}

    // Phương thức nhập dữ liệu
    virtual void nhap() {
        cout << "Nhap CMND: ";
        cin >> cmnd;
        cin.ignore();
        cout << "Nhap ho ten: ";
        getline(cin, hoten);
        cout << "Nhap nam sinh: ";
        cin >> namsinh;
    }

    // Phương thức hiển thị dữ liệu
    virtual void hienthi() const {
        cout << "CMND: " << cmnd << ", Ho ten: " << hoten << ", Nam sinh: " << namsinh << endl;
    }
};

// Lớp SinhVien kế thừa từ lớp Nguoi
class SinhVien : public Nguoi {
private:
    string mssv;    // Mã số sinh viên
    string lop;     // Lớp học
    float diemtb;   // Điểm trung bình

public:
    // Phương thức khởi tạo mặc định
    SinhVien() : Nguoi(), mssv(""), lop(""), diemtb(0.0f) {}

    // Phương thức khởi tạo có tham số
    SinhVien(const string &cmndInput, const string &hotenInput, int namsinhInput,
             const string &mssvInput, const string &lopInput, float diemtbInput)
        : Nguoi(cmndInput, hotenInput, namsinhInput), mssv(mssvInput), lop(lopInput), diemtb(diemtbInput) {}

    // Phương thức khởi tạo sao chép
    SinhVien(const SinhVien &sv)
        : Nguoi(sv.cmnd, sv.hoten, sv.namsinh), mssv(sv.mssv), lop(sv.lop), diemtb(sv.diemtb) {}

    // Phương thức nhập dữ liệu cho sinh viên
    void nhap() override {
        Nguoi::nhap();  // Gọi phương thức nhập của lớp cơ sở
        cout << "Nhap MSSV: ";
        cin >> mssv;
        cin.ignore();
        cout << "Nhap lop: ";
        getline(cin, lop);
        cout << "Nhap diem trung binh: ";
        cin >> diemtb;
    }

    // Phương thức hiển thị dữ liệu cho sinh viên
    void hienthi() const override {
        Nguoi::hienthi();  // Gọi phương thức hiển thị của lớp cơ sở
        cout << "MSSV: " << mssv << ", Lop: " << lop << ", Diem trung binh: " << diemtb << endl;
    }
};

// Hàm main
int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    // Sử dụng con trỏ kiểu Nguoi để quản lý danh sách sinh viên
    vector<Nguoi*> danhSachSinhVien;

    for (int i = 0; i < n; ++i) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":" << endl;
        SinhVien* sv = new SinhVien();  // Khởi tạo đối tượng sinh viên
        sv->nhap();  // Nhập thông tin sinh viên
        danhSachSinhVien.push_back(sv);  // Thêm sinh viên vào danh sách
    }

    cout << "\nDanh sach sinh vien:\n";
    for (const auto& sv : danhSachSinhVien) {
        sv->hienthi();  // Hiển thị thông tin sinh viên
        cout << endl;
    }

    // Giải phóng bộ nhớ
    for (auto sv : danhSachSinhVien) {
        delete sv;
    }

    return 0;
}
