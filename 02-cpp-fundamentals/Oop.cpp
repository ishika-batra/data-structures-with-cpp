#include <iostream>
#include <stdio.h>
using namespace std;

class Rectangle
{
  int length;
  int breadth;

public:
  int initialize(int l, int b)
  {
    length = l;
    breadth = b;
  }
  int area(int l, int b)
  {
    return l * b;
  }
  int peri(int l, int b)
  {
    return 2 * (l + b);
  }
};
int main()
{
  Rectangle r;
  int length, breadth;
  cout << "Enter the length and breadth: " << endl;
  cin >> length;
  cin >> breadth;

  r.initialize(length, breadth);
  int a = r.area(length, breadth);
  int p = r.peri(length, breadth);
  cout << " The Area of Rectangle is: " << a << endl;
  cout << "The Perimeter of Rectangle is: " << p << endl;
}
