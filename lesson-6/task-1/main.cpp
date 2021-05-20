#include <iostream>
#include <ctime>
#include <Windows.h>


using namespace std;

int customRand(int min, int max) {
    return rand() % (max - min + 1) + min;
}


int main() {

    srand(time(0));
    SetConsoleOutputCP(CP_UTF8);



    int arrayWidth, arrayHeight;
//
//    cout << "Введите выстоту масива: \n";
//    cin >> arrayHeight;
//    cout << "Введите ширину масива: \n";
//    cin >> arrayWidth;

    int ary[10][10];

//    ary.resize(arrayHeight);

    for(int i = 0; i < arrayHeight; i++){
        for(int j = 0; j < arrayWidth; j++){
            ary[i][j] = customRand(10, 99);
        }
    }

    for(int i = 0; i < arrayHeight; i++){
        for(int j = 0; j < arrayWidth; j++){
            cout << "[" << ary[i][j] << "],";
        }
        printf("\n");
    }
    printf("\n=====%s===%f5.\="
           "====================================\n", "hello", 2.366);

    int max = 10;
    int min = 99;
    int sumUnpaired = 0;
    int average = 0;
    int count = 0;
    int sumOfPaired = 0;

    for(int i = 0; i < arrayHeight; i++){
        for(int j = 0; j < arrayWidth; j++){
            if (ary[i][j] > max){
                max = ary[i][j];
            }
            if (ary[i][j] < min){
                min = ary[i][j];
            }
            if (ary[i][j] > 55 & ary[i][j] % 2 != 0){
                sumUnpaired = sumUnpaired + ary[i][j];
            }
            if (ary[i][j] % 2 == 0){
                sumOfPaired = sumOfPaired + ary[i][j];
                count = count + 1;
            }
        }
    }

    average = sumOfPaired / count;



    cout << "max: " << max << "\nmin: " << min << "\nsumUnpaired and > 55: " << sumUnpaired << "\naverage: " << average;
    return 0;
}
