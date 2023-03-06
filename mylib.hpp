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

    /**
     * @brief Dit si une année est bissextile ou non.
     */
    void Exo5();

    /**
     * @brief Dit si une année est bissextile ou non.
     * @param n L'année.
     * @return {Bool} Si l'année est bien bissextile.
     */
    bool EstBissextile(int n);

    /**
     * @brief Donne une multiplication sans l'opérateur.
     */
    void Exo6();

    /**
     * @brief Donne une multiplication sans l'opérateur.
     * @param x Nombre.
     * @param y Autre nombre.
     * @return {float} Donne le résultat de la multiplication.
     */
    float Multiplication(float x, float y);

    /**
     * @brief Donne une division et son reste sans les opérateurs.
     */
    void Exo7();

    /**
    * @brief Est un programme qui permet à un utilisateur de saisir une suite d’entiers et de faire leur somme jusqu’à ce qu’il tape “0”.
    À la fin du programme, on affichera également à la fin du programme le nombre de saisie qu’a réalisé l’utilisateur.
    */
    void Exo8();

    /**
    * @brief Est un programme qui détermine tous les diviseurs propres d’un nombre entier qui a été saisie par l’utilisateur
    */
    void Exo9();

    /**
     * @brief Écrire un programme qui détermine si un nombre est “parfait”. Un nombre est dit parfait s’il est la somme de ses diviseurs propres.
    */
    void Exo10();


#endif // _MYLIB_HPP_