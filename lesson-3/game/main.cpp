#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    string yes_or_no;
    cout << "Играть? (Y/y or N/n)";
    cin >> yes_or_no;
    if (yes_or_no == "Y" || "y"){
        cout << "Всё ок";
    }
    else if ((yes_or_no == "N" || "n")){
        return 0;
    }

    return 0;
}















//_____________
//|           |
//|           |
//|     1     |
//|           |
//-------------
//_____________
//|           |
//|  2     2  |
//|           |
//|           |
//-------------
//_____________
//|           |
//| 3       3 |
//|     3     |
//|           |
//-------------
//_____________
//|           |
//| 4      4  |
//|           |
//| 4      4  |
//-------------
//_____________
//|           |
//|  5     5  |
//|     5     |
//|  5     5  |
//-------------
//_____________
//|           |
//|  6     6  |
//|  6     6  |
//|  6     6  |
//-------------