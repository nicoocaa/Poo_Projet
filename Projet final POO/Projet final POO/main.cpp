#include <cstdlib>
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


void game1(Personnage& J1, Personnage& J2)
{
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IONBF, 0);
    MBuf buf;
    std::cout.rdbuf(&buf);

    int vie = J2.get_vie();
    int energie = J2.get_energie();
    int degats = 0;
    int bouclier = 0;

    cout << "" << endl;
    cout << J2.get_name() << endl;
    J2.pv();
    J2.energie();
    std::cout << std::endl;
    cout << J1.get_name() << endl;
    J1.pv();
    J1.energie();
    cout << "" << endl;

    cout << "Combien de pv voulez vous attaquer ?" << endl;
    cout << "" << endl;
    cout << "Attaque 1 (20)" << endl;
    cout << "Attaque 2 (40)" << endl;
    cout << "Attaque 3 (60)" << endl;
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
    system("cls");
    cout << "Au Tour de " <<J2.get_name()<<" pour se defendre" << endl;
    cout << "" << endl;
    cout << J2.get_name() << endl;
    J2.pv();
    J2.energie();
    std::cout << std::endl;
    cout << J1.get_name() << endl;
    J1.pv();
    J1.energie();
    cout << "" << endl;
    cout << "Combien d'energie voulez vous utiliser ?" << endl;
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

    cout << "" << endl;
    cout << J2.get_name() << endl;
    J2.pv();
    J2.energie();
    std::cout << std::endl;
    cout << J1.get_name() << endl;
    J1.pv();
    J1.energie();
    cout << "" << endl;
    cout << J2.get_name() <<" a subit " << degats - bouclier << " de degats, il lui reste " << J2.get_vie() << " points de vie." << endl;
    Sleep(4000);
    system("cls");
      
}


void Tour(bool tour, bool gameover, Vilain a_var,Hero b_var)
{
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IONBF, 0);
    MBuf buf;
    cout.rdbuf(&buf);

    while (gameover ==false) {
        if (tour==true) {
            if (a_var.get_vie() <= 0 || b_var.get_vie() <= 0)
            {
                gameover = true;
                Tour(tour, gameover, a_var, b_var);
            }
            else {
                std::cout << u8"Tour du Vilain" << std::endl;
                game1(a_var, b_var);
                tour = false;
                Tour(tour, gameover, a_var, b_var);
            }
        }
        else {
            if(a_var.get_vie() <= 0 || b_var.get_vie() <= 0)
            {
                gameover = true;
                Tour(tour, gameover,a_var, b_var);
            }
            else {
                std::cout << u8"Tour du Hero" << std::endl;
                game1(b_var, a_var);
                tour = true;
                Tour(tour, gameover, a_var, b_var);
            }
        }
    }
    if (gameover == true)
    {
        cout << "La partie est terminé.";
    }
}



int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IONBF, 0);
    MBuf buf;

   // Personnage perso    

    int numero;
    int numero2;
    Hero b_var = Hero();
    Vilain a_var = Vilain();
    bool gameover = false;
    bool tour = true;

    cout << "Choix de votre vilain :" << endl;

    cout << "1 pour Shrek" << endl;
    cout << "" << endl;
    cin >> numero;
    cout << "" << endl;

    if (numero == 1)
    {
        a_var.set_name("Shrek");
        a_var.set_vie(100);
        a_var.set_energie(50);

        system("cls");
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
    }

    cout << "Choix de votre hero :" << endl;
    cout << "1 pour melody" << endl;
    cout << "" << endl;
    cin >> numero2;
    cout << "" << endl;

    if (numero2 == 1)
    {
        b_var.set_name("Melody");
        b_var.set_vie(100);
        b_var.set_energie(50);


        system("cls");
        //Hero* p2 = nullptr;

        //p2 = new Hero ;

        read(b_var);
    }
    
    cout.flush();
    Sleep(4000);
    system("cls");
    Tour(tour, gameover, a_var, b_var);
    
    return 0;
}
