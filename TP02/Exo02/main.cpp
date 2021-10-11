#include <iostream>
#include <cstdlib>

class Pile
{
public:
    Pile(int max)
    :_max(max)
    {
        _nb_elem=0;
        _etat=vide;
        _table=new int[max]
    }
    ~Pile()
    {
        delete [] _table;
    }

    void empiler(int);
    int depiler();
    void afficher();
    int nb_elements();
private:
    const int _max;
    int * _table;
    int _nb_elem ;
    enum pile_etat
    {
        ok,
        plein,
        vide
    };
    pile_etat _etat ;
} ;


int main(void)
{

    return EXIT_SUCCESS;
}