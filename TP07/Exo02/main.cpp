#include <iostream>
#include <cstdlib>

#include "Cercle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Carre.hpp"

using namespace std;

int main(void)
{
    Cercle cercle(10,10,4);
    cout <<endl<<cercle<<" surface="<<cercle.surface()<<endl;
    Triangle triangle(20,20,3);
    cout<<endl<<triangle<<" surface="<<triangle.surface()<<endl;
    Rectangle rectangle(30,30,2,5);
    cout << endl << rectangle << " surface=" << rectangle.surface() << endl;
    auto* carre = new Carre(100,100,2);
    cout << endl << *carre << " surface=" << carre->surface() << endl;
    cercle.deplace(50,50);
    cout << "déplacement " << endl;
    cout << cercle << endl << endl;

    Forme* tab[4]{};   //déclaration du tableau initialisé ci-dessous ???

    tab[0] = &cercle;
    tab[1] = &triangle;
    tab[2] = &rectangle;
    tab[3] = carre;
    float surf=0.0;
    for (int i=0; i<4; i++)  {
        surf += tab[i]->surface();
    }
    cout << "surface totale : " << surf << endl << endl;

    cout << "périmètre d'une forme tirée au hasard" << endl;
    srand((unsigned int) time(NULL));
    Forme* ptr = tab[rand()%4];  // définition de ptr
    cout << *ptr << " périmètre=" << ptr->perimetre() << endl << endl;
    cout << "destruction de carré alloué dynamiquement" << endl;
    ptr = carre; delete ptr; cout << endl;

    return EXIT_SUCCESS;
}