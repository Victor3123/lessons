#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    int comp;
    int igrok;
    time_t t;
    char dp;

    g:
    srand((unsigned) time(&t));
    comp = rand() % 6 + 1;

    igrok = rand() % 6 + 1;

    cout << "Компьютер бросает кости: " << comp << endl;
    cout << "Вы бросаете кости: " << igrok << endl;

    if (igrok == comp) {
        cout << "Нечья" << endl;

    }

    if (igrok > comp) {
        cout << "Вы выиграли" << endl;
    }
    if (igrok < comp) {


        cout << "Вы проиграли" << endl;

    }

    cout << "Хотите сыграть еще раз? Y/N" << endl;
    cin >> dp;
    if (dp == 'Y' || dp == 'y') {
        goto g;
    }

    if (dp == 'N' || dp == 'n') {
        return (0);
    }


    cin.get();
    cin.get();
}
