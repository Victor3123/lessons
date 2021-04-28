#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;


int main() {
    srand(time(0));
    const int DIM1 = 100;
    const int DIM2 = 100;

    int ary[DIM1][DIM2];
    int o = 100;


    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            ary[i][j] = rand() % 90 + 10;
        }
    }
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            cout << " " << ary[i][j];
            if (ary[i][j] < o && ary[i][j] % 2 == 0){
                o = ary[i][j];
            }
        }
        cout << endl << endl;
    }
    cout << "====================================================================================\n" << o;
    return 0;
}