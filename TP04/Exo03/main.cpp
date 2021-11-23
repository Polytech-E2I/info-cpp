#include "string1.h"
#include <iostream>
#include <cstdlib>

int main(void)
{
    String ch1("essai"), ch2 = ch1, ch3('=' , 80);
    const String ch4("chaîne constante");

    ch1.nieme(1) = 'E'; // le premier caractère de la chaîne

    std::cout << ch4.nieme(1) << std::endl;

    ch2.saisie();
    ch2.concatene(" de la classe String");
    ch2.concatene('g');

    if ( ! egal(ch2, "") ) {
        ch2.affiche();
        std::cout << std::endl;
    }

    ch2.minuscule().affiche();// est-ce bien raisonnable ???
    std::cout << std::endl;

    return EXIT_SUCCESS;
}