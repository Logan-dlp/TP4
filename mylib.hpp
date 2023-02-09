#ifndef _MYLIB_HPP_
    #define _MYLIB_HPP_

    /**
     * @brief Calcule la valeur absolue d'un nombre.
     * @param x Un nombre entier.
     * @return {int} La valeur absolue de x.
     */
    int abs(int x);

    /**
     * @brief Retourne un message en fonction du nom prenom et age.
     */
    void message();

    /**
     * @brief Dit si un nombre est paire ou non.
     */
    void Exo2();

    /**
     * @brief Retourne si un nombre est paire ou non.
     * @param n Nombre entier.
     * @return {bool} Si il est paire ou non.
     */
    bool paire(int n);

    /**
     * @brief Execute n fois LigneDeCaratere().
     */
    void Exo3();

    /**
     * @brief Execute n fois LigneDeCaratere() et où on peut choisir le caractère afficher et son nombre sur une ligne.
     */
    void Exo3_1();

    /**
     * @brief Retourne une ligne de caractère.
     * @param c Caratere retourné.
     * @param n Le nombre de fois ou le caractere est retourné.
     */
    void LigneDeCaractere(char c = '*', int n = 10);

    void Exo5();

    bool EstBissextile(int n);

#endif // _MYLIB_HPP_