#include "jeux.hpp"

Personnage::Personnage()  
{
}

Personnage::~Personnage()
{
}

Vilain::Vilain() : Personnage(), pts_vie(0), pts_energie(0)
{
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

void Vilain::set_energie(int pts_energie)
{
	if (this != nullptr) {
		this->pts_energie = pts_energie;
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



int Vilain::get_energie() const
{
	return pts_energie;
}



Hero::Hero() : Personnage(), pts_vie(0), pts_energie(0)
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

void Hero::set_energie(int pts_energie)
{
	if (this != nullptr) {
		this->pts_energie = pts_energie;
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

int Hero::get_energie() const
{
	return pts_energie;
}

void Hero::pv() const{

	SetConsoleOutputCP(CP_UTF8);
	setvbuf(stdout, nullptr, _IONBF, 0);
	int pv = get_vie();
	int numBlocks = pv / 10;
	int numSpaces = 10 - numBlocks;

	cout << u8"PV: ";
	for (int i = 0; i < numBlocks; ++i) {
		cout << u8"█";
	}
	for (int i = 0; i < numSpaces; ++i) {
		cout << u8"▒";
	}

	cout << " " << pv << "%" << endl;
}

void Vilain::pv() const{

	SetConsoleOutputCP(CP_UTF8);
	setvbuf(stdout, nullptr, _IONBF, 0);
	int pv = get_vie();
	int numBlocks = pv / 10;
	int numSpaces = 10 - numBlocks;

	cout << u8"PV: ";
	for (int i = 0; i < numBlocks; ++i) {
		cout << u8"█";
	}
	for (int i = 0; i < numSpaces; ++i) {
		cout << u8"▒";
	}

	cout << " " << pv << "%" << endl;
}




void Hero::energie() const{
	SetConsoleOutputCP(CP_UTF8);
	int energie = get_energie();
	int numBlocks = energie / 10;
	int numSpaces = 5 - numBlocks;

	cout << u8"Énergie: ";
	for (int i = 0; i < numBlocks; ++i) {
		cout << u8"█";
	}
	for (int i = 0; i < numSpaces; ++i) {
		cout << u8"▒";
	}

	cout << " " << energie << "%" << endl;
}

void Vilain::energie() const {
	SetConsoleOutputCP(CP_UTF8);
	int energie = get_energie();
	int numBlocks = energie / 10;
	int numSpaces = 5 - numBlocks;

	cout << u8"Énergie: ";
	for (int i = 0; i < numBlocks; ++i) {
		cout << u8"█";
	}
	for (int i = 0; i < numSpaces; ++i) {
		cout << u8"▒";
	}

	cout << " " << energie << "%" << endl;
}