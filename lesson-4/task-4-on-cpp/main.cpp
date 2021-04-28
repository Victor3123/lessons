#include <iostream>
#include <time.h>

using namespace std;

int main() {

    srand(time(0));

    const int size = 10;

    int firstArray[size][size];
    int secondArray[size][size];
    int thirdArray[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            firstArray[i][j] = 10 + rand() % 21;
            secondArray[i][j] = 10 + rand() % 21;
            thirdArray[i][j] = firstArray[i][j] + secondArray[i][j];
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << " " << thirdArray[i][j];
            if (j == 9) {
                cout << "\n";
            }
        }
    }


    return 0;
}
