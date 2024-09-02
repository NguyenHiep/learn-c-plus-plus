#include<iostream>
using namespace std;

class Employee {
    char ten[30];
    char ms[10];
    int tuoi;

public :
    Employee(char te[], char m[], int tu): tuoi(tu) {
        strcpy(ten, te);
        strcpy(ms, m);
    }

    void Display() {
        cout << "Ma so: " << ms << " Ten: " << ten << " Tuoi:" << tuoi << endl;
    }
};

int main() {
    Employee e(" Nguyen Van A", "001", 20);

    e.Display();
    return 0;
}
