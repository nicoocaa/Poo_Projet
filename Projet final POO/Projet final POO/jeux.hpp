#ifndef JEUX
#define JEUX
#include <iostream>
#include <sstream>

#include <Windows.h>


using namespace std;

class MBuf : public std::stringbuf {
public:
	int sync() {
		fputs(str().c_str(), stdout);
		str("");
		return 0;
	}
};


class Personnage 
{

private:
	string name;
	int pts_vie;

	int pts_energie;


public:

	Personnage();
	~Personnage();

	virtual string get_name() const = 0;
	virtual int get_vie() const = 0;
	virtual int get_energie() const = 0;

	virtual void energie()const =0;
	virtual void pv() const =0;



};

class Vilain :public Personnage
{
private:
	string name;
	int pts_vie;

	int pts_energie;

public:
	Vilain();
	~Vilain();

	void set_name(string name);
	void set_vie(int pts_vie);

	void set_energie(int pts_energie);


	string get_name() const;
	int get_vie() const;

	int get_energie() const;
	void energie() const;
	void pv() const;

};

class Hero :public Personnage
{

private:
<<<<<<< HEAD
	string name;
	int pts_vie;

	int pts_energie;
	
=======
	void revive();
>>>>>>> 2aa9e5b7cb7571d2c3d552d50fa9aabb03e3fbf1
public:

	Hero();
	~Hero(); 

	void set_name(string name);
	void set_vie(int pts_vie);

	void set_energie(int pts_energie);


	string get_name() const;
	int get_vie() const;

<<<<<<< HEAD
	int get_energie() const;
	void energie() const;
	void pv() const;
=======
>>>>>>> 2aa9e5b7cb7571d2c3d552d50fa9aabb03e3fbf1
};

#endif