#include <iostream>
#include <time.h>
#include <vector>
#include <iterator>

using namespace std;



int random(int min, int max){

    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(0));

    vector <int> list;
    list.push_back(random(0, 99));
        while (list.back() < 99){
            list.push_back(random(0, 99));
        }
    cout << "first element = " << list.front() << "\nlast element = " << list.back() << "\nsize of array = " << list.size() ;



    return 0;
}
