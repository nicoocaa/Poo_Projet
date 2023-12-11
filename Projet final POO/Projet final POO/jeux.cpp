#include "jeux.hpp"

Personnage::Personnage()  
{
}

Personnage::~Personnage()
{
}

Vilain::Vilain() : Personnage(), pts_vie(0), attaque1(0), attaque2(0), attaque3(0), pts_energie(0), defense1(0), defense2(0), defense3(0)
{
}

void Personnage::energie(int energie)
{
<<<<<<< HEAD
	if (tour = true)
	{
		tour = false;
	} else
	{
		tour = true;
	}
=======
}

void Personnage::pv(int pv)
{
>>>>>>> b4550078242912c7ef9a26f4a038a6ccc8ba4126
}

Vilain::~Vilain()
{
}

void Vilain::set_name(string name)
{
	if (this != nullptr) {
		this->name = name;
	}
}

void Vilain::set_vie(int pts_vie)
{
	if (this != nullptr) {
		this->pts_vie = pts_vie;
	}
}

void Vilain::set_attaque1(int attaque1)
{
	if (this != nullptr) {
		this->attaque1 = attaque1;
	}
}

void Vilain::set_attaque2(int attaque2)
{
	if (this != nullptr) {
		this->attaque2 = attaque2;
	}
}

void Vilain::set_attaque3(int attaque3)
{
	if (this != nullptr) {
		this->attaque3 = attaque3;
	}
}

void Vilain::set_energie(int pts_energie)
{
	if (this != nullptr) {
		this->pts_energie = pts_energie;
	}
}

void Vilain::set_defense2(int defense2)
{
	if (this != nullptr) {
		this->defense2 = defense2;
	}
}

void Vilain::set_defense1(int defense1)
{
	if (this != nullptr) {
		this->defense1 = defense1;
	}
}

void Vilain::set_defense3(int defense3)
{
	if (this != nullptr) {
		this->defense3 = defense3;
	}
}

string Vilain::get_name() const
{
	return string(name);
}

int Vilain::get_vie() const
{
	return pts_vie;
}

int Vilain::get_attaque1() const
{
	return attaque1;
}

int Vilain::get_attaque2() const
{
	return attaque2;
}

int Vilain::get_attaque3() const
{
	return attaque3;
}

int Vilain::get_energie() const
{
	return pts_energie;
}

int Vilain::get_defense1() const
{
	return defense1;
}

int Vilain::get_defense2() const
{
	return defense2;
}

int Vilain::get_defense3() const
{
	return defense3;
}

int Vilain::degat_recu(int att, int eng) const
{
	int degat;
	degat = att - eng;
	return degat;
}

void Hero::revive()
{
	int Onlyone = 0;
	get_vie();
	while (Onlyone == 0)
	{
		if (vie == 0)
		{
			vie += 100
		}
	}
	Onlyone += 1;
}

Hero::Hero() : Personnage(), pts_vie(0), attaque1(0), attaque2(0), attaque3(0), pts_energie(0), defense1(0), defense2(0), defense3(0)
{
}

Hero::~Hero()
{
}

void Hero::set_name(string name)
{
	if (this != nullptr) {
		this->name = name;
	}
}

void Hero::set_vie(int pts_vie)
{
	if (this != nullptr) {
		this->pts_vie = pts_vie;
	}
}


void Hero::set_attaque1(int pts_attaque)
{
	if (this != nullptr) {
		this->attaque1 = attaque1;
	}
}

void Hero::set_attaque2(int pts_attaque)
{
	if (this != nullptr) {
		this->attaque2 = attaque2;
	}
}

void Hero::set_attaque3(int pts_attaque)
{
	if (this != nullptr) {
		this->attaque3 = attaque3;
	}
}


void Hero::set_energie(int pts_energie)
{
	if (this != nullptr) {
		this->pts_energie = pts_energie;
	}
}

void Hero::set_defense2(int defense2)
{
	if (this != nullptr) {
		this->defense2 = defense2;
	}
}

void Hero::set_defense1(int defense1)
{
	if (this != nullptr) {
		this->defense1 = defense1;
	}
}

void Hero::set_defense3(int defense3)
{
	if (this != nullptr) {
		this->defense3 = defense3;
	}
}


string Hero::get_name() const
{
	return string(name);
}

int Hero::get_vie() const
{
	return pts_vie;
}

int Hero::get_attaque1() const
{
	return attaque1;
}

int Hero::get_attaque2() const
{
	return attaque2;
}

int Hero::get_attaque3() const
{
	return attaque3;
}

int Hero::get_energie() const
{
	return pts_energie;
}

int Hero::get_defense1() const
{
	return defense1;
}

int Hero::get_defense2() const
{
	return defense2;
}

int Hero::get_defense3() const
{
	return defense3;
}


int Hero::degat_recu(int att, int eng) const
{
	int degat;
	degat = att - eng;
	return degat;
}



void Personnage::pv(int pv) {

	SetConsoleOutputCP(CP_UTF8);
	setvbuf(stdout, nullptr, _IONBF, 0);
	int numBlocks = pv / 10;
	int numSpaces = 10 - numBlocks;

	cout << u8"Énergie: ";
	for (int i = 0; i < numBlocks; ++i) {
		cout << u8"█";
	}
	for (int i = 0; i < numSpaces; ++i) {
		cout << u8"▒";
	}

	cout << " " << pv << "%" << endl;
}


void energie(int energie) {
	SetConsoleOutputCP(CP_UTF8);

	int numBlocks = energie / 10;
	int numSpaces = 10 - numBlocks;

	cout << u8"Énergie: ";
	for (int i = 0; i < numBlocks; ++i) {
		cout << u8"█";
	}
	for (int i = 0; i < numSpaces; ++i) {
		cout << u8"▒";
	}

	cout << " " << energie << "%" << endl;
}
