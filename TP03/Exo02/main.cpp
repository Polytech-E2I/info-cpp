#define Q21 1
#define Q22 2
#define Q23 3

#define QUESTION Q21

#include "setofintegers.hpp"
#include <iostream>
#include <cstdlib>

#if QUESTION == Q21
int main(void)
{
    Set_Of_Integers set;
    set.add(4).add(2).add(7).add(3);

    std::cout << "Il y a " << set.getCardinal() << " éléments sur " << set.getMax() << ".\n";

    int element{8};

    std::cout << "L'élément " << element << " ";
    if(set.find(element))   { std::cout << "est"; }
    else                    { std::cout << "n'est pas"; }
    std::cout << " présent." << "\n";

    return EXIT_SUCCESS;
}

#elif QUESTION == Q22
int main(int argc, char* argv[])
{
    if(argc <= 1)
    {
        std::cerr << "Erreur : veuillez passer des nombres en arguments.\n";
        exit(EXIT_FAILURE);
    }

    Set_Of_Integers set{argc - 1};

    for(int i{1} ; i < argc ; ++i)
    {
        set.add(atoi(argv[i]));
    }

    std::cout << "Vous avez passé " << set.getCardinal() << " nombre" << (set.getCardinal() > 1 ? "s" : "") << ".\n";

    return EXIT_SUCCESS;
}


#endif