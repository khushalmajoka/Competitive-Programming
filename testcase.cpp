//
#include <iostream>
#include <iomanip>
using namespace std;
//
double TriangleArea();
double ParallelogramArea();
double RectangleArea();
double TrapezoidArea();
double CircleArea();
double ConeVolume();
double CylinderVolume();
double RectangularPrismVolume();
double TrapezoidPrismVolume();
double SphereVolume();
//
int main(){
   // Variables
   double length, height, width, radius, base1, base2;
   int area_volume, shape_type;
   const double PI = 3.141592653589;
   // Set the desired output formatting for numbers.
   cout << setprecision(2) << fixed << showpoint;
   // promts the user to choose between area and volume
   cout << "===============================\n ";
   cout << "= Enter 1-Area or 2-Volume: =\n";
   cout << "===============================\n ";
   // takes input of the user choice between area and volume
   cout << "Your entry: \n ";
   cin >> area_volume;
   // Follows an if-else to accordingly calculate area and volume
   if (area_volume == 1){
       // prompts the user to choose among Triangle, Parallelogram, Rectangle, Trapezoid, Circle to calculate area
       cout << "======================\n";
       cout << " 1- Triangle\n 2- Parallelogram\n 3- Rectangle\n 4- Trapezoid\n 5- Circle\n";
       cout << "======================\n ";
       // takes input of the user choice among Triangle, Parallelogram, Rectangle, Trapezoid, Circle
       cout << "Your entry: \n ";
       cin >> shape_type;
       // using a switch case to calculate the area of the figure chosen by user
       switch (shape_type){
           // calculate the area of triangle
       case (1):
       {
           cout << "Enter the dimensions of Triangle (in inches): \n";
           cout << "Base: ";
           cin >> base1;
           cout << "Height: ";
           cin >> height;
        
           cout << "The area of Triangle is: " << 0.5*base1*height << endl;
           break;
       }
       // calculate the area of parallelogram
       case(2):
       {
           cout << "Enter the dimensions of Parallelogram (in inches): \n";
           cout << "Base: ";
           cin >> base1;
           cout << "Height: ";
           cin >> height;
        
           cout << "The area of Parallelogram is: " << base1*height << endl;
           break;
       }
       // calculate the area of rectangle
       case (3):
       {
           cout << "Enter the dimensions of Rectangle (in inches): \n";
           cout << "Length: ";
           cin >> length;
           cout << "Breadth: ";
           cin >> width;
        
           cout << "The area of Rectangle is: " << length*width << endl;
           break;
       }
       // calculate the area of trapezoid
       case (4):
       {
           cout << "Enter the dimensions of Trapezoid (in inches): \n";
           cout << "Base1: ";
           cin >> base1;
           cout << "Base2: ";
           cin >> base2;
           cout << "Height: ";
           cin >> height;
        
           cout << "The area of Trapezoid is: " << ((base1+base2)*height)/2 << endl;
           break;
       }
       // calculate the area of circle
       case(5):
       {
           cout << "Enter the dimensions of Circle (in inches): \n";
           cout << "Radius: ";
           cin >> radius;
        
           cout << "The area of Circle is: " << PI*radius*radius << endl;
           break;
       }
       // if user not choses from 1-5 then there will be a message printing Invalid Entry
       default:
           cout << "Invalid Entry\n";
           break;
       }
   }
   // else-if with the condition which will then calculate the volume
   else if (area_volume == 2)
   {
       // prompts the user to choose among Cone, Cylinder, Rectangular Prism, Trapezoid Prism, Sphere to calculate volume
   cout << "======================\n";
   cout << "1- Cone\n2- Cylinder\n3- Rectangular Prism\n4- Trapezoid Prism\n5- Sphere\n";
   cout << "======================\n ";
   // takes input of the user choice among Cone, Cylinder, Rectangular Prism, Trapezoid Prism, Sphere
   cout << "Your entry: \n ";
   cin >> shape_type;
   // using a switch case to calculate the volume of the figure chosen by user
   switch (shape_type)
   {
       // calculate the volume of cone
   case (1):
   {
        cout << "Enter the dimensions of Cone (in inches): \n";
        cout << "Radius: ";
        cin >> radius;
        cout << "Height: ";
        cin >> height;
        cout << "The Volume of Cone is: " << (PI*radius*radius*height)/3 << endl;
       break;
   }
   // calculate the volume of cylinder
   case(2):
   {
        cout << "Enter the dimensions of Cylinder (in inches): \n";
        cout << "Radius: ";
        cin >> radius;
        cout << "Height: ";
        cin >> height;
        cout << "The Volume of Cylinder is: " << PI*radius*radius*height << endl;
       break;
   }
   // calculate the volume of Rectangular Prism
   case (3):
   {
        cout << "Enter the dimensions of Rectangular Prism (in inches): \n";
        cout << "Length: ";
        cin >> length;
        cout << "Width: ";
        cin >> width;
        cout << "Height: ";
        cin >> height;
        cout << "The Volume of Rectangular Prism is: " << length*width*height << endl;
       break;
   }
   // calculate the volume of Trapezoid Prism
   case (4):
   {
        cout << "Enter the dimensions of Trapezoid Prism (in inches): \n";
        cout << "Length: ";
        cin >> length;
        cout << "Base1: ";
        cin >> base1;
        cout << "Base2: ";
        cin >> base2;
        cout << "Height: ";
        cin >> height;
        cout << "The Volume of Trapezoid Prism is: " << (length*height*((base1+base2)/2)) << endl;
       break;
   }
   // calculate the volume of sphere
   case(5):
   {
        cout << "Enter the dimensions of Sphere (in inches): \n";
        cout << "Radius: ";
        cin >> radius;
        cout << "The Volume of Sphere is: " << (4/3)*PI*radius*radius*radius << endl;
       break;
   }
   // if user not choses from 1-5 then there will be a message printing Invalid Entry
   default:
       cout << "Invalid Entry\n";
       break;
   }
}
   // if user not choses from 1-2 (i.e. area or volume) then there will be a message printing Invalid Entry
   else
       cout << "Invalid Entry\n";

   system("pause");
   
   return 0;
}