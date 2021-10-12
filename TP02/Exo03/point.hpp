#include <cmath>

const double PI{ acos(-1) };

class Point
{
public:

    Point(double x = 0, double y = 0)
    : m_x{ x }, m_y{ y }
    {
    }

    double abcisse();
    double ordonnee();
    double rho();
    double theta();

    void translation(double tx, double ty);
    void rotation(double angle);

    void afficheCartesien();
    void affichePolaire();

private:

    double m_x;
    double m_y;
};