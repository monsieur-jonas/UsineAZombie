#include "Zombie.h"
//constructeur
Zombie::Zombie(){
    setPv(10);
    setAtk(100);
    setNom("default");
}
//constructeur
Zombie::Zombie(string n, int p, int a){
	if (p>100 || a>10){
		this ->~Zombie();
	}
	else {
		nom = n;
		pv = p;
		atk= a;
	}
}
//destructeur
Zombie::~Zombie(){
	cout<< nom << " est decede. " <<endl;
}



//getter setter
    string Zombie::getNom() const
	{
		return nom;
	}
	void Zombie::setNom(string n)
	{
		nom = n;
	}

	int Zombie::getPv() const
	{
		return pv;
	}
	void Zombie::setPv(int p)
	{
		pv = p;
	}

    int Zombie::getAtk() const
	{
		return atk;
	}
	void Zombie::setAtk(int a)
	{
		atk =  a;
	}

	//fonction attaque et info
	void Zombie::AttaqueZombie(Zombie *cible)
	{
		cible->setPv(cible->getPv() - getAtk());
	}
	void Zombie::ShowInfo()
	{
		cout<<"mon nom est "<< getNom()<<endl;
		cout<<"j'ai "<<getPv()<<" points de vie"<<endl;
		cout<<"ma valeur d'attaque est : "<<getAtk()<<endl<<endl;
	}
