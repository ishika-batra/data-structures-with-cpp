#include <iostream>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
  char x;
  /* data */
};

int main()
{
  struct Rectangle r1 = {10, 5};
  cout << "Size of structure r1: " << sizeof(r1) << endl; // Output should be 9 be it's 12, This adjustment in the memory is called padding.
  cout << "Length of Rectangle r1: " << r1.length << endl;
  cout << "Breadth of Rectangle r1: " << r1.breadth << endl;
  r1.length = 15;
  r1.breadth = 7;
  cout << " New Length of Rectangle r1: " << r1.length << endl;
  cout << " New Breadth of Rectangle r1: " << r1.breadth << endl;
}