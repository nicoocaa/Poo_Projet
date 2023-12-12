#ifndef JEUX
#define JEUX
#include <iostream>
#include <sstream>
#include <cstdlib>
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
	string pseudo;
	int pts_energie;


public:

	Personnage();
	~Personnage();

	virtual string get_name() const = 0;
	virtual int get_vie() const = 0;
	virtual int get_energie() const = 0;
	virtual void set_name(string name) =0;
	virtual void set_vie(int pts_vie) =0;
	virtual string get_pseudo() const=0;
	virtual void set_energie(int pts_energie)=0;
	virtual void set_pseudo(string pseudo) =0;
	virtual void energie()const =0;
	virtual void pv() const =0;

};

class Vilain :public Personnage
{
private:
	string name;
	int pts_vie;
	string pseudo;
	int pts_energie;

public:
	Vilain();
	~Vilain();

	void set_pseudo(string pseudo);
	void set_name(string name);
	void set_vie(int pts_vie);

	void set_energie(int pts_energie);


	string get_name() const;
	int get_vie() const;
	string get_pseudo() const;
	int get_energie() const;
	void energie() const;
	void pv() const;

};

class Hero :public Personnage
{

private:

	string name;
	int pts_vie;
	string pseudo;
	int pts_energie;

public:

	Hero();
	~Hero(); 

	void set_pseudo(string pseudo);
	void set_name(string name);
	void set_vie(int pts_vie);

	void set_energie(int pts_energie);


	string get_name() const;
	int get_vie() const;

	string get_pseudo() const;
	int get_energie() const;
	void energie() const;
	void pv() const;
	void revive();

};

#endif
