#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  int length = 0;
  int breadth = 0;
  cout << "Enter the length and breadth of Rectangle: " << endl;
  cin >> length;
  cin >> breadth;
  cout << " The Area of Rectangle is: " << length * breadth << endl;
  cout << "The Perimeter of Rectangle is: " << 2 * (length + breadth) << endl;
}