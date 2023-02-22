#include <iostream>
using namespace std;
// Call by value
/*
struct Rectangle
{
  int length;
  int breadth;
};
int area(struct Rectangle r1)
{
  return r1.length * r1.breadth;
}
int main()
{
  struct Rectangle r = {10, 5};
  cout << area(r);
}
*/
// Call by reference
/*
struct Rectangle
{
  int length;
  int breadth;
};
int area(struct Rectangle &r1)
{
  r1.length++;
  return r1.length * r1.breadth;
}
int main()
{
  struct Rectangle r = {10, 5};
  cout << area(r);
}
*/
// Call By Address
/*
struct Rectangle
{
  int length;
  int breadth;
};
void changeLength(struct Rectangle *p, int l)
{
  p->length = l; // Changing the original length using pointer
}
int main()
{
  struct Rectangle r = {10, 5};
  changeLength(&r, 20);
  cout << r.length;
}
*/
// Array in structure
struct Test
{
  int A[5];
  int n;
};
void func(struct Test t1)
{
  t1.A[0] = 10;
  t1.A[1] = 9;
}
int main()
{
  struct Test t = {{2, 4, 6, 8, 10}, 5};
  func(t);
}