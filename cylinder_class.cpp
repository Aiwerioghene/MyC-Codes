#include <iostream>
using namespace std;

class Cylinder {
public:
    float pi = 22/7;
    float radius, height;

    float surface_area() {
        return 2 * pi * radius * (radius + height);
    }
};

int main() {
    Cylinder cylinder1;
    cylinder1.radius = 5;
    cylinder1.height = 10;

    Cylinder cylinder2;
    cylinder2.radius = 3;
    cylinder2.height = 6;

    float total_surface_area = cylinder1.surface_area() + cylinder2.surface_area();
    cout << "Total surface area of cylinders: " << total_surface_area << endl;

    return 0;
}
