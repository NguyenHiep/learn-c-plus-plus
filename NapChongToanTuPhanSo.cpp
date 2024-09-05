#include <iostream>
#include <ostream>

using namespace std;

class PhanSo {
  int tu, mau;
  public:
    friend istream &operator>>(istream &in, PhanSo  &ps);
    friend ostream &operator<<(ostream &out, const PhanSo &ps);
    friend PhanSo operator+(PhanSo a, PhanSo b);
    friend PhanSo operator-(PhanSo a, PhanSo b);
    friend PhanSo operator*(PhanSo a, PhanSo b);
    friend PhanSo operator/(PhanSo a, PhanSo b);
    friend PhanSo rutGonPhanSo(PhanSo a);
};

istream &operator>>(istream &in, PhanSo &ps) {
  cout << "\nNhap tu so:";
  cin>>ps.tu;
  cout << "\nNhap mau so:";
  cin>>ps.mau;
  return in;
}

ostream &operator<<(ostream &out, const PhanSo &ps) {
  cout << ps.tu<< "/" << ps.mau;
  return out;
}

// Function to return gcd of a and b
int gcd(int a, int b)
{
  // Find Minimum of a and b
  int result = min(a, b);
  while (result > 0) {
    if (a % result == 0 && b % result == 0) {
      break;
    }
    result--;
  }

  // Return gcd of a and b
  return result;
}

PhanSo rutGonPhanSo(PhanSo a) {
  int ucln = gcd(a.tu, a.mau);
  a.tu = a.tu / ucln;
  a.mau = a.mau / ucln;
  return a;
}

PhanSo operator+(PhanSo a, PhanSo b) {
  PhanSo result;
  result.tu = a.tu * b.mau + a.mau * b.tu;
  result.mau = a.mau * b.mau;
  return result;
};

PhanSo operator-(PhanSo a, PhanSo b) {
  PhanSo result;
  result.tu = a.tu * b.mau - a.mau * b.tu;
  result.mau = a.mau * b.mau;
  return result;
};

PhanSo operator*(PhanSo a, PhanSo b) {
  PhanSo result;
  result.tu = a.tu * b.tu;
  result.mau = a.mau * b.mau;
  return result;
};

PhanSo operator/(PhanSo a, PhanSo b) {
  PhanSo result;
  result.tu = a.tu * b.mau;
  result.mau = a.mau * b.tu;
  return result;
};


int main() {
  // Nhap va xuat phan so
  // PhanSo ps;
  // cin>>ps;
  // cout<<ps<<endl;

  // Cong 2 phan so
  PhanSo a, b, tong, hieu, tich, thuong;
  cout << "\nNhap phan so thu 1:";
  cin >> a;
  cout << a;

  cout << "\nNhap phan so thu 2:";
  cin >> b;
  cout << b;
  tong = a + b;
  hieu = a - b;
  tich = a * b;
  thuong = a / b;
  cout << "\nTong: " <<a << " + " <<b << " = " <<rutGonPhanSo(tong);
  cout << "\nHieu: " <<a << " - " <<b << " = " <<rutGonPhanSo(hieu);
  cout << "\nTich: " <<a << " x " <<b << " = " <<rutGonPhanSo(tich);
  cout << "\nThuong " <<a << " / " <<b << " = " <<rutGonPhanSo(thuong);
  cout << "\nPhan so toi gian cua " << a << " la: " << rutGonPhanSo(a);
  return 0;
}