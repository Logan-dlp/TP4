#include <iostream>
#include <string>
#include <array>
#include "mylib.hpp"

int abs(int x)
{
    return x < 0 ? -x : x;
}

void message()
{
    std::string nom;
    std::string prenom;
    int age;
    std::cout << "Quel est votre nom ?" << std::endl;
    std::cin >> nom;
    std::cout << "Quel est votre prénom ?" << std::endl;
    std::cin >> prenom;
    std::cout << "Quel es ton age ?" << std::endl;
    std::cin >> age;

    std::cout << "Bonjour, " << prenom << " " << nom << " ! ";
    if (age < 18){
        std::cout << "Mais tu es encore mineur !" << std::endl;
    } else if (age >= 18 && age < 35){
        std::cout << "Attention bientot vieux !" << std::endl;
    } else{
        std::cout << "Go la maison de retraite !" << std::endl;
    }
}

void Exo2()
{
    float n;
    std::cout << "Inserer un nombre" << std::endl;
    std::cin >> n;
    if (paire(n)){
        std::cout << "Votre nombre est bien paire !" << std::endl;
    } else{
        std::cout << "Votre nombre est impaire !" << std::endl;
    }
}

bool paire(int n)
{
    return n%2 == 0;
}

void Exo3()
{
    int n;
    std::cout << "Veiller renter le nombre de ligne :" << std::endl;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        LigneDeCaractere('*', 10);
    }
}

void Exo3_1()
{
    int n;
    int m;
    char c;
    std::cout << "Veuiller renter le nombre de ligne :" << std::endl;
    std::cin >> n;
    std::cout << "Veuiller choisir le caractère :" << std::endl;
    std::cin >> c;
    std::cout << "Veuiller choisir le nombre de caractere :"<< std::endl;
    std::cin >> m;
    for (int i = 0; i < n; ++i) {
        LigneDeCaractere(c, m);
    }
}

void LigneDeCaractere(char c, int n)
{
    for (int i = 0; i < n; ++i) {
        std::cout << c;
    }
    std::cout << std::endl;
}