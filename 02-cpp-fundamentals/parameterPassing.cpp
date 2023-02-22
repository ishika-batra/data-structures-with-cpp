#include <iostream>
using namespace std;
/*CALL BY VALUE
void swap(int x, int y) // 10 and 20 passed in formal parameters
{
  int temp;
  temp = x;
  x = y;
  y = temp; // x=20 y=10
}
int main()
{
  int a = 10;
  int b = 20;
  swap(a, b);
  cout << a << " " << b; // a=10, b=20
} // Not swapped
*/
/*CALL BY ADDRESS
void swap(int *x, int *y) // 10 and 20 passed in formal parameters
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp; // x=20 y=10
}
int main()
{
  int a = 10;
  int b = 20;
  swap(&a, &b);
  cout << a << " " << b; // a=20, b=10
} // Values got swapped
*/
/* CALL BY REFERENCE
void swap(int &x, int &y) // 10 and 20 passed in formal parameters
{
  int temp;
  temp = x;
  x = y;
  y = temp; // x=20 y=10
}
int main()
{
  int a = 10;
  int b = 20;
  swap(a, b);
  cout << a << " " << b; // a=20, b=10
} // swapped
*/
