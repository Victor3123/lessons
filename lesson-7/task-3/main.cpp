#include "Ary.h"
#include <windows.h>
#include <time.h>

using namespace std;

int main() {
    srand(time(0));
    SetConsoleOutputCP(CP_UTF8);

    Ary *ary = new Ary();
    ary->vectorFill();
    ary->printArray();
    return 0;
}
