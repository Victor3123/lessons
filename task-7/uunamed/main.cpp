#include "Array.h"
#include <Windows.h>
using namespace std;


int main() {
    srand(time(0));
    SetConsoleOutputCP(CP_UTF8);

    int minNumb, maxNumb;
    printf("Введите минимальное число заполнения масива: \n");
    cin >> minNumb;
    printf("Введите максимальное число заполнения масива: \n");
    cin >> maxNumb;

    Array *ary = new Array();
    ary->fillVector(minNumb, maxNumb);
    ary->printVector();
    ary->sortAscending();
    ary->printVector();
    ary->descendingSort();
    ary->printVector();
    return 0;
}
