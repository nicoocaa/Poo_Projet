#include "jeux.hpp"


void read(const Personnage& Personnage)
{

    std::cout << "Voici le nom du personnage : " << Personnage.get_name() << std::endl
    << "Voici ces points de vie : " << Personnage.get_vie() << std::endl 
    << "Voici son energie : " << Personnage.get_energie() << std::endl 
    << "" << std::endl;
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



    while (vie != 0 && lv != 0)
    {

        SetConsoleOutputCP(CP_UTF8);
        setvbuf(stdout, nullptr, _IONBF, 0);
        MBuf buf;
        std::cout.rdbuf(&buf);

        cout << u8"1 : retirer pv" << endl;
        cout << u8"2 : retirer energie" << endl;
        int choix = 0;
        cin >> choix;

        if (choix == 1) {
            cout << "conbien de pv ?" << endl;
            cout << "1 : 20" << endl;
            cout << "2 : 40" << endl;
            cout << "3 : 60" << endl;
            cout << "4 : 80" << endl;
            cout << "5 : 100" << endl;

            int choix = 0;
            cin >> choix;

            if (choix == 1) {
                vie -= 20;
                pv(vie);
            }
            if (choix == 2) {
                vie -= 40;
                pv(vie);
            }
            if (choix == 3) {
                vie -= 60;
                pv(vie);
            }
            if (choix == 4) {
                vie -= 80;
                pv(vie);
            }
            if (choix == 5) {
                vie -= 100;
                pv(vie);
            }
        }
        if (choix == 2) {
            cout << "conbien d'energie ?" << endl;
            cout << "1 : 20" << endl;
            cout << "2 : 40" << endl;
            cout << "3 : 60" << endl;
            cout << "4 : 80" << endl;
            cout << "5 : 100" << endl;

            int choix = 0;
            cin >> choix;

            if (choix == 1) {
                lv -= 20;
                energie(lv);
            }
            if (choix == 2) {
                lv -= 40;
                energie(lv);
            }
            if (choix == 3) {
                lv -= 60;
                energie(lv);
            }
            if (choix == 4) {
                lv -= 80;
                energie(lv);
            }
            if (choix == 5) {
                lv -= 100;
                energie(lv);
            }
        }


    }
}