#include "jeux.hpp"


void read(const Personnage& Personnage)
{

    cout << "Voici le nom du personnage : " << Personnage.get_name() << endl
    cout << "Voici ces points de vie : " << Personnage.get_vie() << endl 
    cout << "Voici son energie : " << Personnage.get_energie() << endl 
    cout << "" << endl;
}

int main()
{
    Vilain a_var = Vilain();
    a_var.set_name("shrek");
    a_var.set_vie(100);
   // a_var.set_attaque(8);
    a_var.set_energie(50);
    //a_var.set_defense(10);


    Hero b_var = Hero();
    b_var.set_name("melody");
    b_var.set_vie(100);
    // b_var.set_attaque(8);
    b_var.set_energie(50);
    //b_var.set_defense(10);

   // Personnage perso;

    int numero;
    
    cout << "1 pour Shrek" << endl;
    cout << "2 pour melody" << endl;
    cout << "" << endl;
    cin >> numero;
    cout << "" << endl;

    if (numero == 1)
    {
        read(a_var);
    }
    else if (numero == 2)
    {
        read(b_var);
    }
    /*
    else if (numero == 3)
    {
        perso.retirer_dargent();
        main();
    }
    else if (numero == 4)
    {
        perso.consultation();
        main();
    }
    else if (numero == 5)
    {
        return 0;
    }
    return 0;
    */
}