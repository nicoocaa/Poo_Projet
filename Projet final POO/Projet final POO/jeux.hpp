#include <iostream>
#ifndef JEUX
#define JEUX

class Personnage {

private:
	std::string a_name;
	int a_vie;
	int a_attaque;
	int a_energie;
	int a_defense;

public:

	Personnage();
	~Personnage();

	virtual std::string get_name() const = 0;
	virtual int get_vie() const = 0;
	virtual int get_attaque() const=0;
	virtual int get_energie() const=0;
	virtual int get_defense() const=0;


};

class Vilain :public Personnage
{
private:
	std::string name;
	int pts_vie;
	int pts_attaque;
	int pts_energie;
	int pts_defense;
public:
	Vilain();
	~Vilain();

	void set_name(std::string name);
	void set_vie(int pts_vie);
	void set_attaque(int pts_attaque);
	void set_energie(int pts_energie);
	void set_defense(int pts_defense);

	std::string get_name() const;
	int get_vie() const;
	int get_attaque() const;
	int get_energie() const;
	int get_defense() const;
};

class Hero :public Personnage
{

private:
	std::string name;
	int pts_vie;
	int pts_attaque;
	int pts_energie;
	int pts_defense;
public:

	Hero();
	~Hero();

	void set_name(std::string name);
	void set_vie(int pts_vie);
	void set_attaque(int pts_attaque);
	void set_energie(int pts_energie);
	void set_defense(int pts_defense);

	std::string get_name() const;
	int get_vie() const;
	int get_attaque() const;
	int get_energie() const;
	int get_defense() const;
};

#endif