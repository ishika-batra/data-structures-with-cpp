#include <iostream>
using namespace std;
struct Rectangle
{
  int length;
  int breadth;
};
int main()
{
  struct Rectangle r = {10, 5};
  struct Rectangle *p;
  cout << "Size of r: " << sizeof(r) << endl;
  cout << "Size of p: " << sizeof(p) << endl;
}