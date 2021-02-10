#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <random>

using namespace std;

class Zombie
{
private:
    string nom;
    int pv;
    int atk;

public:
	//getter setter
    string getNom() const;
	void setNom(string n);

	int getPv() const;
	void setPv(int p);

    int getAtk() const;
	void setAtk(int a);
	//constructeur
	Zombie();
	Zombie(string n, int p, int a);
	//destructeur
	~Zombie();
	//fonction attaque et info
	void AttaqueZombie(Zombie *cible);
	void ShowInfo();


};

#endif // Zombie.H
