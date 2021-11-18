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

#else
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

    std::cout
        << "Vous avez passé " << set.getCardinal()
        << " nombre" << (set.getCardinal() > 1 ? "s" : "")
        << ".\n"
    ;

    std::cout << "Veuillez entrer un nombre à chercher : ";
    int userInput{};
    std::cin >> userInput;

    std::cout
        << "Le nombre " << userInput << " "
        << (set.find(userInput) ? "se trouve" : "ne se trouve pas")
        << " dans cet ensemble.\n"
    ;

    return EXIT_SUCCESS;
}


#endif