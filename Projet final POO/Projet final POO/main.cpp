#include "jeux.hpp"


void read(const Personnage& Personnage)
{
    std::cout << "Voici le nom du personnage : " << Personnage.get_name() << std::endl << "Voici ces points de vie : " << Personnage.get_vie() << std::endl << "Voici son energie : " << Personnage.get_energie() << std::endl << "" << std::endl;
}

int main()
{
    Vilain a_var = Vilain();
    a_var.set_name("Perso 1");
    a_var.set_vie(100);
   // a_var.set_attaque(8);
    a_var.set_energie(50);
    //a_var.set_defense(10);


    Hero b_var = Hero();
    b_var.set_name("Perso 2");
    b_var.set_vie(100);
    // b_var.set_attaque(8);
    b_var.set_energie(50);
    //b_var.set_defense(10);

    read(a_var);
    read(b_var);
}