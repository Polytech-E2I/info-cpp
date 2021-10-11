#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iomanip>

int main(void)
{
    constexpr int NOMBRE_MOTS = 10;
    constexpr int MAXIMUM_CHARS = 50;

    std::vector<std::string> mots{};
    mots.reserve(NOMBRE_MOTS);

    for(int i{1} ; i <= NOMBRE_MOTS ; ++i)
    {
        std::cout << "Entrez le mot n." << std::setw(2) << i << " : ";

        char buffer[MAXIMUM_CHARS + 1]{};
        std::cin.getline(buffer, MAXIMUM_CHARS, '\n');
        mots.push_back(buffer);
    }

    std::sort(mots.begin(), mots.end());
    std::cout << "\n\nMots dans l'ordre alphabétique :\n";

    int i{1};
    for(const auto& mot : mots)
    {
        std::cout << "Mot n." << std::setw(2) << i << " : " << mot << "\n";
        ++i;
    }

    for(auto motIterator = mots.end() ; motIterator != mots.begin() ; --motIterator)
    {
        std::cout << "Effacer le dernier mot ?";
        std::getchar();

        mots.erase(motIterator);

        i = 1;
        for(const auto& mot_restant : mots)
        {
            std::cout << "Mot n." << std::setw(2) << i << " : " << mot_restant << "\n";
            ++i;
        }
    }

    return EXIT_SUCCESS;
}