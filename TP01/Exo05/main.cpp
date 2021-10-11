#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <list>

#include "container.hpp"

int main(void)
{
    std::vector<int> vecteur{5, 20, 10, 45};
    printElementsAndSum(vecteur);

    std::array tableau{1, 2, 3, 4, 5};
    printElementsAndSum(tableau);

    std::list liste{6, 6, 6};
    printElementsAndSum(liste);

    int ctableau[]{2, 2, 3};
    printElementsAndSum(ctableau);

    return EXIT_SUCCESS;
}