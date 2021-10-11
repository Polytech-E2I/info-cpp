#include <iostream>
#include <cstdlib>
#include <array>
#include <string>

struct essai
{
    int n;
    double x;
};

struct essai remise0_valeur()
{
    return {0, 0.0};
}
void remise0_reference(struct essai& input)
{
    input = {0, 0.0};
}

int main(void)
{
    struct essai testValeur{5, 3.0};
    std::cout << "testValeur : " << testValeur.n << " " << testValeur.x << "\n";
    testValeur = remise0_valeur();
    std::cout << "testValeur : " << testValeur.n << " " << testValeur.x << "\n";

    struct essai testReference{8, 4.0};
    std::cout << "testReference : " << testReference.n << " " << testReference.x << "\n";
    remise0_reference(testReference);
    std::cout << "testReference : " << testReference.n << " " << testReference.x << "\n";

    return EXIT_SUCCESS;
}