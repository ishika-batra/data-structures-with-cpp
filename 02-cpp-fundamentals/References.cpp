#include <iostream>
using namespace std;
int main()
{
  int a = 10;
  int &r = a; // r is a reference for variable a.
  cout << a << endl;
  r++;
  cout << r << endl;
  cout << a << endl;
  int b = 30;
  r = b; // This doesn't mean r will reference to b. It will always reference to a.
  cout << a << endl;
}