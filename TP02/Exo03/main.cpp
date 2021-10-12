#include "point.hpp"
#include <iostream>
#include <cstdlib>
#include <cmath>

int main(void)
{
    Point point{ 3.0, 5.0 };

    point.afficheCartesien();
    point.affichePolaire();

    double tx{ 2.0 }, ty{ 3.0 };
    std::cout << "Translation de (" << tx << ", " << ty << ")" << "\n";
    point.translation(tx, ty);
    point.afficheCartesien();
    point.affichePolaire();

    double rot{ PI/3 };
    std::cout << "Rotation de " << rot << " radians" << "\n";
    point.rotation(rot);
    point.afficheCartesien();
    point.affichePolaire();

    std::cout << "Test d'instance constante\n";
    const Point test_const{ 4, 2 };
    test_const.afficheCartesien();
    test_const.affichePolaire();

    return EXIT_SUCCESS;
}