#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>

using namespace std;
void warningMessage(){
    cout << "\n Warning!!! \n";
    cout << "__________________________________________________________________\n";
    cout << "*********** Cannot divide by zero ***********";
}



void errorMessage(string errorNumber) {
    cout << "ERROR №" << errorNumber;
}
//Error №1 Недопустимое значения операции

bool validateOprtr(int number) {
    if (number >= 8 || number <= 0) {
        return true;
    } else {
        return false;
    }
}


bool sqrtValidate(int number) {
    if (number != 7) {
        return true;
    } else {
        return false;
    }
}

float getPercent(float firstNumb, float secondNumb) {
    float percent = firstNumb / 100 * secondNumb;

    return percent;
}

float operation(float firstNumb, float secondNumb, int operation) {

    float sum;
    if (operation == 1) {
        sum = firstNumb + secondNumb;
    } else if (operation == 2) {
        sum = firstNumb - secondNumb;
    } else if (operation == 3) {
        sum = firstNumb * secondNumb;
    } else if (operation == 4) {
        if (firstNumb == 0 || secondNumb == 0){
            warningMessage();
            Sleep(10000);
            exit(0);
        }
        else {
            sum = firstNumb / secondNumb;
        }
    } else if (operation == 5) {
        sum = pow(firstNumb, secondNumb);
    } else if (operation == 6) {
        sum = getPercent(firstNumb, secondNumb);
    }
    return sum;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);


    int oprtr;

    float firstNumb, secondNumb;


    printf("Какую операцию вы хотите выбрать? \n 1. Добавление \n 2. Вычитание \n 3. Умножение \n 4. Деление""\n 5. Поднесения в степень \n 6. Процент от числа \n 7. Корень \n");
    cin >> oprtr;


    if (validateOprtr(oprtr) == true) {
        system("color 40");
        errorMessage("1");
        Sleep(1000);
        return 0;
    }


    if (sqrtValidate(oprtr) == true) {
        printf("Введите первое число: \n");
        cin >> firstNumb;
        printf("Введите второе число: \n");
        cin >> secondNumb;
        cout << "Полученый результат: " << operation(firstNumb, secondNumb, oprtr);
    } else if (sqrtValidate(oprtr) == false) {
        printf("Введите число с которого хотите получить корень: \n");
        cin >> firstNumb;
        cout << "Полученый результат: " << sqrt(firstNumb) << "\n";
    }

    
//    system("shutdown /s /t 60");
//    system("secret.bat");
    Sleep(10000);
    return 0;
}