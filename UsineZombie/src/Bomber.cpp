#include "Bomber.h"
Bomber::Bomber(){
	attack *=2;
}

Bomber::Bomber(string n, int p, int a){
}

void Bomber::Kamikaze(Zombie *cible)
	{
		cible->setPv(cible->getPv() - 3*getAtk());
		this ->~Bomber();
		this ->~Zombie();
	}
