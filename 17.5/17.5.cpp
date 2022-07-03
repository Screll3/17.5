#include <iostream>
#include <math.h>
class vector
{
private:
    double x = 0, y = 0, z = 0;
    double x1 = 0, y1 = 0, z1 = 0;
public:
    vector(double _x, double _y, double _z, double _x1, double _y1, double _z1) : x(_x), y(_y), z(_z), x1(_x1), y1(_y1), z1(_z1)
    {}
    void PrintXYZ()
    {
        std::cout << x << ' ' << y << ' ' << z << std::endl;
        std::cout << x1 << ' ' << y1 << ' ' << z1 << std::endl;
    }
    double CalculateLength()
    {
        return sqrt(pow((x1 - x), 2) + pow((y1 - y), 2) + pow((z1 - z), 2));
    }
};
int main()
{
    double x, y, z, x1, y1, z1;
    std::cout << "enter the coordinates of two points of the vector: ";
    std::cin >> x >> y >> z >> x1 >> y1 >> z1;
    vector testvector(x,y,z,x1,y1,z1);
    testvector.PrintXYZ();
    std::cout << testvector.CalculateLength();
}