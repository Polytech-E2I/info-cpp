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

    pile1.depiler();
    pile1.depiler();
    pile1.afficher();

    Pile pile2{ 3 };
    Pile pile3{ 7 };

    std::cout   << "Il y a actuellement "
                << Pile::nb_piles()
                << " piles instanciées.\n";

    return EXIT_SUCCESS;
}