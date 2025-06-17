#include <iostream>
using namespace std;

class Circle
{
    private:
        double radius;
    
    public:

        const double PI = 3.141592;

        Circle();
        Circle(double rds);
        Circle(const Circle& c);
        ~Circle();

        void setRadius(double rds);
        double getRadius() const;
        double getPerimeter() const;
        double getArea() const;

};

Circle::Circle() :radius(0.0) { cout << "매개변수 있는 생성자" << endl; }
Circle::Circle(double r) :radius(r) { cout << "매개변수 없는 생성자" << endl; }
Circle::Circle(const Circle& c) :radius(c.radius) { cout << "복사 생성자" << endl; }
Circle::~Circle() { cout << "소멸자" << endl; }

void Circle::setRadius(double r) { radius = r; }
double Circle::getRadius() const { return radius; }
double Circle::getPerimeter() const { return radius*2*PI; }
double Circle::getArea() const { return radius*radius*PI; }

int main()
{
    Circle c1;
    cout << "r: " << c1.getRadius() << endl;
    cout << "p: " << c1.getPerimeter() << endl;
    cout << "a: " << c1.getArea() << endl;

    return 0;
}