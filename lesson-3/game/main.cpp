#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

using namespace std;


void game(){
    int comp;
    int gamer;
    time_t t;

    srand((unsigned) time(&t));
    comp = rand() % 6 + 1;

    gamer = rand() % 6 + 1;

    cout << "Компьютер бросает кости: " << comp << endl;
    cout << "Вы бросаете кости: " << gamer << endl;

    if (gamer == comp) {
        cout << "Нечья" << endl;

    }

    if (gamer > comp) {
        cout << "Вы выиграли" << endl;
    }
    if (gamer < comp) {


        cout << "Вы проиграли" << endl;

    }
}

int replay(char dp){
    cout << "Хотите сыграть еще раз? Y/N" << endl;
    cin >> dp;
    if (dp == 'Y' || dp == 'y') {
        return 1;
    }
    else if (dp == 'N' || dp == 'n') {
        return 2;
    }
    else {
        return 3;
    }

}

int main() {
    char dp;
    SetConsoleOutputCP(CP_UTF8);

    g:
    game();
    r:
    int a = replay(dp);
    if(a == 1){
        goto g;
    }
    else if(a == 2){
        return 0;
    }
    else if(a == 3){
        goto r;
    }

}
