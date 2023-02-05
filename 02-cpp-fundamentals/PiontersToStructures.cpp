#include <iostream>
using namespace std;
struct Rectangle
{
  int length;
  int breadth;
};

// Structure to pointer
/*int main()
{
  Rectangle r = {10, 5};
  Rectangle *p = &r;
  cout << "Size of r: " << sizeof(r) << endl;
  cout << "Size of p: " << sizeof(p) << endl;
  r.length = 15;
  cout << r.length << endl;
  p->length = 20;
  cout << r.length << endl;
}*/

// Creating object dynamically in a heap using pointer
int main()
{
  Rectangle *p;
  p = new Rectangle; // Dynamic allocation in heap
  p->length = 15;
  p->breadth = 7;
  cout << p->length << endl;
  cout << p->breadth << endl;
}