#include <iostream>
#include <cstdlib>
#include <sstream>

enum Mois
{
    Janvier = 1,
    Fevrier,
    Mars,
    Avril,
    Mai,
    Juin,
    Juillet,
    Aout,
    Septembre,
    Octobre,
    Novembre,
    Decembre,

    max_enum
};

int nbjours(int mois, int annee)
{
    switch(mois)
    {
        case Mois::Janvier:
        case Mois::Mars:
        case Mois::Mai:
        case Mois::Juillet:
        case Mois::Aout:
        case Mois::Octobre:
        case Mois::Decembre:
            return 31;
            break;
        case Mois::Avril:
        case Mois::Juin:
        case Mois::Septembre:
        case Mois::Novembre:
            return 30;
            break;
        case Mois::Fevrier:
            if // Bissextile
            (
                (annee % 400 == 0)
                || ( (annee % 4 == 0) && (annee % 100 != 0) )
            )
            {
                return 29;
            }
            else
            {
                return 28;
            }
            break;

        default:
            return 0;
    }
}

int convertStringToInt(char* string)
{
    std::stringstream convert{ string };
    int returnValue{};

    if( !(convert>> returnValue) )
    {
        returnValue = 0;
    }

    return returnValue;
}

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        std::cerr << "Usage : " << argv[0] << " <mois> <annee>\n";
        exit(EXIT_FAILURE);
    }

    int mois { convertStringToInt(argv[1]) };
    int annee{ convertStringToInt(argv[2]) };

    std::cout << "Nombre de jours dans ce mois : " << nbjours(mois, annee);

    return EXIT_SUCCESS;
}