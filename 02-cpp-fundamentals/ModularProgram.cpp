#include <iostream>
#include <stdio.h>
using namespace std;
int area(int l, int b)
{
  return l * b;
}
int peri(int l, int b)
{
  return 2 * (l + b);
}
int main()
{
  int length = 0, breadth = 0;
  cout << "Enter the length and breadth: " << endl;
  cin >> length;
  cin >> breadth;
  int a = area(length, breadth);
  int p = peri(length, breadth);
  cout << " The Area of Rectangle is: " << a << endl;
  cout << "The Perimeter of Rectangle is: " << p << endl;
}