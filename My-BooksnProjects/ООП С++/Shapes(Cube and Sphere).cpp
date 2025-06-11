#define _USE_MATH_DEFINES //M_PI = 3.14159
#include <iostream>
#include <cmath>
using namespace std;

class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = pow(side, 2) * 6;
        this->volume = pow(side, 3);
    }
};

class Sphere : public Shape{
    public:
        double radius;
        Sphere(double radius){
            this->radius = radius;
            this->area = 4 * M_PI * pow(radius, 2);
            this->volume = (4 / 3.0) * M_PI * pow(radius, 3);
        }
};

int main(int argc, char const *argv[]){
    Cube cube1(10);
    Sphere sphere1(5);

    cout << "Area of cube = " << cube1.area << " cm^2" << endl;
    cout << "Volume of cube = " << cube1.volume << " cm^3" << endl;

    cout << endl;

    cout << "Area of sphere = " << sphere1.area << " cm^2" << endl;
    cout << "Volume of sphere = " << sphere1.volume << " cm^3" << endl;

    return 0;
}
