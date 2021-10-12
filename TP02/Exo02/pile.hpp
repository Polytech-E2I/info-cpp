class Pile
{
public:
    Pile(int max)
    :   m_id        { Pile::m_nb_piles + 1 },
        m_max       { max },
        m_nb_elem   {},
        m_etat      { vide },
        m_table     { new int[max]{} }
    {
        ++Pile::m_nb_piles;
    }
    ~Pile()
    {
        delete[] m_table;
        m_table = nullptr;
    }

    void            empiler(int element);
    int             depiler();
    void            afficher();
    int             nb_elements();
    static int      nb_piles();

private:

    enum pile_etat
    {
        ok,
        plein,
        vide
    };

    static int  m_nb_piles;
    const int   m_id;
    const int   m_max;
    int         m_nb_elem;
    pile_etat   m_etat;
    int*        m_table;
};
