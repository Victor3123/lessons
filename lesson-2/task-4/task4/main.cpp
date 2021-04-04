#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    float a;
    float b;
    float f;

    cout << "Print number a: " << endl;
    cin >> a;
    cout << "Print number b: " << endl;
    cin >> b;
    cout << "Print number f: " << endl;
    cin >> f;

    cout << "Calculating result: " << endl;
    Sleep (500);
    cout << "." << endl;
    Sleep (500);
    cout << ".." << endl;
    Sleep (500);
    cout << "..." << endl;

    cout << "Result: " << ((a + b - f / a) + f * a * a - (a + b));
    return 0;
}
