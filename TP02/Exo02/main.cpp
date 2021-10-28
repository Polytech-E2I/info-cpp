#include "pile.hpp"
#include <iostream>
#include <cstdlib>


int Pile::m_nb_piles{};

int main(void)
{
    Pile pile1{ 5 };

    pile1.empiler(3);
    pile1.empiler(7);
    pile1.empiler(2);
    pile1.empiler(0);
    pile1.empiler(6);
    pile1.afficher();

    std::cout << "On dépile l'élément `" << pile1.depiler() << "`\n";
    std::cout << "On dépile l'élément `" << pile1.depiler() << "`\n";
    pile1.afficher();

    const Pile pile2{ 3 };
    pile2.afficher();
    const Pile pile3{ 7 };
    pile3.afficher();

    Pile* pile4 = new Pile{ 2 };

    std::cout   << "Il y a actuellement "
                << Pile::nb_piles()
                << " piles instanciées.\n";

    delete pile4;

    std::cout   << "Il y a actuellement "
                << Pile::nb_piles()
                << " piles instanciées.\n";

    return EXIT_SUCCESS;
}