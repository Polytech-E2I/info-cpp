#include <cassert>

class Set_Of_Integers
{
public:

    #if QUESTION == Q21 || QUESTION == Q22
    Set_Of_Integers(int max=100)
    : m_max{ max }, m_cardinal{}, m_tableau{ new int[max]{} }
    {}
    #elif QUESTION == Q23
    Set_Of_Integers(int max=100)
    : m_max{ max }, m_cardinal{}, m_tableau{ new int[max]{} }
    {}
    #endif

    Set_Of_Integers(const Set_Of_Integers& object);

    ~Set_Of_Integers();

    Set_Of_Integers& add(int element);
    int getCardinal() const;
    int getMax() const;
    bool find(int element) const;

private:
    const int m_max{ 100 };
    int m_cardinal;
    int* m_tableau;
};