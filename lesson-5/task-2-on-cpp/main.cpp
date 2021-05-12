#include <iostream>
#include <Windows.h>
#include <vector>

using namespace std;

class figure {
public:

};

class Screen {
public:


    char spaceFill() {
        int size;
        cin >> size;

        char **screen = new char *[size];

        for (int i; i < size; i++) {
            screen[i] = new char[size];
        }
        char space = ' ';
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                screen[i][j] = space;
            }
        }

        char star = '*';
        for (int i = 0; i < size; i++) {
            for (int j = 0; j <= i; j++) {
                screen[i][j] = star;
                cout << screen[i][j];
            }
            cout << "\n";
        }
    }


};

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int figure;
    int size;
    Screen firstScreen;

    firstScreen.spaceFill();


    return 0;
}
