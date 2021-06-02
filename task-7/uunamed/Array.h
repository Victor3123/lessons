//
// Created by user on 01.06.2021.
//

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

#ifndef UUNAMED_ARRAY_H
#define UUNAMED_ARRAY_H


class Array {
private:

    int customRand(int min, int max) {
        return rand() % (max - min + 1) + min;
    }

    vector<int> ary;
    int size;
public:
    Array() {
        printf("Введите размер масива: \n");
        cin >> size;
    }

    void fillVector(int minNumb, int maxNumb) {
        for (int i = 0; i < size; i++) {
            ary.push_back(customRand(minNumb, maxNumb));
        }
    }

    void printVector() {
        for (int i = 0; i < ary.size(); i++) {
            cout << "[" << ary[i] << "]";
        }
    }


    void sortAscending() {
        cout << "\nОтсортировано по возростанию:\n";
        int temp;
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (ary[j] > ary[j + 1]) {
                    temp = ary[j];
                    ary[j] = ary[j + 1];
                    ary[j + 1] = temp;
                }
            }
        }
    }
    void descendingSort(){
        cout << "\nОтсортировано по убыванию:\n";
        int temp;
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (ary[j] < ary[j + 1]) {
                    temp = ary[j];
                    ary[j] = ary[j + 1];
                    ary[j + 1] = temp;
                }
            }
        }
    }

};
#endif //UUNAMED_ARRAY_H
