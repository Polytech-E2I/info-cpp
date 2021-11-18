#define Q21 1
#define Q22 2
#define Q23 3

#define QUESTION Q23 // Régler cette directive pour compiler pour chaque question

#if QUESTION == Q21 || QUESTION == Q22
    #include <vector>
#else
    #include <list>
#endif


class Set_Of_Integers
{
public:

    Set_Of_Integers(int max=100)
        : m_max{ max }
        , m_container{}
    {
#if QUESTION == Q21 || QUESTION == Q22
        m_container.reserve(static_cast<std::size_t>(m_max));
#endif
    }

    Set_Of_Integers(const Set_Of_Integers& object)
        : m_max{ object.m_max }
        , m_container{ object.m_container }
    {}

    ~Set_Of_Integers()
    {}

    Set_Of_Integers& add(int element);

    inline int getCardinal() const
        { return m_container.size(); }

    inline int getMax() const
        { return m_max; }

    bool find(int element) const;

private:

    const int m_max;

#if QUESTION == Q21 || QUESTION == Q22
    std::vector<int> m_container;
#else
    std::list<int> m_container;
#endif
};