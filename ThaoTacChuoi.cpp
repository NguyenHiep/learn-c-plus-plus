
#include <iostream>

using namespace std;

int main() {
    // int a, b, sum;
    // a = 15;
    // b = 6;
    // sum = a + b;
    // cout <<"Tong cua "<<a<<" + "<<b<<" = "<<sum<<endl;

    // Bai tap 2

    // char x, y, z;
    // cin >> x >> y >> z; // Nhap du lieu
    //
    // cout << x << " " << y << " " << z << endl; // Xuat du lieu

    // Bai tap 3

    string ho = "Nguyen";
    string ten = "Hiep";
    string hovaten = ho + ten; // C1
    string hovaten2 = ho.append(ten);

    cout << hovaten << endl;
    cout << hovaten2 << endl;

    cout << hovaten.length() << endl;
    cout << hovaten2.size() << endl;
    return 0;
}