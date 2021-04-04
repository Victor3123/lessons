#include <iostream>

using namespace std;

int main() {
    int FirstNumb;
    int SecondNumb;

    cout << "Print first number:" << endl;
    cin >> FirstNumb;
    cout << "Print second number:" << endl;
    cin >> SecondNumb;
    cout << "0." << (FirstNumb % SecondNumb);
    return 0;
}
