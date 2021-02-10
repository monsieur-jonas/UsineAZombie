#include <iostream>
#include<time.h>
#include "Zombie.h"
#include "Bomber.h"

using namespace std;

int main(){
    srand(time(NULL));
    Zombie z1("Eric", 100, 10);
    z1.ShowInfo();

    Zombie z2("Bastien", 50, 8);
    z2.ShowInfo();

    Zombie z3("Jules", 70, 7);
    z3.ShowInfo();

	Bomber b1("groboum", 100, 10);
    b1.ShowInfo();
}
