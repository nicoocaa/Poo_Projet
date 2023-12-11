#include "jeux.hpp"
#include <sstream>
#include <iostream>

#include <Windows.h>

using namespace std;

void read(const Personnage& Personnage)
{
    cout << "Voici le nom du personnage : " << Personnage.get_name() << endl ;
    cout << "Voici ces points de vie : " << Personnage.get_vie() << endl ;
    cout << "Voici son energie : " << Personnage.get_energie() << endl ;
    cout << "" << endl;
}


void game1(Vilain& J1, Hero& J2)
{
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IONBF, 0);
    MBuf buf;
    std::cout.rdbuf(&buf);

    int vie = J2.get_vie();
    int energie = J2.get_energie();
    int degats = 0;
    int bouclier = 0;

    while (J2.get_vie() != 0 && J1.get_vie() != 0) 
    {
        J2.pv();
        J2.energie();
        J1.pv();
        J1.energie();
        cout << "Vilain : " << J1.get_vie() << " PV    " << J1.get_energie() << " Energie  ||   Hero: " << J2.get_vie() << " PV    " << J2.get_energie() << endl;
        cout << "" << endl;

        cout << "combien de pv ?" << endl;
        cout << "" << endl;
        cout << "Attaque 1 (20)" << endl;
        cout << "Attaque 2 (40)" << endl;
        cout << "Attaque 3 : (60)" << endl;
        cout << "" << endl;

        int choix = 0;
        cin >> choix;
        cout << "" << endl;

        if (choix == 1) {
            vie -= 20;
            degats = 20;

        }
        if (choix == 2) {
            vie -= 40;
            degats = 40;

        }
        if (choix == 3) {
            vie -= 60;
            degats = 60;

        }
        J2.pv();
        cout << "Au Tour du hero pour se defendre" << endl;
        cout << "" << endl;
        cout << "Combien d'energie ?" << endl;
        cout << "1 : 20" << endl;
        cout << "2 : 30" << endl;
        cout << "3 : 40" << endl;
        cout << "" << endl;

        int choix2 = 0;
        cin >> choix2;
        cout << "" << endl;

        if (choix2 == 1) {
            energie -= 20;
            bouclier = 20;
            J2.set_energie(energie);
        }
        if (choix2 == 2) {
            energie -= 30;
            bouclier = 30;
            J2.set_energie(energie);
        }
        if (choix2 == 3) {
            energie -= 40;
            bouclier = 40;
            J2.set_energie(energie);
        }
        J2.set_vie(J2.get_vie() - (degats - bouclier));

        cout << "Le Hero a subit " << degats - bouclier << " de degats, il lui reste " << J2.get_vie() << " points de vie." << endl;

        break;
    }
}

void game2(Hero& J1, Vilain& J2)
{
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IONBF, 0);
    MBuf buf;
    std::cout.rdbuf(&buf);


    int vie = J2.get_vie();
    int energie = J2.get_energie();
    int degats = 0;
    int bouclier = 0;

    while (J2.get_vie() != 0 && J1.get_vie() != 0)
    {
        cout << "" << endl;
        J2.pv();
        J2.energie();
        J1.pv();
        J1.energie();
        cout << "Vilain : " << J2.get_vie() << " PV    " << J2.get_energie() << " Energie  ||   Hero: " << J1.get_vie() << " PV    " << J1.get_energie() << endl;

        cout << "" << endl;

        cout << "combien de pv ?" << endl;
        cout << "" << endl;
        cout << "Attaque 1 (20)" << endl;
        cout << "Attaque 2 (40)" << endl;
        cout << "Attaque 3 : (60)" << endl;

        int choix = 0;
        cin >> choix;

        if (choix == 1) {
            vie -= 20;
            degats = 20;
        }
        if (choix == 2) {
            vie -= 40;
            degats = 40;
        }
        if (choix == 3) {
            vie -= 60;
            degats = 60;
        }

        cout << "Au Tour du vilain pour se defendre" << endl;
        cout << "Combien d'energie ?" << endl;
        cout << "1 : 20" << endl;
        cout << "2 : 30" << endl;
        cout << "3 : 40" << endl;

        int choix2 = 0;
        cin >> choix2;

        if (choix2 == 1) {
            energie -= 20;
            bouclier = 20;
            J2.set_energie(energie);
        }
        if (choix2 == 2) {
            energie -= 30;
            bouclier = 30;
            J2.set_energie(energie);
        }
        if (choix2 == 3) {
            energie -= 40;
            bouclier = 40;
            J2.set_energie(energie);
        }
        J2.set_vie(J2.get_vie() - (degats - bouclier));

        cout << "Le Vilain à subit " << degats - bouclier << " de degats, il lui reste " << J2.get_vie() << " points de vie." << endl;
        break;
    }

}

void Tour(Vilain a_var,Hero b_var)
{
    bool tour = true;
    bool gameover = false;

    while (gameover ==false) {
        std::cout << "" << std::endl;
        if (tour==true) {
            std::cout << "Tour du Joueur 1." << std::endl;
            std::cout << "" << std::endl;
            game1(a_var, b_var);
        }
        else {
            std::cout << "Tour du joueur 2." << std::endl;
            std::cout << "" << std::endl;
            game2(b_var, a_var);
        }

        tour = !tour;  // Changer le tour
    }
}




int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IONBF, 0);
    MBuf buf;

   // Personnage perso;

    int numero;
<<<<<<< HEAD
=======

    Personnage *p = nullptr;
    bool tour = true;
    
    Tour(tour);
    tour == Tour(tour);


>>>>>>> 2aa9e5b7cb7571d2c3d552d50fa9aabb03e3fbf1
    int numero2;
    Hero b_var = Hero();
    Vilain a_var = Vilain();

    bool tour = true;

    cout << "Choix de votre vilain :" << endl;

    cout << "1 pour Shrek" << endl;
    cout << "" << endl;
    cin >> numero;
    cout << "" << endl;

    if (numero == 1)
    {
<<<<<<< HEAD
=======
<<<<<<< HEAD

        p = new Vilain ;
        read(a_var) ;

=======
<<<<<<< HEAD
        Vilain a_var = Vilain();
>>>>>>> 2aa9e5b7cb7571d2c3d552d50fa9aabb03e3fbf1
        a_var.set_name("Shrek");
        a_var.set_vie(100);
        a_var.set_energie(50);

        system("cls");
<<<<<<< HEAD
        //Vilain* p1 = nullptr;

       // p1 = new Vilain ;
=======
=======
<<<<<<< HEAD
        p = new Vilain ;
        read(a_var) ;
=======
>>>>>>> b4550078242912c7ef9a26f4a038a6ccc8ba4126
>>>>>>> ec50ad07099bb734af69cc07e41fa8f981edea14
>>>>>>> 2aa9e5b7cb7571d2c3d552d50fa9aabb03e3fbf1
        read(a_var);


        cout.rdbuf(&buf);

        cout <<u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⠀   ⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣄⣀⣀⡀⠀⠀⠀" << endl;
        cout <<u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀         ⠀⠀⠀⠀⣠⣾⠟⠋⠙⠋⠉⠙⢷⣦⡀⠀ ⠀" << endl;
        cout <<u8"⠀⠀                    ⠀⣤⣶⣶⣄⠀⠀⠀⢠⣾⣿⣁⡀⠀⠀⠀⠀⠀⠀⢑⣿⡆ ⠀⠀⠀⢠⣾⣿⡄⠀⠀" << endl;
        cout <<u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀     ⠀⢿⣿⣿⣾⣦⡀⢠⣾⡿⣛⣛⡻⢷⣄⠀⠀⣴⣾⣿⠛⠻ ⠦⣄⣴⣿⣿⡿⠃⠀⠀" << endl;
        cout <<u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀     ⠀⠈⠉⠉⠻⢿⣿⣿⣿⣿⣿⢿⣿⣿⣧⢼⣿⣿⣿⠿⣿ ⣇⢸⡟⠉⠁⠀⠀⠀" << endl;
        cout <<u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀    ⠀⠀ ⠀⠀⠀⣿⣿⠿⢿⣾⣿⣤⠿⠋⠀⠈⠻⢿⣿⣧⣿ ⠟⣬⡇⠀⠀⠀⠀⠀" << endl;
        cout <<u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀        ⠀⠀⣼⣿⠃⠀⠀⢀⣴⣖⣶⠀⠀⠀⠀⠀⢀⡈⠀ ⠀⢘⣾⠀⠀⠀⠀" << endl;
        cout <<u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀     ⠀⠀⠀⠀⠀⣿⣿⣶⣶⣶⠿⠿⠿⠿⠷⠶⠶⠶⠛⠋⠻⣦ ⣤⣀⡼⠀⠀⠀⠀" << endl;
        cout <<u8"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⡇⠀⣿⠻⢷⣤⣀⠀⠀⠀⠈⠀⠀⠀⣀⣈ ⡻⢿⣇⠀⠀⠀⠀" << endl;
        cout <<u8"  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⡿⠛⡏⠁⠂⠘⠭⢿⣒⣒⡒⠒⠒⠊⠉⠁ ⠀⠀⣿⠤⠀⠀⠀⠀" << endl;
        cout <<u8"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⠟⠁⡄⠣⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⢀⡌⠙⠲⣤⣀⠠⣀⠀ ⠀⠀⠀⠀" << endl;
        cout <<u8"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣏⠀⠀⢿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⡀⠋⠀⠀⠀⠀⠈⠙⠚⠓ ⠶⢤⣀⠀⠀⠀⠀⠀⠀" << endl;
        cout <<u8"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⣿⣿⣿⣿⣶⣀⡴⠛⢷⣄⣠⣄⡀⠀⠀⠀⠀⠀⠀⠀⠐ ⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠈⠉⠳⢦⡀⠀⠀" << endl;
        cout <<u8"   ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣤⠴⠾⣿⣿⣿⣿⣿⠟⠛⠿⣿⣦⣄⠙⢻⣿⣷⣦⡤⠤⠶⠒⠛⠁⣠ ⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠹⣆⠀⠀⠀⠀⠀⠀" << endl;
        cout <<u8"   ⠀⠀⠀⠀⠀⠀⠀⠀⢠⣴⡾⠏⠁⠀⠀⠀⠀⠰⠿⠟⠋⠀⠀⠀⠀⠈⠉⠛⠙⠋⠉⠉⠀⠀⠀⠀⠀⣀⡴⠃ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠈⢧⡀⠀⠀⠀⠀" << endl;
        cout <<u8"    ⠀⠀⠀⠀⠀⠀⢀⣴⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠒⠋⠁⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠈⢷⠀⠀⠀⠀" << endl;
        cout <<u8"    ⠀⠀⠀⠀⠀⢀⣾⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢉⡁⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡇⠀⠀⠀" << endl;
        cout <<u8"    ⠀⠀⠀⠀⢄⣾⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⢸⡁⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⣴⣧ ⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠀⠀⠀" << endl;
        cout <<u8"    ⠀⠀⠀⠀⣼⣋⣧⣶⠀⠀⠀⢀⡀⣀⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠃⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⢀⡤⣼⣿ ⣿⣟⣤⡀⠀⠀⠀⠀⠀⠀⠘⣦⠀⠀" << endl;
        cout <<u8"   ⠀⠀⠀⠀⣿⡟⡇⣿⣤⣤⣴⣼⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢼⣷⣦⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠠⠏⣴⣿⣿ ⠋⠉⠉⠛⠋⡄⠂⠀⠀⠀⠀⠈⣇⠀" << endl;
        cout <<u8"   ⠀⠀⠀⢀⣿⣷⣜⢿⣿⣿⣿⣿⣿⣿⣟⢿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⠾⣿⣿⣷⠀⠀⠀⠀⠀ ⠀⠀⠐⠖⣠⣶⣿⣟⣿⡇ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀" << endl;
        cout <<u8"   ⠀⠀⢀⣾⠋⠻⣿⡶⠍⠙⠛⢿⣿⣿⣿⣮⡙⠿⣿⣶⣤⣄⣀⣤⣤⣤⣤⡀⢀⣈⣁⣰⣿⣿⣿⣿⣿⣿⣿⣿ ⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇" << endl;
        cout <<u8"  ⠀⠀⣾⠇⠀⠀⠘⢷⡇⠀⠀⠀⢿⣿⣿⣿⣿⣶⣼⣿⣿⣟⣻⣿⣿⣿⣿⡿⠟⠛⠁⠀⠉⠻⢿⣿⣶⣤⣴⣶ ⣶⣤⣶⣿⣿⣿⣿⣿⣿⡆ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠇" << endl;
        cout <<u8"  ⠀⢸⣿⠀⠀⠀⢠⡞⠀⠀⠀⠀⢾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣋⣠⣀⠀⠀⠀⠀⠀⠀⠀⢉⣛⢻⢿ ⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇ ⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠀" << endl;
        cout <<u8"  ⠀⢸⡏⠀⠀⠀⣼⠁⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⠿⡿⠛⠉⠉⠉⠁⠀⢀⠀⠀⠀⠀⠀⠉⠰⠿ ⠿⠛⠻⠟⠉⠁⢩⢹⣿⣿ ⣄⠀⠸⣆⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀" << endl;
        cout <<u8"  ⠀⣿⢿⠀⠀⣰⠇⠀⠀⠀⠀⠀⣿⡟⢻⣿⣿⣿⣿⣿⡟⠻⢶⣤⠀⠀⠀⠀⠀⠀⠀⢸⣄⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⣸⣿⢿⣿ ⣿⣦⠀⢹⣆⠀⠀⠀⠀⠀⠀⠀⡇⠀" << endl;
        cout <<u8"  ⢀⡟⠺⠀⢐⡿⠀⠀⠀⠀⢀⣼⣿⠁⠀⢻⣿⣿⣿⣿⣿⣷⣤⣿⣤⣤⣤⣤⣶⡄⠀⠀⣿⣇⣤⣤⣀⣀⡀⠀ ⠀⠀⠀⠀⠈⢿⣷⣿⡾⠁ ⢿⣿⣷⣿⣿⡷⠀⠀⠀⠀⠀⠀⡇⠀" << endl;
        cout <<u8"  ⢸⡇⠀⠘⣿⡁⠀⠀⢀⣰⣿⣿⠃⠀⠀⠀⢻⣿⣽⠋⠛⢯⢿⣿⠛⠛⠋⠉⠙⠛⠲⣄⠉⠉⠁⠈⠉⠙⠛⠷ ⣦⣤⣤⣌⠀⠀⢸⡟⠁⠀ ⠀⠻⣿⣿⣿⣍⠀⠀⠀⠀⠀⠀⢧⠀" << endl;
        cout <<u8"  ⢸⠁⠀⠀⢹⣷⣿⣿⣿⣿⣿⠋⠀⠀⠀⠀⢸⣿⢢⠀⠂⠀⣭⣿⡀⠀⠀⠀⠀⠀⠀⢸⡉⠀⠀⠀⠀⠀⠀⠀ ⠉⠀⠀⠀⠀⠀⡿⠀⠀⠀ ⠀⠀⢹⣿⡿⠉⠀⠀⠀⠀⠀⠀⡾⠀" << endl;
        cout <<u8"  ⠀⠀⠀⠀⠀⠋⣿⣿⣿⡟⠁⠀⠀⠀⠀⠀⣼⣏⠈⠁⢰⠀⢨⣿⣧⣀⡀⣠⠀⠀⠀⣸⡁⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⢠⡇⠀⠀⠀ ⠀⠀⣸⡍⠁⠀⠀⠀⠀⠀⠀⣠⣷⠀" << endl;
        cout <<u8"  ⠀⠀⠀⠀⠀⠀⠙⢿⣿⡇⠀⠀⠀⠀⠀⢠⣿⠟⠇⠀⠈⠑⢦⣿⠿⠿⠿⠿⠶⢀⢀⣸⠿⣶⣦⣠⡖⠀⠀⠀ ⠀⠀⠀⠀⢀⣿⠀⠀⠀⠀ ⠀⠀⡿⠀⠀⠀⠀⠀⠀⠀⠀⠘⢻⡆" << endl;
        cout <<u8"  ⠀⠀⠀⠀⠀⠀⠀⠀⣼⡇⠀⠀⠀⠀⠀⣸⡗⠀⠀⠀⠀⠀⠀⠙⠷⡄⣀⠀⠀⠻⠟⠃⠀⠀⠀⠀⠤⠀⠀⠀ ⠀⠀⠀⠀⣾⡟⠀⠀⠀⠀ ⠀⢰⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇" << endl;
        cout <<u8"  ⠀⠀⠀⠀⠀⠀⠀⠀⠹⠇⠀⠀⠀⠀⠀⣸⣿⠠⢰⣶⠄⠀⠀⠀⢀⣀⠀⢠⠀⠀⢠⡆⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⢀⣀⣙⣿⠁⠀⠀⠀⠀ ⠀⣸⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⠇ " << endl;

<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
>>>>>>> 26c8c11b236d8fa89651b762203c3449f5ec478c
>>>>>>> b4550078242912c7ef9a26f4a038a6ccc8ba4126
>>>>>>> ec50ad07099bb734af69cc07e41fa8f981edea14
>>>>>>> 2aa9e5b7cb7571d2c3d552d50fa9aabb03e3fbf1
    }

    cout << "Choix de votre hero :" << endl;
    cout << "1 pour melody" << endl;
    cout << "" << endl;
    cin >> numero2;
    cout << "" << endl;

    if (numero2 == 1)
    {
<<<<<<< HEAD

       
=======
<<<<<<< HEAD
        p = new Hero ;
        read(b_var) ;
=======
<<<<<<< HEAD
        Hero b_var = Hero();
>>>>>>> 2aa9e5b7cb7571d2c3d552d50fa9aabb03e3fbf1
        b_var.set_name("Melody");
        b_var.set_vie(100);
        b_var.set_energie(50);
<<<<<<< HEAD

        system("cls");
        //Hero* p2 = nullptr;

        //p2 = new Hero ;

        read(b_var) ;
=======
        //b_var.set_defense(10);
=======
<<<<<<< HEAD
        p = new Hero ;
        read(b_var) ;
=======
>>>>>>> b4550078242912c7ef9a26f4a038a6ccc8ba4126
>>>>>>> ec50ad07099bb734af69cc07e41fa8f981edea14

        system("cls");
        read(b_var);
>>>>>>> 2aa9e5b7cb7571d2c3d552d50fa9aabb03e3fbf1
    }

    Tour(a_var, b_var);
  
}
