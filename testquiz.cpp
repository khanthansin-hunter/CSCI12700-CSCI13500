#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double input_radius, output_area;
    cout << "Enter the radius of a circle ";
    cin >> input_radius;
    output_area = M_PI * pow(input_radius, 2);
    cout << "The area of a cirle with radius " << input_radius << " is " << output_area;
}