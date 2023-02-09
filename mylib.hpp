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
     * @brief Execute n fois LigneDeCharatere().
     */
    void Exo3();

    /**
     * @brief Execute n fois LigneDeCharatere() et où on peut choisir le charactère afficher.
     */
    void Exo3_1();

    /**
     * @brief Retourne une ligne de 10 charactère.
     */
    void LigneDeCharactere(char c);

#endif // _MYLIB_HPP_