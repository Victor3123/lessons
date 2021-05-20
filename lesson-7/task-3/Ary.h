//
// Created by user on 20.05.2021.
//

#ifndef TASK_3_ARY_H
#define TASK_3_ARY_H

#include <iostream>
#include <vector>

using namespace std;

class Ary
{
private:

    int customRand(int min, int max)
    {
        return rand() % (max - min + 1) + min;
    }

    int size;
    vector<vector<int>> array;

public:
    Ary()
    {
        cout << "Введите размер массива: \n"
                "";
        cin >> size;
        array.resize(size);
        for (int i = 0; i < size; i++) {
            array[i].resize(size);
        }
    }

    void vectorFill()
    {
        int min, max;
        cout << "Введите минимальное и максимальное значения массива \nМинимальное значения: ";
        cin >> min;
        cout << "\nМаксимально значения: ";
        cin >> max;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                array[i][j] = customRand(min, max);
            }
        }
    }

    void printArray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << endl << i + 1 << ":";
            for (int j = 0; j < size; j++)
            {
                cout << " [" << array[i][j] << "]";
            }

        }
    }

};


#endif //TASK_3_ARY_H
