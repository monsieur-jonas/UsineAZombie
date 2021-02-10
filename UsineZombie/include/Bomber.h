#ifndef BOMBER_H
#define BOMBER_H

#include "zombie.h"
#include <string>
#include <iostream>
#include <random>

using namespace std;

class Bomber : public Zombie{

public:

	//Constructeur Bomber
	Bomber();
	Bomber(string n, int p, int a);

	//fonction kamikaze
	void Kamikaze(Zombie *cible);

private:

};

#endif // BOMBER_H
