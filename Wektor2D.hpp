class Wektor2D
{

private:
    double x, y;

public:
    Wektor2D() : x(0), y(0){}
    Wektor2D(double x, double y) : x(x), y(y) {}

    // Gettery i settery
    double getX() const { return x; }
    double getY() const { return y; }
    void   setX(double noweX) { x = noweX; }
    void   setY(double noweY) { y = noweY; }

    // Przeciążenie operatora + (dodawanie wektorów)
    Wektor2D operator+(const Wektor2D& nowe) const { return Wektor2D(x + nowe.x, y + nowe.y); }

    // Przeciążenie operator * (iloczyn skalarny)
    double operator*(const Wektor2D& nowe) const { return x * nowe.x + y * nowe.y; }
};