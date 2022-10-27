#include <iostream>
#include <iomanip>

using namespace std;

string s1 = "value";
string s2 = "memory address";

bool twice(int *a) {
    cout << endl;
    cout << "----- function begins -----" << endl;
    cout << endl;

    if (a == nullptr) {
        cout << "null" << endl;
        cout << endl;
        cout << "----- function ends   -----" << endl;
        return false;
    }
    
    cout << left << setw(s2.length() + 2) << s1 << *a << endl;
    cout << setw(s2.length() + 2) << s2 << a << endl;
    cout << endl;

    *a *= 2;
    cout << left << setw(s2.length() + 2) << s1 << *a << endl;
    cout << left << setw(s2.length() + 2) << s2 << a << endl;

    cout << endl;
    cout << "----- function ends   -----" << endl;
    cout << endl;

    return true;
}

int main() {
    cout << endl;

    twice(nullptr);
    cout << endl;

    int v = 16;
    cout << left << setw(s2.length() + 2) << s1 << v << endl;
    cout << left << setw(s2.length() + 2) << s2 << &v << endl;

    twice(&v);
    cout << left << setw(s2.length() + 2) << s1 << v << endl;
    cout << left << setw(s2.length() + 2) << s2 << &v << endl;

    cout << endl;
}