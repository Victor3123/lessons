#include <iostream>

using namespace std;

int main() {
    string name;
    string surname;
    int age;


    cout << "What is your name?:" << endl;
    cin >> name;
    cout << "What is your surname?:" << endl;
    cin >> surname;
    cout << "How old are you?: " << endl;
    cin >> age;
    cout << surname << " " << name << "," << " " << age;

    return 0;
}