#include "Animal.h"


using namespace std;



int main() {
    srand(time(0));

    Animal *pet = new Animal();

    pet->getGender();
    pet->getName();

    delete pet;

    return 0;
}
