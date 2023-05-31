#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};


int main()
{
    // Here i have directly created object of the class by giving parameters.
    // If we don't initialize object in this way, suppose we just initialize the object wiothout any parameter. The compiler would take care for default constructor in those cases where there is no another constructor of any type is declared.
    // But in this case we have declared a parametrized constructor, so for creating empty objects, we EXPLICITELY need to declare default constructor.
    // So below line will give error. Since there is no explicit default constructor.
    // Point p1;


    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();
    return 0;
}