#include <iostream>
#ifndef JEUX
#define JEUX

using namespace std;

class Personnage {

private:
	std::string vide;
public:

	Personnage();
	~Personnage();

	virtual std::string get_name() const = 0;
	virtual int get_vie() const = 0;
	virtual int get_attaque1() const=0;
	virtual int get_attaque2() const = 0;
	virtual int get_attaque3() const = 0;
	virtual int get_energie() const=0;
	virtual int get_defense1() const=0;
	virtual int get_defense2() const = 0;
	virtual int get_defense3() const = 0;


};

class Vilain :public Personnage
{
private:
	std::string name;
	int pts_vie;
	int attaque1;
	int attaque2;
	int attaque3;
	int pts_energie;
	int defense1;
	int defense2;
	int defense3;
public:
	Vilain();
	~Vilain();

	void set_name(std::string name);
	void set_vie(int pts_vie);
	void set_attaque1(int attaque1);
	void set_attaque2(int attaque2);
	void set_attaque3(int attaque3);
	void set_energie(int pts_energie);
	void set_defense1(int defense1);
	void set_defense2(int defense2);
	void set_defense3(int defense3);

	std::string get_name() const;
	int get_vie() const;
	int get_attaque1() const;
	int get_attaque2() const;
	int get_attaque3() const;
	int get_energie() const;
	int get_defense1() const;
	int get_defense2() const;
	int get_defense3() const;
};

class Hero :public Personnage
{

private:
	std::string name;
	int pts_vie;
	int attaque1;
	int attaque2;
	int attaque3;
	int pts_energie;
	int defense1;
	int defense2;
	int defense3;
public:

	Hero();
	~Hero(); 

	void set_name(std::string name);
	void set_vie(int pts_vie);
	void set_attaque1(int attaque1);
	void set_attaque2(int attaque2);
	void set_attaque3(int attaque3);
	void set_energie(int pts_energie);
	void set_defense1(int defense1);
	void set_defense2(int defense2);
	void set_defense3(int defense3);

	std::string get_name() const;
	int get_vie() const;
	int get_attaque1() const;
	int get_attaque2() const;
	int get_attaque3() const;
	int get_energie() const;
	int get_defense1() const;
	int get_defense2() const;
	int get_defense3() const;
};

#endif