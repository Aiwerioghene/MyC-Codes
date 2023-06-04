// mr igoh patrick
#include <iostream>
using namespace std;

const double PI = 3.142;

class LandSurvey {
public:
    string ownershipName;
    int yearSurveyed;
    double measuredLength;
    double measuredWidth;

    // Parameterized constructor
    LandSurvey(string name, int year, double length, double width) {
        ownershipName = name;
        yearSurveyed = year;
        measuredLength = length;
        measuredWidth = width;
    }

    // Calculate total surface area
    double calculateTSA() {
        return measuredLength * measuredWidth;
    }

    // Calculate perimeter
    double calculatePerimeter() {
        return 2 * (measuredLength + measuredWidth);
    }

    // Calculate total surface area after government encroachment
    double calculateTSAAfterEncroachment() {
        double newLength = measuredLength / 2.0;
        return newLength * measuredWidth;
    }

    // Calculate perimeter after government encroachment
    double calculatePerimeterAfterEncroachment() {
        double newLength = measuredLength / 2.0;
        return 2 * (newLength + measuredWidth);
    }
};

int main() {
    // Create a LandSurvey object with initial land measurements
    LandSurvey survey("Mr. Igoh Patrick", 2014, 120.0, 60.0);

    // Calculate and display the initial total surface area and perimeter
    double initialTSA = survey.calculateTSA();
    double initialPerimeter = survey.calculatePerimeter();
    cout << "Initial Land Measurements:" << endl;
    cout << "Total Surface Area: " << initialTSA << " square meters" << endl;
    cout << "Perimeter: " << initialPerimeter << " meters" << endl;

    // Calculate and display the new total surface area and perimeter after encroachment
    double newTSA = survey.calculateTSAAfterEncroachment();
    double newPerimeter = survey.calculatePerimeterAfterEncroachment();
    cout << "\nLand Measurements after Government Encroachment:" << endl;
    cout << "Total Surface Area: " << newTSA << " square meters" << endl;
    cout << "Perimeter: " << newPerimeter << " meters" << endl;

    return 0;
}
