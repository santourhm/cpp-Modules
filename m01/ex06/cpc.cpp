#include <iostream>
using namespace std;

class complx {
  double re, im;

public:
  // Default constructor
  complx() : re(0), im(0) { }

  // Copy constructor
  complx(const complx& c) { 
      re = c.re; 
      im = c.im; 
  }

  // Constructor with parameters
  complx(double r, double i = 0.0) { 
      re = r; 
      im = i; 
  }

  void display() {
      cout << "re = " << re << ", im = " << im << endl;
  }
};

int main() {
    complx c1(3, 4);  // Calls parameterized constructor
    complx c2 = complx(c1);   // Calls COPY CONSTRUCTOR

    cout << "Original object (c1): ";
    c1.display();

    cout << "Copied object (c2): ";
    c2.display();

    return 0;
}
