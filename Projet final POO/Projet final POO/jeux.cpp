#include "jeux.hpp"

Personnage::Personnage() : a_vie(0), a_attaque(0), a_defense(0), a_energie(0)
{
}

Personnage::~Personnage()
{
}

Vilain::Vilain() : Personnage(), pts_vie(0), pts_attaque(0), pts_energie(0), pts_defense(0)
{
}

Vilain::~Vilain()
{
}

void Vilain::set_name(std::string name)
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

void Vilain::set_attaque(int pts_attaque)
{
	if (this != nullptr) {
		this->pts_attaque = pts_attaque;
	}
}

void Vilain::set_energie(int pts_energie)
{
	if (this != nullptr) {
		this->pts_energie = pts_energie;
	}
}

void Vilain::set_defense(int pts_defense)
{
	if (this != nullptr) {
		this->pts_defense = pts_defense;
	}
}

std::string Vilain::get_name() const
{
	return std::string(name);
}

int Vilain::get_vie() const
{
	return pts_vie;
}

int Vilain::get_attaque() const
{
	return pts_attaque;
}

int Vilain::get_energie() const
{
	return pts_energie;
}

int Vilain::get_defense() const
{
	return pts_defense;
}

Hero::Hero() : Personnage(), pts_vie(0), pts_attaque(0), pts_energie(0), pts_defense(0)
{
}

Hero::~Hero()
{
}

void Hero::set_name(std::string name)
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

void Hero::set_attaque(int pts_attaque)
{
	if (this != nullptr) {
		this->pts_attaque = pts_attaque;
	}
}

void Hero::set_energie(int pts_energie)
{
	if (this != nullptr) {
		this->pts_energie = pts_energie;
	}
}

void Hero::set_defense(int pts_defense)
{
	if (this != nullptr) {
		this->pts_defense = pts_defense;
	}
}

std::string Hero::get_name() const
{
	return std::string(name);
}

int Hero::get_vie() const
{
	return pts_vie;
}

int Hero::get_attaque() const
{
	return pts_attaque;
}

int Hero::get_energie() const
{
	return pts_energie;
}

int Hero::get_defense() const
{
	return pts_energie;
}
