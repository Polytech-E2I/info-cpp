#include <cmath>

const double PI{ acos(-1) };

class Point
{
public:

    Point(double x = 0, double y = 0)
    : m_x{ x }, m_y{ y }
    {
    }

    inline double abcisse   () const
        { return m_x; }
    inline double ordonnee  () const
        { return m_y; }
    inline double rho       () const
        { return sqrt(m_x*m_x + m_y*m_y); }
    double        theta     () const;

    void translation        (double tx, double ty);
    void rotation           (double angle);

    void afficheCartesien   () const;
    void affichePolaire     () const;

private:

    double m_x;
    double m_y;
};