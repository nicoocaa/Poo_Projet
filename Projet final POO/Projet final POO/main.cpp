#include "jeux.hpp"
#include <sstream>
#include <iostream>

#include <Windows.h>

bool Tour(bool tour)
{
    if (tour = true)
    {
        cout << "Tour du Joueur 1." << endl;
    }
    else if (tour = false)
    {
        cout << "Tour du joueur 2." << endl;
    }
    if (tour = true)
    {
        tour = false;
    }
    else
    {
        tour = true;
    }
    return tour;
}

void read(const Personnage& Personnage)
{

<<<<<<< HEAD
    cout << "Voici le nom du personnage : " << Personnage.get_name() << endl;
    cout << "Voici ces points de vie : " << Personnage.get_vie() << endl;
    cout << "Voici son energie : " << Personnage.get_energie() << endl;
=======
    cout << "Voici le nom du personnage : " << Personnage.get_name() << endl ;
    cout << "Voici ces points de vie : " << Personnage.get_vie() << endl ;
    cout << "Voici son energie : " << Personnage.get_energie() << endl ;
>>>>>>> b4550078242912c7ef9a26f4a038a6ccc8ba4126
    cout << "" << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IONBF, 0);
    MBuf buf;

   // Personnage perso;

    int numero;
<<<<<<< HEAD
    Personnage *p = nullptr;
    bool tour = true;
    
    Tour(tour);
    tour == Tour(tour);

=======
    int numero2;
    cout << "Choix de votre vilain :" << endl;
>>>>>>> 26c8c11b236d8fa89651b762203c3449f5ec478c
    cout << "1 pour Shrek" << endl;
    cout << "" << endl;
    cin >> numero;
    cout << "" << endl;

    if (numero == 1)
    {
<<<<<<< HEAD
        Vilain a_var = Vilain();
        a_var.set_name("Shrek");
        a_var.set_vie(100);
        // a_var.set_attaque(8);
        a_var.set_energie(50);
        //a_var.set_defense(10);
        system("cls");
=======
<<<<<<< HEAD
        p = new Vilain ;
        read(a_var) ;
=======
>>>>>>> b4550078242912c7ef9a26f4a038a6ccc8ba4126
        read(a_var);

        cout.rdbuf(&buf);

<<<<<<< HEAD
        cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⠀   ⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣄⣀⣀⡀⠀⠀⠀" << endl;
        cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀         ⠀⠀⠀⠀⣠⣾⠟⠋⠙⠋⠉⠙⢷⣦⡀⠀ ⠀" << endl;
        cout << u8"⠀⠀                    ⠀⣤⣶⣶⣄⠀⠀⠀⢠⣾⣿⣁⡀⠀⠀⠀⠀⠀⠀⢑⣿⡆ ⠀⠀⠀⢠⣾⣿⡄⠀⠀" << endl;
        cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀     ⠀⢿⣿⣿⣾⣦⡀⢠⣾⡿⣛⣛⡻⢷⣄⠀⠀⣴⣾⣿⠛⠻ ⠦⣄⣴⣿⣿⡿⠃⠀⠀" << endl;
        cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀     ⠀⠈⠉⠉⠻⢿⣿⣿⣿⣿⣿⢿⣿⣿⣧⢼⣿⣿⣿⠿⣿ ⣇⢸⡟⠉⠁⠀⠀⠀" << endl;
        cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀    ⠀⠀ ⠀⠀⠀⣿⣿⠿⢿⣾⣿⣤⠿⠋⠀⠈⠻⢿⣿⣧⣿ ⠟⣬⡇⠀⠀⠀⠀⠀" << endl;
        cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀        ⠀⠀⣼⣿⠃⠀⠀⢀⣴⣖⣶⠀⠀⠀⠀⠀⢀⡈⠀ ⠀⢘⣾⠀⠀⠀⠀" << endl;
        cout << u8"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀     ⠀⠀⠀⠀⠀⣿⣿⣶⣶⣶⠿⠿⠿⠿⠷⠶⠶⠶⠛⠋⠻⣦ ⣤⣀⡼⠀⠀⠀⠀" << endl;
        cout << u8"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⡇⠀⣿⠻⢷⣤⣀⠀⠀⠀⠈⠀⠀⠀⣀⣈ ⡻⢿⣇⠀⠀⠀⠀" << endl;
        cout << u8"  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⡿⠛⡏⠁⠂⠘⠭⢿⣒⣒⡒⠒⠒⠊⠉⠁ ⠀⠀⣿⠤⠀⠀⠀⠀" << endl;
        cout << u8"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⠟⠁⡄⠣⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⢀⡌⠙⠲⣤⣀⠠⣀⠀ ⠀⠀⠀⠀" << endl;
        cout << u8"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣏⠀⠀⢿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⡀⠋⠀⠀⠀⠀⠈⠙⠚⠓ ⠶⢤⣀⠀⠀⠀⠀⠀⠀" << endl;
        cout << u8"    ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⣿⣿⣿⣿⣶⣀⡴⠛⢷⣄⣠⣄⡀⠀⠀⠀⠀⠀⠀⠀⠐ ⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠈⠉⠳⢦⡀⠀⠀" << endl;
        cout << u8"   ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣤⠴⠾⣿⣿⣿⣿⣿⠟⠛⠿⣿⣦⣄⠙⢻⣿⣷⣦⡤⠤⠶⠒⠛⠁⣠ ⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠹⣆⠀⠀⠀⠀⠀⠀" << endl;
        cout << u8"   ⠀⠀⠀⠀⠀⠀⠀⠀⢠⣴⡾⠏⠁⠀⠀⠀⠀⠰⠿⠟⠋⠀⠀⠀⠀⠈⠉⠛⠙⠋⠉⠉⠀⠀⠀⠀⠀⣀⡴⠃ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠈⢧⡀⠀⠀⠀⠀" << endl;
        cout << u8"    ⠀⠀⠀⠀⠀⠀⢀⣴⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠒⠋⠁⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠈⢷⠀⠀⠀⠀" << endl;
        cout << u8"    ⠀⠀⠀⠀⠀⢀⣾⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢉⡁⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡇⠀⠀⠀" << endl;
        cout << u8"    ⠀⠀⠀⠀⢄⣾⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⢸⡁⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⣴⣧ ⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠀⠀⠀" << endl;
        cout << u8"    ⠀⠀⠀⠀⣼⣋⣧⣶⠀⠀⠀⢀⡀⣀⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠃⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⢀⡤⣼⣿ ⣿⣟⣤⡀⠀⠀⠀⠀⠀⠀⠘⣦⠀⠀" << endl;
        cout << u8"   ⠀⠀⠀⠀⣿⡟⡇⣿⣤⣤⣴⣼⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢼⣷⣦⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠠⠏⣴⣿⣿ ⠋⠉⠉⠛⠋⡄⠂⠀⠀⠀⠀⠈⣇⠀" << endl;
        cout << u8"   ⠀⠀⠀⢀⣿⣷⣜⢿⣿⣿⣿⣿⣿⣿⣟⢿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⠾⣿⣿⣷⠀⠀⠀⠀⠀ ⠀⠀⠐⠖⣠⣶⣿⣟⣿⡇ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀" << endl;
        cout << u8"   ⠀⠀⢀⣾⠋⠻⣿⡶⠍⠙⠛⢿⣿⣿⣿⣮⡙⠿⣿⣶⣤⣄⣀⣤⣤⣤⣤⡀⢀⣈⣁⣰⣿⣿⣿⣿⣿⣿⣿⣿ ⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇" << endl;
        cout << u8"  ⠀⠀⣾⠇⠀⠀⠘⢷⡇⠀⠀⠀⢿⣿⣿⣿⣿⣶⣼⣿⣿⣟⣻⣿⣿⣿⣿⡿⠟⠛⠁⠀⠉⠻⢿⣿⣶⣤⣴⣶ ⣶⣤⣶⣿⣿⣿⣿⣿⣿⡆ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠇" << endl;
        cout << u8"  ⠀⢸⣿⠀⠀⠀⢠⡞⠀⠀⠀⠀⢾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣋⣠⣀⠀⠀⠀⠀⠀⠀⠀⢉⣛⢻⢿ ⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇ ⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠀" << endl;
        cout << u8"  ⠀⢸⡏⠀⠀⠀⣼⠁⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⠿⡿⠛⠉⠉⠉⠁⠀⢀⠀⠀⠀⠀⠀⠉⠰⠿ ⠿⠛⠻⠟⠉⠁⢩⢹⣿⣿ ⣄⠀⠸⣆⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀" << endl;
        cout << u8"  ⠀⣿⢿⠀⠀⣰⠇⠀⠀⠀⠀⠀⣿⡟⢻⣿⣿⣿⣿⣿⡟⠻⢶⣤⠀⠀⠀⠀⠀⠀⠀⢸⣄⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⠀⣸⣿⢿⣿ ⣿⣦⠀⢹⣆⠀⠀⠀⠀⠀⠀⠀⡇⠀" << endl;
        cout << u8"  ⢀⡟⠺⠀⢐⡿⠀⠀⠀⠀⢀⣼⣿⠁⠀⢻⣿⣿⣿⣿⣿⣷⣤⣿⣤⣤⣤⣤⣶⡄⠀⠀⣿⣇⣤⣤⣀⣀⡀⠀ ⠀⠀⠀⠀⠈⢿⣷⣿⡾⠁ ⢿⣿⣷⣿⣿⡷⠀⠀⠀⠀⠀⠀⡇⠀" << endl;
        cout << u8"  ⢸⡇⠀⠘⣿⡁⠀⠀⢀⣰⣿⣿⠃⠀⠀⠀⢻⣿⣽⠋⠛⢯⢿⣿⠛⠛⠋⠉⠙⠛⠲⣄⠉⠉⠁⠈⠉⠙⠛⠷ ⣦⣤⣤⣌⠀⠀⢸⡟⠁⠀ ⠀⠻⣿⣿⣿⣍⠀⠀⠀⠀⠀⠀⢧⠀" << endl;
        cout << u8"  ⢸⠁⠀⠀⢹⣷⣿⣿⣿⣿⣿⠋⠀⠀⠀⠀⢸⣿⢢⠀⠂⠀⣭⣿⡀⠀⠀⠀⠀⠀⠀⢸⡉⠀⠀⠀⠀⠀⠀⠀ ⠉⠀⠀⠀⠀⠀⡿⠀⠀⠀ ⠀⠀⢹⣿⡿⠉⠀⠀⠀⠀⠀⠀⡾⠀" << endl;
        cout << u8"  ⠀⠀⠀⠀⠀⠋⣿⣿⣿⡟⠁⠀⠀⠀⠀⠀⣼⣏⠈⠁⢰⠀⢨⣿⣧⣀⡀⣠⠀⠀⠀⣸⡁⠀⠀⠀⠀⠀⠀⠀ ⠀⠀⠀⠀⠀⢠⡇⠀⠀⠀ ⠀⠀⣸⡍⠁⠀⠀⠀⠀⠀⠀⣠⣷⠀" << endl;
        cout << u8"  ⠀⠀⠀⠀⠀⠀⠙⢿⣿⡇⠀⠀⠀⠀⠀⢠⣿⠟⠇⠀⠈⠑⢦⣿⠿⠿⠿⠿⠶⢀⢀⣸⠿⣶⣦⣠⡖⠀⠀⠀ ⠀⠀⠀⠀⢀⣿⠀⠀⠀⠀ ⠀⠀⡿⠀⠀⠀⠀⠀⠀⠀⠀⠘⢻⡆" << endl;
        cout << u8"  ⠀⠀⠀⠀⠀⠀⠀⠀⣼⡇⠀⠀⠀⠀⠀⣸⡗⠀⠀⠀⠀⠀⠀⠙⠷⡄⣀⠀⠀⠻⠟⠃⠀⠀⠀⠀⠤⠀⠀⠀ ⠀⠀⠀⠀⣾⡟⠀⠀⠀⠀ ⠀⢰⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇" << endl;
        cout << u8"  ⠀⠀⠀⠀⠀⠀⠀⠀⠹⠇⠀⠀⠀⠀⠀⣸⣿⠠⢰⣶⠄⠀⠀⠀⢀⣀⠀⢠⠀⠀⢠⡆⠀⠀⠀⠀⠀⠀⠀⠀ ⠀⢀⣀⣙⣿⠁⠀⠀⠀⠀ ⠀⣸⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⠇ " << endl;
        cout << "" << endl;
=======
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

>>>>>>> 26c8c11b236d8fa89651b762203c3449f5ec478c
>>>>>>> b4550078242912c7ef9a26f4a038a6ccc8ba4126
    }

    cout << "Choix de votre hero :" << endl;
    cout << "1 pour melody" << endl;
    cout << "" << endl;
    cin >> numero2;
    cout << "" << endl;

    if (numero == 1)
    {
<<<<<<< HEAD
        Hero b_var = Hero();
        b_var.set_name("Melody");
        b_var.set_vie(100);
        // b_var.set_attaque(8);
        b_var.set_energie(50);
        //b_var.set_defense(10);
=======
<<<<<<< HEAD
        p = new Hero ;
        read(b_var) ;
=======
>>>>>>> b4550078242912c7ef9a26f4a038a6ccc8ba4126

        system("cls");
        read(b_var);
>>>>>>> 26c8c11b236d8fa89651b762203c3449f5ec478c
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

    Tour(tour);
    tour == Tour(tour);

<<<<<<< HEAD

    game1(a_var, b_var, Vilain.get_vie, Vilain.get_energie);



}

void game1(Vilain & J1, Hero & J2, int vie, int energie)
{

    while (J1.get_vie() != 0 && J2.get_vie() != 0)
=======
    while (vie != 0)
>>>>>>> b4550078242912c7ef9a26f4a038a6ccc8ba4126
    {

        SetConsoleOutputCP(CP_UTF8);
        setvbuf(stdout, nullptr, _IONBF, 0);
        MBuf buf;
        std::cout.rdbuf(&buf);

        cout << u8"1 : attaquer" << endl;
        //cout << u8"2 : retirer energie" << endl;
        int choix = 0;
        cin >> choix;

        if (choix == 1) {
            cout << "combien de pv ?" << endl;
            cout << "" << endl;
            cout << "Attaque 1 (20)" << endl;
            cout << "Attaque 2 (40)" << endl;
            cout << "Attaque 3 : (60)" << endl;
           // cout << "4 : 80" << endl;
           // cout << "5 : 100" << endl;

            int choix = 0;
            cin >> choix;

            if (choix == 1) {
                vie -= 20;
                J2.set_vie(vie);
            }
            if (choix == 2) {
                vie -= 40;
                J2.set_vie(vie);
            }
            if (choix == 3) {
                vie -= 60;
                J2.set_vie(vie);
            }/*
            if (choix == 4) {
                vie -= 80;
                pv(vie);
            }
            if (choix == 5) {
                vie -= 100;
                pv(vie);
            }*/
        }

        if (choix == 2) {
            cout << "Au Tour du vilain pour se defendre" << endl;
            cout << "Combien d'energie ?" << endl;
            cout << "1 : 20" << endl;
            cout << "2 : 40" << endl;
            cout << "3 : 60" << endl;
           /* cout << "4 : 80" << endl;
            cout << "5 : 100" << endl;*/

            int choix = 0;
            cin >> choix;

            if (choix == 1) {
                energie -= 20;
                J2.energie(energie);
            }
            if (choix == 2) {
                energie -= 30;
                J2.energie(energie);
            }
            if (choix == 3) {
                energie -= 40;
                J2.energie(energie);
            }/*
            if (choix == 4) {
                lv -= 80;
                energie(lv);
            }
            if (choix == 5) {
                lv -= 100;
                energie(lv);
            }*/
        }
    }
}

