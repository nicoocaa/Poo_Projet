#include <iostream>
#ifndef JEUX
#define JEUX

using namespace std;


class MBuf : public std::stringbuf {
public:
	int sync() {
		fputs(str().c_str(), stdout);
		str("");
		return 0;

	}
};

class Personnage {

private:
	string vide;
public:

	Personnage();
	~Personnage();

	virtual string get_name() const = 0;
	virtual int get_vie() const = 0;
	virtual int get_attaque1() const = 0;
	virtual int get_attaque2() const = 0;
	virtual int get_attaque3() const = 0;
	virtual int get_energie() const = 0;
	virtual int get_defense1() const = 0;
	virtual int get_defense2() const = 0;
	virtual int get_defense3() const = 0;
<<<<<<< HEAD
	virtual bool tour(bool tour);
	virtual int degat_recu() const = 0;
=======
	void energie(int energie);
	void pv(int pv);

>>>>>>> b8e5594083cdf5d1e2b12d1db0d97dd5afe4651d

};

class Vilain :public Personnage
{
private:
	string name;
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

	void set_name(string name);
	void set_vie(int pts_vie);
	void set_attaque1(int attaque1);
	void set_attaque2(int attaque2);
	void set_attaque3(int attaque3);
	void set_energie(int pts_energie);
	void set_defense1(int defense1);
	void set_defense2(int defense2);
	void set_defense3(int defense3);

	string get_name() const;
	int get_vie() const;
	int get_attaque1() const;
	int get_attaque2() const;
	int get_attaque3() const;
	int get_energie() const;
	int get_defense1() const;
	int get_defense2() const;
	int get_defense3() const;
	int degat_recu(int att, int eng) const;
};

class Hero :public Personnage
{

private:
	string name;
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

	void set_name(string name);
	void set_vie(int pts_vie);
	void set_attaque1(int attaque1);
	void set_attaque2(int attaque2);
	void set_attaque3(int attaque3);
	void set_energie(int pts_energie);
	void set_defense1(int defense1);
	void set_defense2(int defense2);
	void set_defense3(int defense3);

	string get_name() const;
	int get_vie() const;
	int get_attaque1() const;
	int get_attaque2() const;
	int get_attaque3() const;
	int get_energie() const;
	int get_defense1() const;
	int get_defense2() const;
	int get_defense3() const;
	int degat_recu(int att, int eng) const;
};

#endif