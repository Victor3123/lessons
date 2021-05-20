//
// Created by user on 16.05.2021.
//

#include <iostream>
#include <ctime>

#ifndef CLASSES_ANIMAL_H
#define CLASSES_ANIMAL_H

using namespace std;

class Animal {

private:

    int customRand(int min, int max) {
        return rand() % (max - min + 1) + min;
    }

    string genders[2]{"male", "female"};

    string names[10]{"Charlie", "Max", "Buddy", "Oscar", "Milo","Archie", "Ollie", "Toby", "Jack", "Teddy"};

    string gender;
    string name;

public:

    Animal(){
        printf("I was born\n====================================\n");
        setGender();
        setName();
    }

    void setGender(){
        this->gender = this->genders[customRand(0,1)];
    }

    void setName(){
        this->name = this->names[customRand(0,9)];
    }

    void getGender(){
        cout << "My gender is: " << this->gender << endl;
    }

    void getName(){
        cout << "My name is: " << this->name << endl;
    }

    ~Animal(){
        printf("====================================\nI was die");
    }
};


#endif //CLASSES_ANIMAL_H
