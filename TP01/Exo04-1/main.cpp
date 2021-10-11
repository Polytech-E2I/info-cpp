#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iomanip>

int main(void)
{
    constexpr int NOMBRE_PHRASES = 10;
    constexpr int MAXIMUM_CHARS = 200;

    std::vector<std::string> phrases{};
    phrases.reserve(NOMBRE_PHRASES);

    for(int i{1} ; i <= NOMBRE_PHRASES ; ++i)
    {
        std::cout << "Entrez la phrase n." << std::setw(2) << i << " : ";

        char buffer[MAXIMUM_CHARS + 1]{};
        std::cin.getline(buffer, MAXIMUM_CHARS, '\n');
        phrases.push_back(buffer);
    }

    std::reverse(phrases.begin(), phrases.end());
    std::cout << "\n\nPhrases dans l'ordre inverse :\n";

    int i{1};
    for(const auto& phrase : phrases)
    {
        std::cout << "Phrase n." << i << " : " << phrase << "\n";
        ++i;
    }

    return EXIT_SUCCESS;
}