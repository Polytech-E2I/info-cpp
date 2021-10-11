#include <iostream>
#include <cstdlib>
#include <array>
#include <string>

int main(void)
{
    std::array<std::string, 2> chaines;

    int i{1};
    for(auto& element : chaines)
    {
        std::cout << "Entrez la chaîne n." << i << " : ";
        std::cin >> element;
        ++i;
    }

    size_t pos = chaines[0].find(chaines[1]);
    if(pos != chaines[0].npos)
    {
        chaines[0].replace(pos, chaines[1].size(), "");
    }

    std::cout << chaines[0] << "\n";

    return EXIT_SUCCESS;
}