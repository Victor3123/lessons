#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

using namespace std;


void game(){
    int comp;
    int igrok;
    time_t t;

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
//    else {
//        cout << "Вы ввели неверные данные\n";
//        goto c;
//    }

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

    cin.get();
    cin.get();
}
